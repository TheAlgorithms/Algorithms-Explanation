# Ordenación de inserción

#### Declaración de problema

Dada una matriz de `N` elementos, escriba una función para ordenar la matriz en orden creciente.

#### Enfoque

- Definir un índice "clave", el subarray a la izquierda de los cuales se ordena.
- Iniciar "clave" como 1, es decir. el segundo elemento de array(ya que solo queda un elemento del segundo elemento, que se puede considerar como matriz ordenada con un elemento).
- Si el valor del elemento en la posición (clave - 1) es menor que el valor del elemento en la posición (clave); incremento "clave".
- De lo contrario, mueva elementos de subarray ordenados que sean mayores que el valor del elemento en "clave" a una posición por delante de su posición actual. Coloque el valor del elemento en "clave" en el vacío recién creado.

#### Complejidad temporal 

- Comparaciones `О(n^2)`, intercambia `О(n^2)` -- Peor caso
- Comparaciones `O(n)`, intercambia `O(1)` -- Mejor caso

#### Complejidad espacial

`O(1)` -- (No se necesita espacio adicional, clasificación hecha en su lugar)

#### Ejemplo

```markdown

12, 11, 13, 5, 6

Vamos a bucle para i = 1 (segundo elemento de la matriz) a 4 (Tamaño de la matriz de entrada)

i = 1.
Dado que 11 es menor que 12, mueva 12 e inserte 11 antes de 12
11, 12, 13, 5, 6

i = 2.
13 permanecerán en su posición, ya que todos los elementos en subarray ordenado son menores de 13
11, 12, 13, 5, 6

i = 3.
5 se moverá al principio,
y todos los demás elementos de 11 a 13 se moverán una posición por delante de su posición actual.
5, 11, 12, 13, 6

i = 4.
6 se moverá a la posición después de 5,
y los elementos del 11 al 13 se moverán una posición por delante de su posición actual.
5, 6, 11, 12, 13 -- matriz ordenada
```

#### Explicación de vídeo

[Un vídeo CS50 que explica el algoritmo de Ordenamiento de inserción](https://www.youtube.com/watch?v=DFG-XuyPYUQ)
