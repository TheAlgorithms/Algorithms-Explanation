# Bellman-Ford

#### Declaração do problema

Dado um grafo direcionado ponderado G (V, E) e um vértice fonte s ∈ V, determine para cada vértice v ∈ V o caminho mais curto entre s e v.

#### Abordagem

- Inicialize a distância da fonte a todos os vértices como infinita.
- Inicialize a distância para si mesmo como 0.
- Crie um array dist[] de tamanho | V | com todos os valores infinitos, exceto dist[s].
- Repita o seguinte | V | - 1 vezes. Onde | V | é o número de vértices.
- Crie outro loop para passar por cada aresta (u, v) em E e faça o seguinte:
1. dist[v] = mínimo (dist[v], dist[u] + peso da aresta).
- Por último, itere por todas as arestas da última vez para garantir que não haja ciclos com peso negativo.

#### Complexidade de tempo

`O(VE)`

#### Complexidade do Espaço

`O(V^2)`

#### Nome do fundador

- Richard Bellman e Lester Ford, Jr.

#### Exemplo

```
Nº de vértices no gráfico = 5 [A, B, C, D, E]
# de arestas no gráfico = 8

arestas [A-> B, A-> C, B-> C, B-> D, B-> E, D-> C, D-> B, E-> D]
peso [-1, 4, 3, 2, 2, 5, 1, -4]
fonte [A, A, B, B, B, D, D, E]

// borda A-> B
gráfico-> borda [0] .src = A
gráfico-> borda [0] .dest = B
gráfico-> borda [0] .weight = -1

// borda A-> C
gráfico-> borda [1] .src = A
gráfico-> borda [1] .dest = C
gráfico-> borda [1] .weight = 4

// borda B-> C
gráfico-> borda [2] .src = B
gráfico-> borda [2] .dest = C
gráfico-> borda [2] .peso = 3

// borda B-> D
gráfico-> aresta [3] .src = B
gráfico-> borda [3] .dest = D
gráfico-> borda [3] .peso = 2

// borda B-> E
gráfico-> borda [4] .src = B
gráfico-> borda [4] .dest = E
gráfico-> borda [4] .weight = 2

// borda D-> C
gráfico-> borda [5] .src = D
gráfico-> borda [5] .dest = C
gráfico-> borda [5] .weight = 5

// borda D-> B
gráfico-> borda [6] .src = D
gráfico-> borda [6] .dest = B
gráfico-> borda [6] .weight = 1

// borda E-> D
gráfico-> borda [7] .src = E
gráfico-> borda [7] .dest = D
gráfico-> borda [7] .weight = -3

// para fonte = A

// Distância do vértice da fonte
A 0 A-> A
B -1 A-> B
C2A-> B-> C = -1 + 3
D -2 A-> B-> E-> D = -1 + 2 + -3
E 1 A-> B-> E = -1 + 2
```

#### Explicação em vídeo

[Um vídeo explicando o Algoritmo Bellman-Ford](https://www.youtube.com/watch?v=hxMWBBCpR6A)

#### Outras

Fontes usadas:
- https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/
- https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm
