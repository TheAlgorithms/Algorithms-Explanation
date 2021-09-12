# Ordenamiento Radix

El límite inferior para el algoritmo de ordenación basado en comparación (Orden de fusión, Ordenación de montón, Ordenación rápida, etc.) es `Ω(nlogn)`, es decir, no pueden hacerlo mejor que `nlogn`.

La ordenación del recuento es un algoritmo de ordenación de tiempo lineal que ordena en el tiempo `O(n+k)` cuando los elementos están en el rango de 1 a k.

¿Qué sucede si los elementos están en el rango de 1 a n2? No podemos usar la ordenación de recuento, porque la ordenación de recuento tomará `O(n2)`, que es peor que los algoritmos de clasificación basados en comparación. ¿Podemos ordenar una matriz de este tipo en tiempo lineal?

Radix Sort es la respuesta. La idea de Radix Sort es hacer orden dígito por dígito a partir de un dígito menos significativo a un dígito más significativo. La ordenación de radios utiliza la ordenación de recuento como subrutina para ordenar.

## El algoritmo de ordenación de radios

Haga lo siguiente para cada dígito i donde varía de un dígito menos significativo al dígito más significativo.
Ordene la matriz de entrada mediante la ordenación de recuento (o cualquier ordenación estable) según el dígito i'th.

Ejemplo:

Lista original y no ordenada:
`170, 45, 75, 90, 802, 24, 2, 66`

Ordenar por el dígito menos significativo (lugar 1s) da:

[*Observe que mantenemos el 802 antes de las 2, porque ocurrió el 802
antes de 2 en la lista original, y de manera similar para los pares
170 &90 y 45 &75.]

Ordenar por el siguiente dígito (lugar de los años 10) da:

[*Observe que 802 de nuevo viene antes de 2 como 802 viene antes de 2 en la lista anterior.]

`802, 2, 24, 45, 66, 170, 75, 90`

La clasificación por el dígito más significativo (lugar de los años 100) da:
`2, 24, 45, 66, 75, 90, 170, 802`

## ¿Cuál es el tiempo de ejecución de Radix Sort?

Deje que haya dígitos `d` en los enteros de entrada. Radix Sort toma `O(d*(n+b))` tiempo donde `b` es la base para representar números, por ejemplo, para el sistema decimal, `b` es 10.
¿Cuál es el valor de `d`? Si `k` es el valor máximo posible, entonces sería `O(logb(k))`. Así que la complejidad general temporal es `O((n+b) * logb(k))`. Lo que parece más que el
complejidad temporal  de algoritmos de ordenación basados en comparación para una `k` grande. Limitemos primero `k`. Deje `k <= nc` donde `c` es una constante. En ese caso, la complejidad se convierte en
`O(n logb(n))`. Pero todavía no supera los algoritmos de clasificación basados en comparación.

## ¿Radix Sort es preferible a algoritmos de ordenación basados en comparación como Quick-Sort?

Si, tenemos bits `log2n` para cada dígito, el tiempo de ejecución de Radix parece ser mejor que la ordenación rápida para una amplia gama de números de entrada. Los factores constantes ocultos en la notación asintótica, son mayores para Radix Sort y Quick-Sort que utiliza cachés de hardware de forma más eficaz. Además, Radix sort utiliza la ordenación de recuento como una subrutina y la ordenación de recuento
necesita espacio adicional para ordenar los números.

**Vídeo de referencia:** https://youtu.be/nu4gDuFabIM
