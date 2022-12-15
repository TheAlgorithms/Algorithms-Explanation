# Ordenamiento de selección

#### Declaración de problema

Dada una matriz no ordenada de `N` elementos, escriba una función para ordenar la matriz.

#### Enfoque

- Seleccione el elemento más pequeño de la matriz
- Ponerlo al principio de la matriz
- A continuación, seleccione la matriz más pequeña de la lista no ordenada restante
- Anexarlo a la matriz ordenada al principio
- Seguir haciendo esto para cada elemento de la matriz
- Repetir el proceso anterior n veces

#### Complejidad temporal 

`O(n^2)` Peor rendimiento en el caso

`O(n^2)` Mejor rendimiento en el caso

`O(n^2)` Rendimiento medio

#### Complejidad espacial

`O(1)` El peor caso

#### Ejemplo

```markdown
arr[] = {80, 10, 40, 30}
Índices: 0 1 2 3    

1. Índice = 0
	Seleccione el número mínimo de la matriz (entre el índice 0-3), es decir, 10
2. Intercambio 10 y 80 (arr[0])
3. La matriz ahora es {10, 80, 40, 30}

4. Índice = 1
	Seleccione el número mínimo de la matriz (entre el índice 1-3), es decir, 30
5. Intercambio 30 y 80 (arr[1])
6. La matriz ahora es {10, 30, 40, 80}

7. Índice = 2
	Seleccione el número mínimo de la matriz (entre el índice 2-3), es decir, 40
8. Intercambio 40 y 40 (arr[2])
9. La matriz ahora es {10, 30, 40, 80}

La matriz ahora está ordenada.
```

#### Enlaces de implementación de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/SelectionSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Sorting/Selection%20Sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/selection_sort.py)
- [Ir](https://github.com/TheAlgorithms/Go/blob/master/sort/selectionsort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Sorting/selection_sort.rb)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/SelectionSort.c)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/SelectionSort.scala)
- [Javascript](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/SelectionSort.js)

#### Explicación de vídeo

[Un vídeo explicando el algoritmo de Ordenamiento de selección](https://www.youtube.com/watch?v=f8hXR_Hvybo)

#### Explicación de animación

- [Tabla de tute](https://boardhub.github.io/tute/?wd=selectSortAlgo2)
