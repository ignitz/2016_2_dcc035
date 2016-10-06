#include <ilcplex/ilocplex.h>
#include <string>
#include <vector>
#include <iostream>


ILOSTLBEGIN

using namespace std;

int main (int argc, char *argv[]) {
   // Classe que controi o ambiente Cplex. 
   // IloEnv é uma handle class
   IloEnv env;
   try {
      
     // Objeto que agrupa os objetos(extractables) que irão definir
     // modelo.
     IloModel model(env);  

     // Classes de objetos importantes:
     // IloNumVar --> representa as variaveis do modelo;
     // IloRange  --> define restrições na forma l <= expr <= u;
     // IloObjective --> define a função objetivo;
     // depois de criar objetos destas classes é preciso adicionar
     // no modelo model.add(object);
 
      IloNumVarArray vars(env);
      // IloNumVar(ambiente, limite inferior, limite superior
      // e tipo: ILOFLOAT , ILOINT ou ILOBOOL.
      vars.add(IloNumVar(env, 0.0, 40.0));
      vars.add(IloNumVar(env));
      vars.add(IloNumVar(env));
     
      // adiciona a função objetivo.
      IloObjective obj = IloMaximize(env, vars[0] + 2 * vars[1] + 3 * vars[2]);
      model.add(obj);
      
      // adiciona as restrições.
      model.add( - vars[0] +     vars[1] + vars[2] <= 20);
      model.add(   vars[0] - 3 * vars[1] + vars[2] <= 30);


      // Objeto responsável por lê o modelo definido por IloModel,
      // extrair os dados na representação apropriada e resolver o problema
      // de otimização definido.
      IloCplex cplex(model);

      // Resolve o modelo.
      if ( !cplex.solve() ) {
         env.error() << "Failed to optimize LP." << endl;
         throw(-1);
      }

      IloNumArray vals(env);
      env.out() << "Solution status = " << cplex.getStatus() << endl;

      // retorna valor objetivo
      env.out() << "Solution value = " << cplex.getObjValue() << endl;

      IloNum val1 = cplex.getValue(vars[0]);
      env.out() << "valor de x1 = " << val1 << endl;
      
      // Pega os valores das variaveis.
      cplex.getValues(vals, vars);
      env.out() << "Values = " << vals << endl;
   }
   catch (IloException& e) {
      cerr << "Concert exception caught: " << e << endl;
   }
   catch (...) {
      cerr << "Unknown exception caught" << endl;
   }

   // Finaliza o ambiente explicitamente.
   env.end();

   return 0;
}
