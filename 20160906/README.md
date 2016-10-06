# Aula de PO SOLVER (2016/09/06)

> A aula foi com o monitor

O início da aula é uma introdução de modelos, problemas, etc.

### Pacotes de otimização

Figura esquemática:

\[(Dados\; \times \;Modelo) \Rightarrow PLSolver \Rightarrow Solucao\]

Dentro do bloco solver temos:
- Heurísticas
- B & B
- Cortes
- Relatórios

### Exemplos de Pacotes

- **ILOG CPLEX (IBM)**:
  - Linguagens: C++, JAVA, Python...
  - Modelagem....
- **Gurobi**
- **GLPK**

### Solvers: benchmark

CPLEX e Gurobi são as meninas bonitas do condomínio.


### Sumário da apresentação

- AMLPL/GMPL
- Exemplo: Problema da dieta
- Analisar relatórios do GLPK
- Utilizar uma linguagens de programação (C++) integrada a um Solver (ILOG Cplex Concert Technology).
  - Problema da atribuição

### AMPL(GMPL)

> Vou pesquisar, não compensar copiar. OU NÃO.

Está mostrando exemplos de sintaxe, passando:

- Conjuntos
- Parâmetros
- Declaração de variáveis

### Formato LP

> .......

### Exemplo: Problema da Dieta (modelo)

```
# Conjuntos
set Alimento;
set Nutrientes;

# Variáveis
var x(Alimento) >= 0;

# Parâmetros
param custo(Alimento) >= 0;
param quantidade(Nutrientes, Alimento) >= 0;
param qtd_mínima(Nutrientes) >= 0;

... cri cri cri

```

```
set Alimento := maca, pao, doce;
set Nutrientes :=  vitamina_a, vitamina_b, vitamina_c;

# Variáveis
var(Alimento)

```

### Exemplo de atribuição

Conjunto de tarefas e trabalhadores

\[\min \;C = \sum {{c_{ij}}} {x_{ij}}\]

Sujeito a:

Cada trabalhador é designado a uma só atrefa

\[\sum\limits_{j = 1}^n {{x_{ij}} = 1} \]
\[i \in \{ 1, \ldots ,n\} \]

Cada tarefa é executada apenas por um trabalhador

\[\sum\limits_{i = 1}^n {{x_{ij}} = 1} \]
\[j \in \{ 1, \ldots ,n\} \]

Com ${x_{ij}} = 0, 1$

> Agora ele foi pro caixeiro viajante e acolchoamento de veículos tem o mesmo modelo acima.

Se o veículo tem capacidade (3 toneladas). Se ta cheio, tem que esvaziar. Então insere uma restrição que fala:

\[\sum\limits_{i\; \in \;V}^{} {{d_i}{x_{ik}}}  \le Q\]

O contexto da mochila.

> Agora vem o código lindo em CPLEX dentro do C++.

### CPLEX

Ambiente

```cpp
int main(void) {
  IloEnv env_;
  IioModel model(env_);
  /*...*/
  // Variáveis de decisão
  IloArray<IloNumVarArray>
  /*XULAMBIS...*/

  // Função objetivo
  IloExpr funcao_objetivo(env_);
  for(XULAMBIS) ...;

  // Aqui coloca duas restrições
  /*XULAMBIS...*/
  ...
  model.add(expr == 1);
  ...

  // Manda bala
  IloCplex cplex(model);
  if (cplex.solve()) {
    /*XULAMBIS*/
  }
  ...
}
```

> Não consegui acompanhar.

Ele tenta interpretar o modelo passado e tenta otimizar.
