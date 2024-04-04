# Búsqueda binaria (un algoritmo de divide y vencerás)

#### Declaración de problema

Dada una matriz ordenada de `n` elementos, escriba una función para buscar el índice de un elemento determinado (destino).

#### Enfoque

- Se busca la matriz dividiendo la matriz por la mitad repetidamente.
- Inicialmente, se considera la matriz real y se selecciona el elemento en el índice medio.
- Se mantiene el índice más bajo, el número 0, y el más alto, la longitud de la matriz.
- Si es igual al elemento de destino, se devuelve el índice.
- De lo contrario, si es mayor que el elemento de destino, se condiera únicamente la mitad izquierda de la matriz (índice inferior = 0, superior = medio - 1).
- De lo contrario, si es menor que el elemento de destino, se considera únicamente la mitad derecha de la matriz (índice inferior = medio + 1, más alto = longitud de la matriz).
- Se devuelve -1 si el elemento de destino no se encuentra en la matriz (caso base: si el índice inferior es mayor o igual que el índice superior).

#### Complejidad temporal

`O(log n)`- En el peor de los casos
`O(1)`- En el mejor de los casos (Si el elemento central de la matriz inicial es el elemento de destino)

#### Complejidad espacial

`O(1)`- Para un enfoque iterativo
`O(log n)`- Para un enfoque recursivo debido a la pila de llamadas de recursividad

#### Ejemplo

```
arr = [1,2,3,4,5,6,7]  

target = 2
Inicialmente, el elemento en el índice medio es 4, que es mayor que 2. Por lo tanto, buscamos la mitad izquierda de la
matriz, es decir: [1,2,3].
Aquí encontramos el elemento central igual al elemento objetivo, por lo que devolvemos su índice: 1

target = 9
Búsqueda binaria debe devolver -1 dado que 9 no está presente en la matriz
```

#### Explicación en vídeo de YouTube

[Un vídeo CS50 explicando el algoritmo de búsqueda binaria](https://www.youtube.com/watch?v=5xlIPT1FRcA)

#### Explicación de animación

- [Tute Board](https://boardhub.github.io/tute/?wd=binarySearchAlgo2)
