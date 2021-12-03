# Bubble Sort

#### Planteamiento del problema

Dado un arreglo desordenado de n elementos, escribir una función que ordene el arreglo.

#### Procedimiento

- Seleccionar el primer elemento del arreglo.
- Comparar con el elemento siguiente.
- Si es más grande que el elemento siguiente se intercambian.
- Sino no se hace nada.
- Realizar las operaciones anteriores para cada elemento del arreglo.
- Repetir el procedimiento descrito n veces.

#### Complejidad temporal

`O(n^2)` Rendimiento en el peor de los casos

`O(n)` Rendimiento en el mejor de los casos

`O(n^2)` Rendimiento promedio

#### Complejidad espacial

`O(1)` Peor caso

#### Nombre del creador del algoritmo

-

#### Ejemplo

```
arreglo[] = {10, 80, 40, 30}
Indices: 0   1   2   3    

1. Indice = 0, Numero = 10
2. 10 < 80, No se hace nada. Continuar

3. Indice = 1, Numero = 80
4. 80 > 40, intercambiar 80 y 40
5. El arreglo ahora es {10, 40, 80, 30}

6. Indice = 2, Numero = 80
7. 80 > 30, intercambiar 80 y 30
8. El arreglo ahora es {10, 40, 30, 80}

Repetir los pasos de arriba.

arreglo[] = {10, 40, 30, 80}
Indices: 0   1   2   3   

1. Indice = 0, Numero = 10
2. 10 < 40, No se hace nada. Continuar

3. Indice = 1, Numero = 40
4. 40 > 30, intercambiar 40 y 30
5. El arreglo ahora es {10, 30, 40, 80}

6. Indice = 2, Numero = 40
7. 40 < 80, No se hace nada. Continuar
8. El arreglo ahora es {10, 30, 40, 80}

Repetir los pasos de arriba.

arreglo[] = {10, 30, 40, 80}
Indices: 0   1   2   3   

1. Indice = 0, Numero = 10
2. 10 < 30, No se hace nada. Continuar

3. Indice = 1, Numero = 30
4. 30 < 40, No se hace nada. Continuar

5. Indice = 2, Numero = 40
6. 40 < 80, No se hace nada

Como no hay intercambios en los pasos de arriba, el arreglo ya se ha ordenado y nos podemos detener.
```

#### Enlaces a implementaciones de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/BubbleSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Sorting/Bubble%20Sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/bubble_sort.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/sorts/bubble_sort.cs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/bubble_sort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Sorting/bubble_sort.rb)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/BubbleSort.c)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/BubbleSort.scala)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/bubblesort.js)

#### Explicación en video

[Un video explicando el Algoritmo de Ordenamiento Burbuja](https://www.youtube.com/watch?v=EQMGabLO_M0)

#### Otros

El Ordenamiento Burbuja también es conocido como Sinking sort.

#### Explicación animada

- [Tablero Tute](https://boardhub.github.io/tute/?wd=bubbleSortAlgo2)
