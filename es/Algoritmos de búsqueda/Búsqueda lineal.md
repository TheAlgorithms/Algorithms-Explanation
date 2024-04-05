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

#### Explicación en YouTube

[Un vídeo CS50 que explica el algoritmo de búsqueda lineal](https://www.youtube.com/watch?v=CX2CYIJLwfg)

#### Explicación de animación

- [Tute Board](https://boardhub.github.io/tute/?wd=linearSearchAlgo)
