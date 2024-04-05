# Cambio de monedas

#### Declaración de problema
Dado un valor `N`, si queremos hacer un cambio para los centavos `N`, y tenemos una oferta infinita de cada una de las monedas valoradas `S = {S1, S2, .. , Sm}`, ¿cuántas maneras podemos hacer el cambio? El orden de las monedas no importa.

#### Enfoque

Deje que el `dp[i]` sea la longitud del cambio de moneda del prefijo `N[1..i]`. Nuestra respuesta es `dp[N]`.
Llenamos `dp[0]` como 1 porque sólo hay una manera de conseguir 0 monedas (No recogemos monedas).

Ahora vamos a tratar de calcular `dp[i]` para cualquier `i`. `dp[0..i]` almacenará cada sub-problema de `0` a `N`. Es por eso que la respuesta será `dp[N]`. En primer lugar, necesitamos iterar cada tipo de moneda para elegirlos uno por uno. Luego iteramos los sub problemas de la moneda actual que recogemos antes a los centavos `N`. Es por eso que debemos hacer la tabla dp con columnas `N`.

Estos son los códigos para el algoritmo coin change:
```
    para coin_val en S:
        para i en rango (coin_val, n + 1):
            dp[i] += dp[i - coin_val]
```

En la segunda iteración, por cada centavo que se puede intercambiar, lo tomamos restando la columna enésima por el valor de la moneda que tomamos y añadiéndolo a la columna actual. Así que `dp[i]` almacenará el sub problema actual.

#### Complejidad temporal 

`O(N * S)` - en cualquier caso

#### Complejidad espacial

`O(N)` - implementación simple. Sólo necesitamos arreglos de discos 1D para almacenar la respuesta.

#### Ejemplo

Digamos que tenemos 3 tipos de monedas `[1,2,3]`, y queremos cambiarlas por 7 centavos. Así que definiremos nuestra mesa así:

```
[1, 0, 0, 0, 0, 0, 0, 0]
```

0ª columna almacenará 1, ya que sólo hay una manera de obtener 0 centavos.

* Para la primera iteración, tomamos una moneda que tiene un valor de 1. Entonces para todos los sub problemas, sólo hay una manera de hacer el cambio. Por 7 céntimos, la única vía es `{1,1,1,1,1,1,1}`. En la iteración final, nuestra mesa es como esta:

```
[1, 1, 1, 1, 1, 1, 1, 1]
```

* Para la segunda iteración, tomamos una moneda que tiene un valor de 2. A partir de aquí, todos los sub problemas que se pueden dividir por 2 almacenarán otra nueva forma de hacer un cambio. Por lo tanto, cuando la iteración se detuvo en la 2ª columna será como `dp[2] += dp[0]`. Sabemos que `dp[0]` almacenaba un valor de 1. Por lo tanto, dp[2] almacenará el valor de `1 + 1 = 2`. Desde aquí sabemos que por 2 centavos, hay 2 maneras `{1,1}` y `{2}`. Y esta operación continuará. Ahora nuestra mesa es como esta:

```
[1, 1, 2, 2, 3, 3, 4, 4]
```
4 maneras de ganar 7 centavos usando el valor de 1 y 2. `{{1,1,1,1,1,1,1}, {1,1,1,1,1,2}, {1,1,1,2,2}, {1,2,2,2}}`

* Para la iteración final (3ª iteración), tomamos una moneda que tiene un valor de 3. Como antes, ahora todas las columnas que se pueden vided por 3 almacenarán otra nueva manera. Y el resultado final, será así:

```
[1, 1, 2, 3, 4, 5, 7, 8]
```

Así que la respuesta final es **8**. 8 maneras de hacer un cambio de 7 centavos usando todos los tipos de monedas. `{{1,1,1,1,1,1,1}, {1,1,1,1,1,2}, {1,1,1,2,2}, {1,2,2,2}, {1,1,1,1,3}, {1,3,3}, {2,2,3}, {1,1,2,3}}`

#### Vídeo de explicación

[Formas únicas totales de hacer el cambio de espaldas a espaldas SWE](https://www.youtube.com/watch?v=DJ4a7cmjZY0)
