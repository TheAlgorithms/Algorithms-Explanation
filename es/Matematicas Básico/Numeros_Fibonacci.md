# Cálculo de números de Fibonacci

En matemáticas, los números de Fibonacci comúnmente denotados F(n), forman una secuencia, llamada secuencia Fibonacci, de tal manera que cada número es la suma de los dos anteriores, a partir de 0 y 1.  La secuencia tiene este aspecto:

`[0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...]`

## Aplicaciones

Encontrar
El miembro enésimo (```N-th```) de esta secuencia sería útil en muchas aplicaciones:

- Recientemente, la secuencia de Fibonacci y la relación de oro, son de gran interés para los investigadores en muchos campos de
ciencia, incluyendo física de alta energía, mecánica cuántica, criptografía, y codificación.

## Pasos

1. Preparar la base matriz
2. Calcular el poder de esta Matriz
3. Tome el valor correspondiente de Matrix

## Ejemplo

Encuentra el octavo miembro de Fibonacci

### Paso 0

```
| F(n+1) F(n) |
| F(n) F(n-1)|
```

### Paso 1

```
 Calcular matriz^1
| 1 1 |
| 1 0 |
```

### Paso 2

```
Calcular matriz^2
| 2 1 |
| 1 1 |
```

### Paso 3

```
Calcular matriz^4
| 5 3 |
| 3 2 |
```

### Paso 4

```
Calcular matriz^8
| 34 21 |
| 21 13 |
```

### Paso 5

F(8)=21

## Video en YouTube

- [YouTube](https://www.youtube.com/watch?v=EEb6JP3NXBI)

## Otros

- [Prueba](https://brilliant.org/wiki/fast-fibonacci-transform/)
