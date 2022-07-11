# Ordenamiento de fusión (dividir y conquistar algoritmo)

#### Declaración de problema

Dada una matriz de n elementos, escriba una función para ordenar la matriz

#### Enfoque

- Encontrar un punto medio y dividir la matriz en mitades basadas en el punto medio
- Llamar recursivamente a la función de ordenación de fusión para las dos mitades
- Combinar las dos mitades ordenadas para obtener la matriz ordenada

#### Complejidad temporal 

`O(n log n)`

#### Complejidad espacial

`O(n)`

#### Ejemplo

```markdown
arr = [1, 3, 9, 5, 0, 2]  

Divida la matriz en dos mitades [1, 3, 9] y [5, 0, 2]

Vuelva a llamar a la función de ordenación de combinación de llamadas para estas dos mitades, lo que proporcionará mitades ordenadas
=> [1, 3, 9] & [0, 2, 5]

Ahora combine ambas mitades para obtener la matriz ordenada [0, 1, 2, 3, 5, 9]
```

#### Enlaces de la implementación del código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/MergeSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/merge_sort.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/MergeSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/merge_sort.c)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/merge_sort.rb)

#### Explicación de vídeo

[Un vídeo CS50 que explica el algoritmo de ordemaniento de fusión](https://www.youtube.com/watch?v=EeQ8pwjQxTM)
