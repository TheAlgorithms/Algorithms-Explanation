# Búsqueda exponencial

#### Requisitos previos

- [Algoritmo de búsqueda binaria](Búsqueda%20binaria.md)

#### Declaración de problema

Dada una matriz ordenada de *`n`* elementos, escriba una función para buscar el índice de un elemento determinado (destino)

#### Enfoque

- Búsqueda del **rango** dentro del cual se incluye el objetivo aumentando *index* por poderes de 2
- Si este rango existe en la matriz aplicar el algoritmo de búsqueda binaria sobre él
- Más retorno -1

#### Ejemplo

```markdown
arr = [1, 2, 3, 4, 5, 6, 7, ... 998, 999, 1_000]

objetivo = 998
índice = 0
1. BÚSQUEDA DEL RANGO
índice = 1, 2, 4, 8, 16, 32, 64, ..., 512, ..., 1_024
después de 10 iteración tenemos el índice en 1_024 y fuera de la matriz 
2. BÚSQUEDA BINARIA
Ahora podemos aplicar la búsqueda binaria en el subarray de 512 y 1_000.
```

**Nota**: aplicamos la búsqueda binaria de 512 a 1_000 porque en `i = 2^10 = 1_024` la matriz está finisced y el número de destino es menor que el índice más reciente de la matriz ( 1_000 ).

#### Complejidad temporal 

**Peor caso:** `O(log *i*)` donde `*i* = índice` (posición) del objetivo

**Mejor caso:** `O(*1*)`

#### Explicación de complejidad

- La complejidad de la primera parte del algoritmo es **`O( log *i* )`** porque si *i* es la posición del destino en la matriz, después de duplicar la búsqueda *index* `⌈log(i)⌉` veces, el algoritmo estará en un índice de búsqueda que es mayor o igual que *i*. Podemos escribir `2^⌈log(i)⌉ >= i`
- La complejidad de la segunda parte del algoritmo también es **`O ( log *i* )`** porque se trata de una simple búsqueda binaria. La complejidad de búsqueda binaria ( como se explica [aquí](Búsqueda%20binaria.md) ) es `O(*n*)` donde *n* es la longitud de la matriz. En la búsqueda exponencial, la longitud de la matriz en la que se aplica el algoritmo es `2^i - 2^(i-1)`, en palabras significa `(la longitud de la matriz de principio a *i* ) - (la parte de matriz omitida hasta la iteración anterior)`. Es simple verificar que `2^i - 2^(i-1) = 2^(i-1)`.

Después de esta explicación detallada, podemos decir que la complejidad de la búsqueda exponencial es:

```mathematica
O(log i) + O(log i) = 2O(log i) = O(log i)
```

#### Búsqueda binaria vs Búsqueda exponencial

Echemos un vistazo a esta comparación con un ejemplo menos teórico. Imagine que tenemos una matriz con elementos `1_000_000` y queremos buscar un elemento que esté en la posición `4th`. Es fácil ver que:

- La búsqueda binaria comienza desde el centro de la matriz y llega a la 4ª posición después de muchas iteraciones
- La búsqueda exponencial llega al 4º índice después de sólo 2 iteraciones
