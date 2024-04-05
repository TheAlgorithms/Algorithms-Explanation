# Lista doblemente vinculada

Singly Linked List es una estructura de datos lineal y conectada formada por nodos. Cada nodo se compone de una variable 'data' donde se almacena su contenido y un puntero al siguiente nodo de la lista. La lista vinculada tiene un puntero al primer elemento de esta secuencia de nodos y también puede tener otro puntero al último nodo para realizar operaciones en el extremo lejano menos lento. También puede almacenar una variable 'length' para almacenar la longitud total.

Una lista vinculada doblemente (DLL)** contiene un puntero adicional, normalmente denominado puntero anterior, junto con el puntero siguiente y los datos que están allí en la lista vinculada individualmente.

### Ventajas sobre la lista vinculada individualmente

- Un archivo DLL se puede atravesar tanto en dirección hacia delante como hacia atrás.
- La operación de eliminación en DLL es más eficaz si se da puntero al nodo que se va a eliminar.
- Podemos insertar rápidamente un nuevo nodo antes de un nodo determinado.
En la lista vinculada individualmente, para eliminar un nodo, se necesita puntero al nodo anterior. Para obtener este nodo anterior, a veces se atraviesa la lista. En DLL, podemos obtener el nodo anterior mediante el puntero anterior.

### Desventajas sobre la lista de vinculados individualmente

- Cada nodo de DLL requiere espacio adicional para un puntero anterior. Sin embargo, es posible implementar DLL con un solo puntero (Consulte esto y esto).
- Todas las operaciones requieren un puntero adicional anterior para ser mantenido. Por ejemplo, en la inserción, necesitamos modificar punteros anteriores junto con punteros siguientes. Por ejemplo, en las siguientes funciones para las inserciones en diferentes posiciones, necesitamos 1 o 2 pasos adicionales para establecer el puntero anterior.

### Complejidad temporal

| Operación | Promedio | Peor |
|-----------|---------|-------|
| Acceso | Ḥ(n) | O(n) |
| Buscar | Ḥ(n) | O(n) |
| | de inserción Θ(1) | O(1) |
| | de eliminación Θ(1) | O(1) |

## Ejemplo

```java
class LinkedList {

    Node head;      // Pointer to the first element
	Node tail;      // Optional. Points to the last element

	int length;     // Optional

    class Node {
        int data;   // Node data. Can be int, string, float, templates, etc
        Node next;  // Pointer to the next node on the list
        Node prev;

        Node(int data) {
            this.data = data;
        }
    }


    // Asignar el nodo al frente de la lista
    public void push(int new_data) {

        /* 1. Asignar nodo.
         * 2. Ponga los datos. */
        Node new_Node = new Node(new_data);

        /* 3. Haga el siguiente de nuevo nodo como cabeza y anterior como NULL. */
        new_Node.next = head;
        new_Node.prev = null;

        /* 4. Cambie el nodo principal anterior a nuevo nodo. */
        if (head != null)
            head.prev = new_Node;

        /* 5. Mueva la cabeza para apuntar al nuevo nodo. */
        head = new_Node;
    }

    /* Dado un nodo como prev_node, inserte un nuevo nodo después del nodo dado. */
    public void InsertAfter(Node prev_Node, int new_data) {

        /* 1. Comprobar si el prev_node dado es NULL. */
        if (prev_Node == null) {
            System.out.println("The given previous node cannot be NULL ");
            return;
        }

        /* 1. Asignar nodo.
         * 2. Ponga los datos. */
        Node new_node = new Node(new_data);

        /* 4. Haga el siguiente de nuevo nodo como el siguiente de prev_node. */
        new_node.next = prev_Node.next;

        /* 5. Haz el siguiente de prev_node como new_node. */
        prev_Node.next = new_node;

        /* 6. Haga prev_node como antes de new_node. */
        new_node.prev = prev_Node;

        /* 7. Cambie el anterior del siguiente nodo de new_node. */
        if (new_node.next != null)
            new_node.next.prev = new_node;
    }
}
```

### Adición de nodos en frente

![Seguimiento del algoritmo](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_front1.png)

### Agregue un nodo después de un nodo determinado

![Seguimiento del algoritmo](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_middle1.png)

## Explicación de vídeo

[Un vídeo CS50 explicando la Estructura de Datos de la Lista Doblemente Vinculada](https://www.youtube.com/watch?v=FHMPswJDCvU)
