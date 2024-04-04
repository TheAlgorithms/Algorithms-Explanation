# Subsecuencia común más larga

#### Declaración de problema

Dadas dos cadenas `S` y `T`, busque la longitud de la subsecuencia común más larga (<b>LCS</b>).

#### Enfoque

Que el `dp[i][j]` sea la longitud de la subsecuencia común más larga de los prefijos `S[1..i]` y `T[1..j]`. Nuestra respuesta (la longitud de LCS) es `dp[| S|] [| T|]`, ya que el prefijo de la longitud de la cadena es la propia cadena.

Tanto `dp[0][i]` como `dp[i][0]` son `0` para cualquier `i`, desde el LCS de prefijo vacío y cualquier otra cosa es una cadena vacía.

Ahora, vamos a tratar de calcular `dp[i][j]` para cualquier `i`, `j`. Digamos `S[1..i] = *A` y `T[1..j] = *B` donde `*` significa cualquier secuencia de letras (podría ser diferente para `S` y `T`), `A` significa cualquier letra y `B` significa cualquier letra diferente de `A`. Dado que `A != B`, nuestro LCS no incluye `A` o `B` como último carácter. Así que podríamos tratar de tirar a la distancia el personaje `A` o `B`. Si lanzamos `A`, nuestra longitud LCS será `dp[i - 1][j]` (ya que tenemos prefijos `S[1..i - 1]` y `T[1..j]`). Si intentamos lanzar el carácter `B`, tendremos prefijos `S[1..i]` y `T[1..j - 1]`, por lo que la longitud de LCS será `dp[i][j - 1]`. Mientras buscamos la subsecuencia común más <b>larga<b>, elegiremos <b>el valor máximo</b> de `dp[i][j - 1]` y `dp[i - 1] [j]`.

¿Pero qué pasa si `S[1..i] = *A` y `T[1..j] = *A`? Podríamos decir que el LCS de nuestros prefijos es LCS de prefijos `S[1..i - 1]` y `T[1..j - 1]` <b>más</b> la letra `A`. Así que `dp[i][j] = dp[i - 1][j - 1] + 1` es igual a `S[i] = T[j]`.

Pudimos ver que podemos llenar nuestra tabla `dp` fila por fila, columna por columna. Así que nuestro algoritmo será como:

- Digamos que tenemos cuerdas `S` de la longitud N y `T` de la longitud M (numeradas a partir de 1). Vamos a crear la tabla `dp` de tamaño `(N + 1) x (M + 1)` numerada a partir de 0.
- Vamos a llenar la 0ª fila y la 0ª columna de `dp` con 0.
- A continuación, seguimos el algoritmo:

```python
for i in range(1..N):
    for j in range(1..M):
        if(S[i] == T[j])
            dp[i][j] = dp[i - 1][j - 1] + 1
        else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
```

#### Complejidad temporal 

`O(N * M)` - En cualquier caso

#### Complejidad espacial

`O(N * M)` - implementación simple
`O(min {N, M})` - implementación de dos capas (como `dp[i][j]` depende sólo de las capas i-th e i-th, coudld almacenamos sólo dos capas).

#### Ejemplo

Digamos que tenemos cuerdas `ABCB` y `BBCB`. Construiremos una mesa de este tipo:

```
# # Una B C B
# 0 0 0 0 0
B 0 ? ? ? ?
B 0 ? ? ? ?
C 0 ? ? ?
B 0 ? ? ? ?
```

Ahora empezaremos a llenar nuestra mesa desde la 1ª fila. Puesto que `S[1] = A` y `T[1] = B`, `dp[1] [1]` será el valor máximo de `dp[0] [1] = 0` y `dp[1] [0] = 0`. Así que `dp[1] [1] = 0`. Pero ahora `S[2] = B = T[1]`, así que `dp[1] [2] = dp[0] [1] + 1 = 1`. `dp[1] [3]` es `1` desde `A != C` y elegimos `max{dp[1] [2], dp[0] [3]}`. Y `dp[1] [4] = dp[0] [3] + 1 = 1`.

```
# # A B C B
# 0 0 0 0 0
B 0 0 1 1 1
B 0 ? ? ? ?
C 0 ? ? ? ?
B 0 ? ? ? ?
```

Ahora vamos a llenar la otra parte de la tabla:

```
# # A B C B
# 0 0 0 0 0
B 0 0 1 1 1
B 0 0 1 1 2
C 0 0 1 2 2
B 0 0 1 2 3
```

Así que la longitud de LCS es `dp[4] [4] = 3`.

#### Explicación en YouTube

[Explicación en YouTube de Tushar Roy](https://youtu.be/NnD96abizww)
