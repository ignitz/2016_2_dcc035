#include <ilcplex/ilocplex.h>
#include <stdio.h>
#include <iostream>
#include <sstream>

ILOSTLBEGIN

IloArray<IloNumArray> NumMatrix; numbers matrix

using std::cout;
using std::stringstream;

unsigned getNumConstraints(IloModel m) {
	unsigned count = 0;
	IloModel::Iterator iter(m);
	while (iter.ok()) {
		if ((*iter).asConstraint().getImpl()) {
			++count;
		}
		++iter;
	}
	return count;
}

int main(void) {
	IloEnv env_;
	IloModel model(env_);

	try {
		int i;
		int j;
		char varName[24];
		IloInt nPessoas_ = 11;
		IloInt nTarefas_ = 11;
		int custos[11][11] = { { 22, 27, 33, 24, 30, 12, 2, 3, 4, 5, 99 }, { 27, 29, 25, 24, 33, 11, 44, 21, 7, 8, 13 },
				{ 33, 25, 21, 30, 32, 2, 23, 1, 3, 19, 21 }, { 24, 24, 30, 19, 37, 77, 25, 32, 1, 32, 2 }, { 12, 17, 13,
						14, 20, 12, 12, 13, 14, 15, 19 }, { 27, 29, 25, 24, 33, 11, 44, 21, 7, 8, 13 }, { 33, 25, 21,
						30, 32, 2, 23, 1, 3, 19, 21 }, { 24, 24, 30, 19, 37, 77, 25, 32, 1, 32, 2 }, { 30, 33, 32, 37,
						31, 19, 18, 17, 2, 37, 32 }, { 10, 23, 12, 17, 11, 29, 28, 27, 22, 27, 12 }, { 22, 47, 33, 34,
						33, 32, 32, 33, 34, 35, 29 } };

		 variaveis de decisão.
		IloArray<IloNumVarArray> x(env_, nPessoas_);
		for (i = 0; i < nPessoas_; ++i) {
			x[i] = IloNumVarArray(env_, nTarefas_);
			for (j = 0; j < nTarefas_; ++j) {
				if (i != j) {
					sprintf(varName, "x_%d_%d", i, j);
					x[i][j] = IloNumVar(env_, 0, 1, ILOBOOL,varName);
				}
			}
		}

		 função objetivo.
		IloExpr funcao_objetivo(env_);
		for (i = 0; i < nPessoas_; ++i) {
			for (j = 0; j < nTarefas_; ++j) {
				if (i != j) {
					funcao_objetivo += custos[i][j] * x[i][j];
				}
			}
		}

		IloObjective obj = IloMinimize(env_, funcao_objetivo);
		model.add(obj);
		funcao_objetivo.end();

		 restrição 1: cada pessoa é atribuida a exatamente uma tarefa.
		for (i = 0; i < nPessoas_; ++i) {
			IloExpr expr(env_);
			for (j = 0; j < nTarefas_; ++j) {
				if (i != j) {
					expr += x[i][j];
				}
			}
			model.add(expr == 1);
			expr.end();
		}

		 restrição 2: cada tarefa é atribuida a exatamente uma pessoa.
		for (j = 0; j < nTarefas_; ++j) {
			IloExpr expr(env_);
			for (i = 0; i < nPessoas_; ++i) {
				if (i != j) {
					expr += x[i][j];
				}
			}
			model.add(expr == 1);
			expr.end();
		}

		IloCplex cplex(model);
		cplex.exportModel("model.lp");
		 Resolve o modelo.
		if (!cplex.solve()) {
			env_.error() << "Failed to optimize LP." << std::endl;
			throw(-1);
		}

		env_.out() << "Num Constraints = " << getNumConstraints(model) << endl;
		env_.out() << "Solution status = " << cplex.getStatus() << endl;
		env_.out() << "Solution cost = " << cplex.getObjValue() << endl;
		 valor das variaveis
		for (i = 0; i < nPessoas_; ++i) {
			for (int j = 0; j < nTarefas_; ++j) {
				if (i != j) {
					env_.out() << x[i][j].getName() << " = " << cplex.getValue(x[i][j]) << endl;
				}
			}
		}

	} catch (IloException& e) {
		cerr << "Concert exception caught: " << e << endl;
	} catch (...) {
		cerr << "Unknown exception caught" << endl;
	}

	env_.end();
	return 0;
}

