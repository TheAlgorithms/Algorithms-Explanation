# Heap sort

### Declaración de problema

Dada una matriz no ordenada de `N` elementos, escriba una función para ordenar la matriz.

#### Enfoque

- Construir un montón máximo a partir de los datos de entrada.
- En este punto, el elemento más grande se almacena en la raíz del montón. Reemplácelo por el último elemento del montón seguido de reducir el tamaño del montón en 1. Finalmente, amontonar la raíz del árbol.
- Repita los pasos anteriores mientras que el tamaño del montón es mayor que 1.

#### Complejidad temporal 

`O(n log n)` Peor rendimiento del caso

`O(n log n)` (claves distintas)
o `O(n)` (teclas iguales) Rendimiento en el mejor de los casos

`O(n log n)` Rendimiento medio

#### Complejidad espacial

`O(1)` Peor caso auxiliar

#### Ejemplo

```
Datos de entrada: 4, 10, 3, 5, 1
         4(0)
        /   
     10(1) 3(2)
    /   
 5(3) 1(4)

Los números del corchete representan los índices de la matriz
representación de datos.

Aplicación del procedimiento de amontonación al índice 1:
         4(0)
        /   
    10(1) 3(2)
    /   
5(3) 1(4)

Aplicación del procedimiento de amontonación al índice 0:
        10(0)
        /  
     5(1) 3(2)
    /   
 4(3) 1(4)
El procedimiento de amontonar se llama a sí mismo recursivamente para construir el montón
 de la manera de arriba hacia abajo.
```

![imagen del montón](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif "Heap sort")

#### Enlaces de implementación de código

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/HeapSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/heap_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/heap_sort.py)
- [Ir](https://github.com/TheAlgorithms/Go/blob/master/sorts/heapsort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/heap_sort.rb)
- [C-sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/HeapSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/heap_sort.c)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/HeapSort.js)

#### Explicación de vídeo

[Un vídeo explicando el algoritmo de ordenamiento de montón (heap sort)](https://www.youtube.com/watch?v=MtQL_ll5KhQ)
