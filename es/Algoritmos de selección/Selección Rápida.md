# Selección rápida o Quick Select

## Definición del problema

Dada una matriz, encontrar el k-ésimo elemento mayor y menor con un una complejidad lineal de Tiempo

## Enfoque

- Selecciona un elemento que sirva de pivote aleatoriamente.
- Aplica particiones como las utilizadas en el algoritmo de ordenamiento rápido o quick sort.
- Después de realizar las particiones, el pivote se deberá colocar en su posición ordenada. Todos los elementos menores que el pivote quedarán a su izquierda y los mayores a su derecha.
- Si el índice del pivote ordenado es k, entonces el pivote está en su k-ésimo elemento y devolveremos el número.
- De otro modo, verifica si 'k' es mayor o menor y selecciona un nuevo pivote en el rango.
- Repite los pasos hasta conseguir el k-ésimo elemento en la k-ésima posición.

## Complejidad temporal

- `O(n^2)` En el peor de los casos

- `O(n)` En el mejor de los casos

- `O(n)` Rendimiento promedio

## Nombre de su fundador

- Este algoritmo fue desarrollado por Tony Hoare. También es conocido como el 'Algoritmo de Selección de Hoare'.

## Ejemplo

```
Matriz[] = {8,2,11,7,9,1,3}
Índices: 0 1 2 3 4 5 6

Digamos que k = 4 y tenemos que encontrar el cuarto elemento menor:

1. Escogiendo un pivote de forma aleatoria, obtenemos 7.
2. Intercambiamos 7 con el último elemento y aplicamos el algoritmo de particionado.
3. Después de aplicar la partición, todos los elementos menores que 7 se colocan a la izquierda y los mayores, a la derecha.
4. Como la posición de '7' es la cuarta, simplemente devolveremos el valor 7.
```

## Enlaces de explicación en vídeo

[Programación en C++, Ordenamiento por Selección](https://www.youtube.com/watch?v=HVa2_UtXkCI)
