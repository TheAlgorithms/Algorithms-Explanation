# Ordenamiento Shell

#### Declaración de problema

Dada una matriz no ordenada de `n` elementos, escriba una función para ordenar la matriz.

#### Enfoque

- Empezar con la brecha inicial, `g`
- Ir a través de los primeros `(n - g)` elementos en la matriz  
- Comparar el elemento con el siguiente elemento que está a una distancia `g`
- Intercambiar los dos elementos si el primer elemento es más grande
- Disminuir la brecha y repetir hasta la brecha = 1

#### Complejidad temporal 

La complejidad temporal depende de las secuencias de separación.
Las complejidades de tiempo inferior se basan en las secuencias de separación de `n/2^k`.

`O(n^2)` Peor rendimiento en el caso

`O(n)` Mejor actuación en el caso

`O(n^2)` Rendimiento medio

#### Complejidad espacial

`O(1)` El peor caso

#### Nombre del Fundador

Donald Shell

#### Ejemplo

```markdown
arr[] = {61, 109, 149, 111, 34, 2, 24, 119}
Brecha inicial: 4   

1. Índice = 0, Siguiente índice de elementos = 4
2. 61 > 34, swap 61 y 34
3. La matriz es ahora {34, 109, 149, 111, 61, 2, 24, 119}

4. Índice = 1, Siguiente índice de elementos = 5
5. 109 > 2, swap 109 y 2
6. La matriz es ahora {34, 2, 149, 111, 61, 109, 24, 119}

7. Índice = 2, Siguiente índice de elementos = 6
8. 149 > 24, swap 149 y 24
9. La matriz es ahora {34, 2, 24, 111, 61, 109, 149, 119}

10. Índice = 3, Siguiente índice de elementos = 7
11. 111 < 119, no hagan nada y continúen

12. Divida la brecha por 2 y repita hasta la brecha = 1
```

#### Explicación de vídeo

[Un vídeo explicando el algoritmo del ordenamiento de Shell](https://www.youtube.com/watch?v=H8NiFkGu2PY)

#### Otros

La ordenación del shell también se conoce como clasificación de incremento de disminución.
