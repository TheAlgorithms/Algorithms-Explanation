# Selección rápida o Quick Select

### Definición del problema

Given an array, find the kth largest / smallest element in linear time complexity.

### Enfoque

- Selecciona un elemento que sirva de pivote aleatoriamente.
- Aplica particiones como las utilizadas en el algoritmo de ordenamiento rápido o quick sort.
- Depués de realizar las particiones, el pivote se deberá colocar en su posición ordenada. Todos los elementos menores que el pivote quedarán a su izquierda y los mayores a su derecha.
- Si el índice del pivore ordenado es k, entonces el pivote está en su k-ésimo elemento y devolvemos el número.
- De otro modo, verifica si 'k' es mayor o menor y selecciona un nuevo pivote en el rango.
- Repite los pasos hasta conseguir el k-ésimo elemento en la k-ésima posición.

### Complejidad de Tiempo

- `O(n^2)` En el peor de los casos

- `O(n)` En el mejor de los casos

- `O(n)` Rendimiento promedio


### Nombre de su fundador

- Este algorítmo fue desarrollado por Tony Hoare. También es conocido como el 'Algoritmo de Selección de Hoare'.

### Ejemplo

```
arr[] = {8,2,11,7,9,1,3}
Indexes: 0 1 2 3 4 5 6

Digamos que k = 4. Y tenemos que encontrar el cuarto elemento menor.

1. Escogiendo un pivote de forma aleatoria, tenemos 7
2. Intercambiamos 7 con el último elemento y aplicamos el algoritmo de particionado.
3. Después de aplicar la partición, todos los elementos menores que 7 se colocan a la izquierda y los mayores a la derecha.
4. Como la posición de '7' es la cuarta, simplemente devolveremos la valor 7.

```

### Enlaces de implmenetaciones de código 

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/selecting/quickSelect.cpp)
- [Python](https://programmerclick.com/article/92711720579/)

### Enlaces de explicación en vídeo

[Programación en C++, Ordenamiento por Selección](https://www.youtube.com/watch?v=HVa2_UtXkCI)
