# Aula de PO (2016/08/25)

O professor está mostrando o domínio o domínio do seguinte sistema:

$$ max f(x) = x_1 + x_2 $$

$S$ é o conjunto:

\[\begin{array}{l}
{x_1} + 2{x_2} \le 7\;\\
2{x_1} + {x_2} \le 8\\
{x_2} \le 3\\
{x_1},{x_2} \ge 0
\end{array}\]

### Formalização

$$
max f(x) = c^Tx\\
Ax \leq 0\\
x \geq 0
$$

Ele mostrou que o vetor de direção ([Gradiente](https://pt.wikipedia.org/wiki/Gradiente)) está apontando a direção de crescimento da função objetivo.

$$
x^{k + 1} = x^k + \lambda \nabla f(x)
$$

O $\lambda$ determina o tamanho salto.

É citado a translação e rotação de matrizes pra motivação pro problema anterior. Só uma noção.

### Voltando ao problema linear

Deu motivações pra escolher direções pro crescimento da função.

- Seguir gradiente.
- Seguir gradiente mudando a direção a cada salto.
- Seguir pela fronteira. (Que vai ser a melhor)

Mostrou uma condição em que a linha de restrição é perpendicular ao gradiente o que faz com que a solução ótima seja um conjunto de pontos.

### Exemplo com restrições ilimitadas

O gradiente com direção para o infinito então a solução é ilimitada.

Então destacou que o primeiro exemplo é um conjunto limitado.

### Casos possíveis de soluções

1.  Solução ótima única
2.  Infinitas soluções ótimas
  1.  Conjunto limitado
  2.  Conjunto ilimitado
3.  Solução ilimitada: $f(x) -> \infty$
4.  Não existe solução viável.

> Finalizou clareando mais os pontos acima

Boiei e com interseção de hiperplanos pode dar problemas exponenciais. Então a força bruta de vértice em vértice vai pro saco.

> **Se eu olhar estas restrições e deseja aumentar os recursos. "Qual recurso eu devo comprar?"**

> *As retas que o vértice pertence.*

> **O que acontece se mudarmos $x_2 \leq 3$?**

> *Não altera a solução.*
> O resto já da pra entender

> Fim da aula
