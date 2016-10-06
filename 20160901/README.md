# Aula de PO (2016/09/01)

\[\begin{array}{l}
max\;f(x) = {c^T}x\\
Ax = b\\
x >  = 0
\end{array}\]

\[\begin{array}{l}
\max \;f(x) = {x_1} + {x_2}\\
{x_1} + 2{x_2} + {x_3} = 7\\
2{x_1} + {x_2} + {x_4} = 8\\
{x_2} + {x_5} = 3\\
{x_1},\;{x_2},\;{x_3},\;{x_4},\;{x_5} \ge 0
\end{array}\]

> Tabela loka

\[max\;f(x) = {C_N}{x_N} + {C_B}{x_B}\]

\[\begin{array}{l}
N{x_n} + B{x_B} = b\\
{x_N},{x_B} \ge 0\\
{x_N} = 0 \Rightarrow B{x_B} = b
\end{array}\]

$Dim A = min (3, 5)$

$B$ como é básica tem inversa

> Agora faz  a álgebra pra isolar o $x_B$

$$
Bx_B = b\\
x_B = B^{-1}b
$$


Com 3 ou mais restrições passando pelo mesmo ponto pode ocorrer um ciclo.
Somente acontece se eu tiver uma solução básica degenerada.

Exemplo em que a solução não tem uma solução viável imediata.

$$
max f(x) = x_1+ x_2\\
x_1 + 2x_2 - x_3 = 7\\
2x_1 + x_2 + x_4 = 8\\
x_2 + x_5 = 3\\
x_1, x_2, x_3, x_4, x_5 \geq 0\\
$$

> Olhe o sinal negativo em $x_3$.

Veja que $(0, 0, -7, 8, 3)$ não é viável.

Criando um elemento artificial na tabela.

$$
x_1 + 2x_2 >= 7\\
x_1 + 2x_2 - x_3 = 7\\
x_1 + 2x_2 - x_3 + x_a = 7
$$

Suponha que $x_a > 0$. Então $x_1 + 2x_2 - x_3 < 7$. Se $x_3 = 0$  então $x_1 + 2x_2 < 7$.

> Não entendi a motivação pra isso.
**Procurar depois no livro**.

Com isso ele cria o objetivo pra minimizar a função com a variável artificial, assim é inserido mais uma linha acima na tabela XULAMBIS.

Se ele conseguir zerar o $x_a$, então é uma solução viável, se não...

Daí parte pro problema original.

Não é um artifício pesado então todo solver utiliza mesmo quando não precisa.

Se $f(x_a) = 0$

1. Retira a linha da função artificial e a col. var. artificial e continua a otimização da f. o. original
2. $u_a$ é var básica $x_a = 0$ tirar a var artificial da base $=>$ escolhe $a_{ij} \neq 0$ e executar a troca pelo pivoteamento e volta pra (1.).

Verifica onde precisa colocar a var artificial
Se não tiver acrescenta uma função artificial **IUHUIWHWEGE me perdi**.

Fechou o método Simplex.
