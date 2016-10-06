#Análise de Sensibilidade

\[\begin{array}{l}
\max f(x) = \frac{3}{2}{x_1} + {x_2}\\
{x_1} + 2{x_2} \le 7\\
2{x_1} + {x_2} \le 8\\
{x_2} \le 3\\
{x_1},{x_2} \ge 0
\end{array}\]

|$x_1$|$x_2$|$x_3$|$x_4$|$x_5$||
|---|---|---|---|---|---|
|$0$|$1$|$\frac{2}{3}$|$-\frac{1}{3}$|$0$|$2$|
|$1$|$0$|$-\frac{1}{3}$|$\frac{2}{3}$|$0$|$3$|
|$0$|$0$|$-\frac{2}{3}$|$\frac{1}{3}$|$1$|1|
|$0$|$0$|$-\frac{1}{6}$|$-\frac{2}{3}$|$0$|$f(x)-6,5$|

### Variação do termo independente
\[\begin{array}{l}
b \to b'\\
f(x) = {c^T}x = {b^T}y = g(y)\\
\frac{{\partial f(x)}}{{\partial b}} = y\\
x* = ({x_B},{x_N}) = {B^{ - 1}}b\\
{x_B} = {B^{ - 1}}b\\
{x_B} = {B^{ - 1}}b' = {B^{ - 1}}b + {B^{ - 1}}i \ge 0\\
{x_B} = \left( {\begin{array}{* {20}{c}}
2\\
3\\
1
\end{array}} \right) + {B^{ - 1}}\left( {\begin{array}{*{20}{c}}
p\\
0\\
0
\end{array}} \right) \ge 0\\
\left( {\begin{array}{*{20}{c}}
{\frac{2}{3}}&{ - \frac{1}{3}}&0\\
{ - \frac{1}{3}}&{\frac{2}{3}}&0\\
{ - \frac{2}{3}}&{\frac{1}{3}}&1
\end{array}} \right)\left( {\begin{array}{*{20}{c}}
p\\
0\\
0
\end{array}} \right)\\
\begin{array}{*{20}{c}}
\begin{array}{l}
\frac{2}{3}p \ge  - 2\\
 - \frac{1}{3}p \ge  - 3\\
 - \frac{2}{3}p \ge  - 1
\end{array}&{ \Rightarrow  - 3 \ge p \ge \frac{3}{2}}
\end{array}
\end{array}\]

### Variação do vetor c
Escolhe o $x_2 \rightarrow x_2 + p$ para analisar na tabela.

$\max f(x) = \frac{3}{2}{x_1} + {(1 + p)x_2}$

|$x_1$|$x_2$|$x_3$|$x_4$|$x_5$||
|---|---|---|---|---|---|
|$0$|$p$|$\frac{2p}{3}$|$-\frac{p}{3}$|$0$|$2p$|
|$1$|$0$|$-\frac{1}{3}$|$\frac{2}{3}$|$0$|$3$|
|$0$|$0$|$-\frac{2}{3}$|$\frac{1}{3}$|$1$|1|
|$0$|$0$|$-\frac{2p}{3}-\frac{1}{6}$|$\frac{p}{3}-\frac{2}{3}$|$0$|$f(x)-6,5 - 2p$|

Para o ótimo não mudar temos $c_i \leq 0$ $\forall i$.  
$-\frac{1}{4} \leq p \leq 2$

E se add $p$ em $x_3$?

### Acrescentar uma variável nova

\[\begin{array}{l}
\max f(x) = \frac{3}{2}{x_1} + {x_2} + {c_6}{x_6}\\
{\text{Supondo que:}}\\
{x_6} \to {c_6} = 2\\
{A_6} = \left( {\begin{array}{* {20}{c}}
1\\
2\\
1
\end{array}} \right)\\
{c_6} - {z_6} = {c_6} - \underbrace {{c_B}^T{B^{ - 1}}}_{y{\rm{ no dual}}}{A_6}\\
{c_6} - {y^T}{A_6}\\
2 - \left( {\begin{array}{* {20}{c}}
{\frac{1}{6}}&{\frac{2}{3}}&0
\end{array}} \right)\left( {\begin{array}{* {20}{c}}
1\\
2\\
1
\end{array}} \right) = 2 - \frac{3}{2} = \frac{1}{2} \ge 0{\text{ então me interessa}}
\end{array}\]

### Acrescentar uma restrição

\[\begin{array}{l}
{x_1} + {x_2} \le 8\\
\underbrace {{x_1} + {x_2}}_5 + {x_6} = 8 \Rightarrow {x_6} = 3 \ge 0
\end{array}\]
Como $x_6 \geq 0$, então não altera o ponto ótimo.
\[
{x_1} + {x_2} \le 4\\
{x_6} = -1 \le 0
\]
Então "cobre" o ponto ótimo e consequentemente muda.

Como fica na tabela?

|$x_1$|$x_2$|$x_3$|$x_4$|$x_5$|$x_6$||
|---|---|---|---|---|---|---|
|$0$|$1$|$\frac{2}{3}$|$-\frac{1}{3}$|$0$|$0$|$2$|
|$1$|$0$|$-\frac{1}{3}$|$\frac{2}{3}$|$0$|$0$|$3$|
|$0$|$0$|$-\frac{2}{3}$|$\frac{1}{3}$|$1$|$0$|$1$|
|$1$|$1$|$0$|$0$|$0$|$1$|$4$|
|$0$|$0$|$-\frac{1}{6}$|$-\frac{2}{3}$|$0$|$0$|$f(x)-6,5$|

Pivotando, temos:

|$x_1$|$x_2$|$x_3$|$x_4$|$x_5$|$x_6$||
|---|---|---|---|---|---|---|
|$0$|$1$|$\frac{2}{3}$|$-\frac{1}{3}$|$0$|$0$|$2$|
|$1$|$0$|$-\frac{1}{3}$|$\frac{2}{3}$|$0$|$0$|$3$|
|$0$|$0$|$-\frac{2}{3}$|$\frac{1}{3}$|$1$|$0$|$1$|
|$1$|$0$|$-\frac{2}{3}$|$\frac{1}{2}$|$0$|$1$|$2$|
|$0$|$0$|$-\frac{1}{6}$|$-\frac{2}{3}$|$0$|$0$|$f(x)-6,5$|

|$x_1$|$x_2$|$x_3$|$x_4$|$x_5$|$x_6$||
|---|---|---|---|---|---|---|
|$0$|$1$|$\frac{2}{3}$|$-\frac{1}{3}$|$0$|$0$|$2$|
|$1$|$0$|$-\frac{1}{3}$|$\frac{2}{3}$|$0$|$0$|$3$|
|$0$|$0$|$-\frac{2}{3}$|$\frac{1}{3}$|$1$|$0$|$1$|
|$0$|$0$|$-\frac{1}{3}$|$-\frac{2}{3}$|$0$|$1$|$-1$|
|$0$|$0$|$-\frac{1}{6}$|$-\frac{2}{3}$|$0$|$0$|$f(x)-6,5$|

Fazendo a análise com o Dual-Simplex pra mudar a base:  
(Sempre negativos)

\[\begin{array}{l}
\frac{{1/6}}{{1/3}} = \frac{1}{2}\\
\frac{{2/3}}{{1/3}} = 2
\end{array}\]

Pegando o mínimo é $x_3$. E segue pelo mundo afora.
