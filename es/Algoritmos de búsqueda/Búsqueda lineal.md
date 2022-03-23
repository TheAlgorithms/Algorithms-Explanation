# Búsqueda lineal

#### Declaración de problema

Dada una matriz de `n` elementos, escriba una función para buscar el índice de un elemento determinado (destino)

#### Enfoque

- Comience a iterar con el primer elemento de la matriz.
- Compararlo con el elemento objetivo.
- Si es igual al elemento de destino, devuelva el índice.
- De lo contrario, continúe iterando.
- Devolver -1 si el elemento de destino no se encuentra en la matriz.

#### Complejidad temporal 

`O(n)` Peor caso
`O(1)` Mejor caso (Si el primer elemento de matriz es el elemento de destino)

#### Complejidad espacial

`O(1)`

#### Ejemplo

```
arr = [1, 3, 9, 5, 0, 2]  

target = 5
La búsqueda lineal debe devolver el índice 3, ya que 5 está en el índice 3.

target = 6           
La búsqueda lineal debe devolver -1 ya que 6 no está presente en la matriz
```

#### Enlaces de implementación de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/searches/LinearSearch.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Search/Linear%20Search.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/searches/linear_search.py)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Search/LinearSearch.js)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Search/LinearSearcher.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/searching/linear_search.c)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/searches/linearsearch.go)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/searching/linear_search.rs)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/search/linear_Search.dart)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Searches/linear_search.rb)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/searches/linear_search.php)
- [Kotlin](https://github.com/TheAlgorithms/Kotlin/blob/master/src/main/kotlin/search/LinearSearch.kt)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Search/LinearSearch.scala)
- [OCaml](https://github.com/TheAlgorithms/OCaml/blob/master/searches/linear_search.ml)
- [MATLAB-Octave](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/Searching/linear_search.m)

#### Explicación en YouTube

[Un vídeo CS50 que explica el algoritmo de búsqueda lineal](https://www.youtube.com/watch?v=CX2CYIJLwfg)

#### Explicación de animación

- [Tute Board](https://boardhub.github.io/tute/?wd=linearSearchAlgo)
