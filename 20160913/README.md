# Dualidade

### Primal

$$\begin{array}{l}
\max f(x) = {x_1} + {x_2}\\
\begin{array}{* {20}{c}}
\begin{array}{l}
{x_1} + 2{x_2} \le 7\\
2{x_1} + {x_2} \le 8\\
{x_2} \le 3
\end{array}&\begin{array}{l}
({y_1})\\
({y_2})\\
({y_3})
\end{array}
\end{array}\\
{x_1},{x_2} \ge 0
\end{array}$$

> Quanto que vou ganhara vs quanto eu vou gastar

### Dualidade

\[\begin{array}{l}
\min g(y) = 7{y_1} + 8{y_2} + 3{y_3}\\
\begin{array}{* {20}{c}}
\begin{array}{l}
1{y_1} + 2{y_2} + 0{y_3} \le 1\\
2{y_1} + 1{y_2} + 1{y_3} \le 1
\end{array}&\begin{array}{l}
({x_1})\\
({x_2})
\end{array}
\end{array}\\
{y_1},{y_2},{y_3} \ge 0
\end{array}\]

> Exemplos como pai paga um custo pro filho falar na faculdade.
> Quando você tem que subsidiar, o custo pode ser negativo.

Voltando ao problema

\[\begin{array}{* {20}{c}}
\begin{array}{l}
\max f(x) = {c^T}x\\
\begin{array}{* {20}{c}}
{Ax \le b}&{(y)}
\end{array}\\
x \ge 0
\end{array}&\begin{array}{l}
\min g(y) = {b^T}y\\
{A^T}y \le c\\
y \ge 0
\end{array}
\end{array}\]

> Quero que o custo (dual) seja igual quanto eu ganho.
> Entao a desigualdades que temos na dualidade eh invertida para maior e igual.
> Falou sobre as restricoes sobre as viariaveis no primal e dual.
> Qualquer dos problemas seguem a linha do Primal, Dual e Primal-dual.

1. O Dual do Dual é o Primal.
2.
\[\begin{array}{l}
\begin{array}{* {20}{c}}
{Ax \le b \Rightarrow {y^T}Ax \le {y^T}b}&{{A^T}y \ge c \Rightarrow {x^T}{A^T}y \le {x^T}c = {c^T}x}
\end{array}\\
{(Ax)^T}y \le {y^T}b = {b^T}y\\
{x^T}{A^T}y \le {y^T}b\\
\\
f(x) = {c^T}x \le {b^T}y = g(y)
\end{array}\]

### Situações possíveis

- O ótimo de um vai ser ótimo do outro.
- Se no primal a solucao for ilimitado o do dual vai ser inviável. Análogo para Dual ilimitado e Primal.
- Primal nao tem solução viável, o Dual também e inviável ou o Dual e ilimitado.

\[
c^Tx - b^Ty = 0\\
(A^Ty)^Tx - b^Ty \geq 0\\
y^TAx - y^Tb \geq 0\\
y^T(Ax -b) \geq 0 \implies\\
y^T(Ax-b) = 0\\
\]
Continuando:
\[
c^Tx -(Ax)^Ty \leq 0 \\
x^Tc - x^TA^Ty \leq 0 \\
x^T(c-A^Ty) \leq 0 \implies\\
x^T(c - A^T) = 0
\]

> Agora ele ta lembrando quando colocamos a variavel de folga.
> Colocando também variaveis de folga subtraindo no Dual.

O que acontece?  
O que é $Ax - b$ ???

\[
y^Tx_f = 0\\
x^Ty_f = 0
\]

Voltando ao problema grafico classico pra achar o x*.

\[\begin{array}{* {20}{c}}
\begin{array}{l}
{y_2}{x_4} = 0\\
{y_3}{x_5} = 0
\end{array}&\begin{array}{l}
{x_1}{y_4} = 0\\
{x_2}{y_5} = 0
\end{array}
\end{array}\]

Lembrando da solução que é:  
\[{y^T} = \left( {\begin{array}{* {20}{c}}
3&2&0&0&1
\end{array}} \right)\]

> Substitue la na equacao Xulambis e monta o sistema.

\[\begin{array}{l}
\left\{ \begin{array}{l}
{y_1} + 2{y_2} = 1\\
2{y_1} + {y_2} = 1
\end{array} \right.\\
{y^T} = \left( {\frac{1}{3},\frac{1}{3},0} \right)
\end{array}\]

> Ta, o que acontece se acharmos a solução?
> Sei, la... vamos pra outra coisa mais simples.

\[\begin{array}{l}
f(x) = {c^T}x = {b^T}y\\
f(x) = {y^T}b\\
\frac{{\partial f(x)}}{{\partial b}} = y
\end{array}\]

> Entao se variarmos as restricoes no Primal, temos que pela derivada quanto e aumentado na funcao objetivo,
> Em alguma situacao a solucao pode ficar presa em outras restricoes, entao esse ajuste pode nao ser infinito.  
> Cabuloso, jhow.

Voltando o problema inicial: "O que eu ganho eh igual ao que eu gasto?"  
A pergunta eh, qual destes recursos eh mais importante pra você?

> Ele esta discutindo sobre a restricao 3 que eh $y_3 = 0$.

Se estou disposto pagar 0 no recurso entao nao serve pra mim.

Se o recurso esta sobrando entao nao tenho pra que comprar mais.

Se o preco for maior que o $y_i$ eh melhor vender o estoque do que produzir.

\[\begin{array}{ {20}{l}}
{\max f(x) = {c^T}x}\\
{Ax = b}\\
{x \ge 0}\\
{}\\
{f(x) = c_B^T{x_B} + c_N^T{x_N}}\\
{B{x_B} + N{x_N} = b}\\
\begin{array}{l}
{x_B},{x_N} \ge 0\\
\\
{x_f} = 0\\
{X_B} = {B^{ - 1}}b\\
f(x) = C_B^T{B^{ - 1}}b = g(y) = {b^T}y = {y^T}b\\
{y^T} = C_B^T{B^{ - 1}}
\end{array}
\end{array}\]

> Vou mudando de base ate chegar no resultado. Nao preciso... quer dizer, na verdade estou fazendo o sisteminha de $y$.

Ai no quadro te mostro onde esta este desgracado.

$-C_B^TB^{-1}$  | $f(x*)-C_B^Tx_B^{* }$
------------- | -------------
$B^{-1}$  | $B^{-1}b$

Outra tabela maior.

$x_B$ | $x_N$ | $f(x*)-C_B^Tx_B^{* }$
--- | --- | ---
$I$  | $B^{-1}N$ | $B^{-1}b$
