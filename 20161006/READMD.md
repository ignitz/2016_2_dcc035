# Aula de PO

## Problem de arredondamento

```
0 -- 1 -- 2 -- 3 -- 4 -- 5

Com liga'cões de 0 at'e 5 c_ij
```

O modelo 'e igual ao caminho m'inimo do 0 at'e 5.

$c_{ij}$ tal que representa o custo de do n'o i at'e j.

Pra ele nao ter que gerar todos os caminhos (ideia de $x_{ij}$ decidindo se usa o caminho ou não).

Se quero identificar o caminho, então identifico os arcos.

> Uai, não tô entendendo, voltou pro $x_{ij} in {0,1}$.

A fun'cão objetivo vai ser

$min \sum_{(i, j) \in A} c_{ij} x_{ij}$

Como garanto que sai do zero?

$\sum_{j=0}^5 x_{0j} = 1$

Como garanto que chego no 5?

$\sum_{i=0}^5 x_{i5} = 1$

Como garanto que passa em algum n'o k?

$\sum_{i=k+1}^5 x_{kj} - \sum_{i=0}^{k1} x_{ik} = 0$

E chegamos no modelo geral de custos.

Copia do slide.

Com a caracter'istica que:

$x_{ij} = {1, se i = 0 \ 0, se i = 1, 2, 3, 4 \ -1, se i = 5$

> No caso o i acima 'e o meu k anterior.

## Problema do caminho m'inimo.

Usando a motiva'cão anterior temos que o x_{ij} pode ir de zero at'e infinito.

## Fluxo de custo m'inimo.

Grafo no slide.

O b positivo quer dizer que o que sai daquele n'o 'e o que ele chega

Agora o que sai menos o que entra 'e igual a capacidade de oferta.

E os n'os de demanda.

O intermedi'ario 'e zero pra manter o fluxo.

Lembrar de (x,y,z)
x = minimo da carga
y = maximo da carga
z = custo por cada item.

O problema segue a mesma estrutura do Fluxo de Custo M'inimo.

Exemplo maior no slide.

> Lembro deste exemplo em algum lugar.
> A motiva'cão de como particularizar cada problema t'a bacana.

## Problema do Transporte

J'a sabe... Slide.

## Problema de Atribui'cão

'E um problema cl'assico de casamentos. Mas um caso particular.

## Problema do fluxo m'aximo.

Caso particular mastrocando oferta e demanda por -t e min -t.

Faz uma maracutaia que fica com b = 0 colocando um arco do final pro come'co.

## Voltando

Agora colocando o min e max no grafo.

- Uma caracter'istica de todos os problemas 'e que são lineares. (Polinomiais).
- Matriz A 'e unimodular --> Solu'cões inteiras.

Dimensionamento, quanto passa (no exemplo do 100).

Identificar os gargalos e aumentar o fluxo, curti xD.

> No prob do Corte boiei.

## Multifluxo de custo m'inimo

E se colocarmos mais produtos na mesma rede?

> Ele ta fazendo um exemplo de fluxo em trânsito.

A matriz A fica grandona agora. Mas a matriz deixa de ser unimodular.

Dando a motiva'cão que se quiser colocar mais informa'cões de tipo (de onde saiu e pra onde vai) 'e colocar mais informa'cão do mesmo tipo de ter adicionado mais ks.

Isso 'e roteamento.

Se fala que passa 20, 'e dimensionamento.

A informa'cão aumenta de forma monstruosa o problema mesmo sendo polinomial.

## Localiza'cão de Facilidades

No problema de oferta e demanda multiplica a oferta por uma vari'avel $y_i$ para indicar se aquela facilidade existe ou não existe {0,1}.

Agora perdeu a polinomialidade.

> Da hora, da hora, da hora.

Aparece mais um. Submodularidade, se ela 'e convexa ou não convexa.
Um conjunto de testes para melhorar o desempenho.

## Network Design.

Vai falar o que que mudou.

Um n'o raiz oferta e um n'o de demanda.

Quer saber se usa ou não usa o arco e custo variado se nao passar nele.

Semelhante ao problema de "Usa ou não usa o arco". Mas perde o poli, submod e integralidade.

> Perdeu preiboi.

Slide das caracter'isticas.

Pegamos um problema classico, e partir dele complicamos e geramos outro conjunto de problemas. "At'e onde tenho garantias de polinomial e integralidade e etc?".

A hora que resolve o problema com o mesmo problema mas como 'e o comportamento do mesmo algoritmo.

