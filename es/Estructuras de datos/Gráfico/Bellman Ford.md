# Bellman Ford

#### Declaración de problema

Dado un gráfico dirigido ponderado `G(V,E)` y un vértice de origen s ∈ V, determine para cada `v v v ∈ V` el trayecto más corto entre `s` y `v`.

#### Enfoque

- Inicializar la distancia de la fuente a todos los vértices como infinito.
- Inicializar la distancia a sí mismo como 0.
- Crear una matriz dist[] de tamaño | V| con todos los valores como infinitos excepto dist[s].
- Repita los siguientes |V| - 1 vez, dónde |V| es el número de vértices.
- Crear otro bucle para ir a través de cada borde `(u, v)` en E y hacer lo siguiente:
  1. `dist[v] = minimum(dist[v], dist[u] + peso de borde`.
- Por último, iterar a través de todos los bordes en la última vez, para asegurarse de que no hay ciclos ponderados negativamente.

#### Complejidad temporal 

`O(VE)`

#### Complejidad espacial

`O(V^2)`

#### Nombre del Fundador

- Richard Bellman & Lester Ford, Jr.

#### Ejemplo

```markdown
# de vértices en el gráfico = 5 [A, B, C, D, E]
# de bordes en gráfico = 8

bordes [A->B, A->C, B->C, B->D, B->E, D->C, D->B, E->D]
peso [ -1, 4, 3, 2, 2, 5, 1, -4 ]
fuente [ A, A, B, B, B, D, D, E ]

borde A->B
graph->edge[0].src = A
graph->edge[0].dest = B
graph->edge[0].weight = -1

borde A->C
graph->edge[1] .src = A
graph->edge[1].dest = C
gráfico->edge[1] .weight = 4

borde B->C
graph->edge[2].src = B
graph->edge[2].dest = C
gráfico->edge[2].peso = 3

borde B->D
gráfico->edge[3] .src = B
graph->edge[3] .dest = D
gráfico->edge[3] .peso = 2

borde B->E
graph->edge[4].src = B
graph->edge[4].dest = E
gráfico->edge[4].peso = 2

borde D->C
graph->edge[5].src = D
graph->edge[5].dest = C
gráfico->edge[5].peso = 5

borde D->B
graph->edge[6] .src = D
graph->edge[6].dest = B
gráfico->edge[6].weight = 1

borde E->D
graph->edge[7] .src = E
graph->edge[7].dest = D
gráfico->edge[7].weight = -3

para la fuente = A

Distancia de vértice desde la fuente
A 0 A->A
B -1 A->B
C 2 A->B->C = -1 + 3
D -2 A->B->E->D = -1 + 2 + -3
E 1 A->B->E = -1 + 2
```

#### Explicación de vídeo

[Un video explicando el algoritmo Bellman Ford](https://www.youtube.com/watch?v=hxMWBBCpR6A)

#### Otros

Fuentes utilizadas:

- <https://www.geeksforgeeks.org/bellman-ford-algorithm-dp-23/>
- <https://en.wikipedia.org/wiki/Bellman%E2%80%93Ford_algorithm>
