# Lista singular vinculada

Singly Linked List es una estructura de datos lineal y conectada formada por nodos. Cada nodo se compone de una variable '''data''' donde se almacena su contenido y un puntero al siguiente nodo de la lista. La lista vinculada tiene un puntero al primer elemento de esta secuencia de nodos y también puede tener otro puntero al último nodo para realizar operaciones en el extremo lejano menos lento. También puede almacenar una variable '''length''' para almacenar la longitud total.

### Ventajas sobre matrices

- El tamaño de una lista vinculada no es fijo (tamaño dinámico).
- Eliminar y agregar un elemento no es caro en comparación con una matriz.

### Inconvenientes

- Se puede acceder a los elementos secuencialmente no al azar en comparación con una matriz.
- Es necesario realizar una asignación de memoria adicional para los punteros que conecta los elementos de una lista vinculada.

### Complejidad temporal

| Operación | Promedio | Peor |
|-----------|---------|-------|
| Acceso         |   `O(n)` |  `O(n)` |
| Buscar         |   `O(n)` |  `O(n)` |
| de inserción   |  `O(1)`  |  `O(1)` |
| de eliminación |   `O(1)` |  `O(1)` |

## Ejemplo en Java

```java
class LinkedList {
    Node head;      // Puntero al primer elemento.
    Node tail;      // Opcional. Apunta al último elemento.

    int length;     // Opcional.

    class Node {
        int data;   // Datos del nodo. Puede ser `int`, `string`, `float`, `templates`, etc..
        Node next;  // Puntero al siguiente nodo de la lista.
    }
}
```


## Explicación de vídeo

[Un vídeo CS50 explicando la Estructura de Datos de la Lista Singular Vinculada](https://www.youtube.com/watch?v=5nsKtQuT6E8)
