# Merge Sort (Algoritmo de divisão e conquista)

#### Declaração do problema

Dado um array de n elementos, escreva uma função para classificar o array

#### Abordagem

- Encontre um ponto médio e divida a matriz em metades com base no ponto médio
- Chame recursivamente a função de classificação de mesclagem para ambas as metades
- Junte as duas metades classificadas para obter a matriz classificada

#### Complexidade de tempo

`O(n log n)`

#### Complexidade do Espaço

`O(n)`

#### Exemplo

```
arr = [1, 3, 9, 5, 0, 2]

Divida a matriz em duas metades [1, 3, 9] e [5, 0, 2]

Chame recursivamente a função merge sort para ambas as metades, o que fornecerá metades ordenadas
=> [1, 3, 9] e [0, 2, 5]

Agora mescle as duas metades para obter a matriz classificada [0, 1, 2, 3, 5, 9]
```

#### Links de implementação de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/MergeSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/merge_sort.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/MergeSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/merge_sort.c)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/merge_sort.rb)

#### Explicação em vídeo

[Um vídeo CS50 explicando o algoritmo de classificação de mesclagem](https://www.youtube.com/watch?v=EeQ8pwjQxTM)
