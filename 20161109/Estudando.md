# Estudo

## Grafos Otimização em Redes

O Slide começa com definições de grafos, etc etc.

Classificações:
- Simples
- Completo
- Bipartido
- Bipartido Completo
- Euleriano
  - Contém um ciclo passando por todos as arestas de G;
  - Um grafo G é Euleriano se e só se o grau de todo nó de G é par.
  - Segue [link](https://pt.wikipedia.org/wiki/Caminho_euleriano)
  - **Pesquisar**: Carteiro Chinês <--> Ciclo Euleriano de menor distância
- Hamiltoniano
  - Contém um ciclo que passa exatamente uma vez por cada nó de G.
  - Se G é um grafo simples com $n \ge 3$ nós, e se para cada par de nós não adjacentes, a soma do seus graus é maior ou igual a n, então G é Hamiltoniano.
  - Segue [link](https://pt.wikipedia.org/wiki/Caminho_hamiltoniano)
  - **Pesquisar**: Caixeiro Viajante <--> Ciclo Hamiltoniano de menor distância
- Aranha

Depois seguiu com mais definições:

- Cadeia orientada (Caminho)
- Caminho fechado (Circuito)
- Um grafo Conexo em que todo par de nós é ligado por algum caminho é dito ser Fortemente Conexo

Digrafos:

- Um digrafo conexo G é Euleriano se e só se o grau de entrada, |E(i)|, é igual ao grau de saída, |S(i)|, para cada nó de G.
- Seja G um grafo fortemente conexo com n nós. Se os graus de entrada, |E(i)|, e de saída, |S(i)|, são maiores ou iguais a n/2 para cada nó de G, então G é Hamiltoniano.

![Taxonomia](img/taxonomia.png)
