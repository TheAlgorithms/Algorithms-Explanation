# Heap Sort

#### Declaração do problema

Dada uma matriz não classificada de n elementos, escreva uma função para classificar a matriz

#### Abordagem

- Construa um heap máximo a partir dos dados de entrada.
- Neste ponto, o maior item é armazenado na raiz do heap. Substitua-o pelo último item do heap seguido pela redução do tamanho do heap em 1. Finalmente, monte a raiz da árvore.
- Repita as etapas acima enquanto o tamanho do heap for maior que 1.

#### Complexidade de tempo

- `O(n log n)` Pior caso de desempenho
- `O(n log n)` (chaves distintas) ou `O(n)` (teclas iguais) Melhor caso de desempenho
- `O(n log n)` Desempenho médio

#### Complexidade de Espaço

`O(1)` Pior caso auxiliar

#### Exemplo

```
Dados de entrada: 4, 10, 3, 5, 1

         4 (0)
        / \
     10 (1) 3 (2)
    / \
 5 (3) 1 (4)

Os números entre colchetes representam os índices na matriz
representação de dados.

Aplicando procedimento de heapify ao índice 1:

         4 (0)
        / \
    10 (1) 3 (2)
    / \
5 (3) 1 (4)

Aplicando procedimento heapify ao índice 0:

        10 (0)
        / \
     5 (1) 3 (2)
    / \
 4 (3) 1 (4)

O procedimento heapify chama a si mesmo recursivamente para construir heap de cima para baixo.
```

![heap-image](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif "Heap Sort")

#### Links de implementação de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/HeapSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/heap_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/heap_sort.py)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/heapsort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/heap_sort.rb)
- [C-sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/HeapSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/heap_sort.c)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/HeapSort.js)

#### Explicação em vídeo

[Um vídeo explicando o algoritmo de classificação por seleção](https://www.youtube.com/watch?v=MtQL_ll5KhQ)
