# Ordenación rápida

#### Declaración de problema

Dada una matriz no ordenada de n elementos, escriba una función para ordenar la matriz

#### Enfoque

- Hacer el pivote de valor de índice más correcto
- particionar la matriz utilizando el valor de pivote
- quicksort partición izquierda recursivamente
- quicksort partición derecha recursivamente

#### Complejidad temporal 

- `O(n^2)` Peor rendimiento en el caso
- `O(n log n)` Mejor rendimiento en el caso
- `O(n log n)` Rendimiento medio

#### Complejidad espacial

`O(log n)` El peor caso

#### Nombre del Fundador

Tony Hoare, en 1959

#### Ejemplo

```markdown
arr[] = {10, 80, 30, 90, 40, 50, 70}
Índices: 0 1 2 3 4 5 6

bajo = 0, alto = 6, pivote = arr[h] = 70
Inicializar el índice de elemento más pequeño, i = -1

Atravesar elementos de j = bajo a alto-1
j = 0 : Desde arr[j] <= pivote, hacer i++ e swap(arr[i], arr[j])
i = 0
arr[] = {10, 80, 30, 90, 40, 50, 70} // Ningún cambio como i y j
                                     son los mismos

j = 1 : Desde arr[j] > pivote, no hagas nada
Sin cambios en i y arr[]

j = 2 : Desde arr[j] <= pivote, hacer i++ e swap(arr[i], arr[j])
i = 1
arr[] = {10, 30, 80, 90, 40, 50, 70} // Intercambiamos 80 y 30

j = 3 : Desde arr[j] > pivote, no hagas nada
Sin cambios en i y arr[]

j = 4 : Desde arr[j] <= pivote, hacer i++ e swap(arr[i], arr[j])
i = 2
arr[] = {10, 30, 40, 90, 80, 50, 70} // 80 y 40 Intercambiados
j = 5 : Desde arr[j] <= pivote, haga i++ e intercambie arr[i] con arr[j]
i = 3
arr[] = {10, 30, 40, 50, 80, 90, 70} // 90 y 50 Intercambiados

Salimos del bucle porque j es ahora igual a high-1.
Finalmente colocamos pivote en la posición correcta intercambiando
arr[i+1] y arr[high] (o pivote)
arr[] = {10, 30, 40, 50, 70, 90, 80} // 80 y 70 Intercambiados

Ahora 70 está en su lugar correcto. Todos los elementos más pequeños que
70 están antes y todos los elementos mayores de 70 años están después
eso.
```

#### Explicación de vídeo

[Un vídeo explicando el algoritmo de ordenamiento rápido](https://www.youtube.com/watch?v=COk73cpQbFQ)
