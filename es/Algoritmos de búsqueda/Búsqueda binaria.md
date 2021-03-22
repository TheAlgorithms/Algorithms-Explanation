# Búsqueda binaria (un algoritmo de dividir y conquistar)

#### Declaración de problema

Dada una matriz ordenada de `n` elementos, escriba una función para buscar el índice de un elemento determinado (destino).

#### Enfoque

- Busque la matriz dividiendo la matriz por la mitad repetidamente.
- Inicialmente, considere la matriz real y elija el elemento en el índice medio.
- Mantener un índice más bajo, es decir, 0 y mayor índice, es decir, la longitud de la matriz.
- Si es igual al elemento de destino, devuelva el índice.
- De lo contrario, si es mayor que el elemento de destino, tenga en cuenta sólo la mitad izquierda de la matriz (índice inferior = 0, superior = medio - 1).
- De lo contrario, si es menor que el elemento de destino, tenga en cuenta sólo la mitad derecha de la matriz (índice inferior = medio + 1, más alto = longitud de la matriz).
- Devolver -1 si el elemento de destino no se encuentra en la matriz (caso base: si el índice inferior es mayor o igual que el índice superior).

#### Complejidad horaria

`O(log n)` Peor caso
`O(1)` Mejor caso (Si el elemento central de la matriz inicial es el elemento de destino)

#### Complejidad espacial

O(1) Para enfoque iterativo
O(log n) Para el enfoque recursivo debido a la pila de llamadas de recursividad

#### Ejemplo

```
arr = [1,2,3,4,5,6,7]  

target = 2
Initially the element at middle index is 4 which is greater than 2. Therefore we search the left half of the
array i.e. [1,2,3].
Here we find the middle element equal to target element so we return its index i.e. 1

target = 9          
Binary Search should return -1 as 9 is not present in the array
```

#### Enlaces de implementación de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Searches/BinarySearch.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Search/Binary%20Search.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/searches/binary_search.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/searches/binary_search.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/searching/Binary_Search.c)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Search/BinarySearch.js)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Misc/BinarySearch.hs)
- [F-Sharp](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Search/BinarySearch.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/searches/binarysearch.go)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/searching/binary_search.rs)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/search/binary_Search.dart)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Searches/binary_search.rb)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/searches/binary_search.php)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Search/BinarySearch.scala)
- [MATLAB-Octave](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/Searching/binary_search.m)

#### Explicación en video de YouTube

[Un vídeo CS50 explicando el algoritmo de búsqueda binaria](https://www.youtube.com/watch?v=5xlIPT1FRcA)

#### Explicación de animación

- [Tute Board](https://boardhub.github.io/tute/?wd=binarySearchAlgo2)
