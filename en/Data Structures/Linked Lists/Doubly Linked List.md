# Doubly Linked List

Singly Linked List is a linear and connected data structure made of Nodes. Each node is composed of a variable `data` where its content is stored and a pointer to the next Node on the list. The Linked List has a pointer to the first element of this Node sequence and may also have another pointer to the last Node to make operations at the far end less time-consuming. You can also store a `length` variable to store the total length.

A **Doubly Linked List (DLL)** contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

### Advantages over singly linked list
- A DLL can be traversed in both forward and backward direction.
- The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
- We can quickly insert a new node before a given node.
In singly linked list, to delete a node, pointer to the previous node is needed. To get this previous node, sometimes the list is traversed. In DLL, we can get the previous node using previous pointer.

### Disadvantages over singly linked list
- Every node of DLL Require extra space for an previous pointer. It is possible to implement DLL with single pointer though (See this and this).
- All operations require an extra pointer previous to be maintained. For example, in insertion, we need to modify previous pointers together with next pointers. For example in following functions for insertions at different positions, we need 1 or 2 extra steps to set previous pointer.

### Time Complexity

| Operation | Average | Worst |
|-----------|---------|-------|
| Access    |   Θ(n)  |  O(n) |
| Search    |   Θ(n)  |  O(n) |
| Insertion |   Θ(1)  |  O(1) |
| Deletion  |   Θ(1)  |  O(1) |

## Example

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


    // Adding a node at the front of the list
    public void push(int new_data) {

        /* 1. allocate node
         * 2. put in the data */
        Node new_Node = new Node(new_data);

        /* 3. Make next of new node as head and previous as NULL */
        new_Node.next = head;
        new_Node.prev = null;

        /* 4. change prev of head node to new node */
        if (head != null)
            head.prev = new_Node;

        /* 5. move the head to point to the new node */
        head = new_Node;
    }

    /* Given a node as prev_node, insert a new node after the given node */
    public void InsertAfter(Node prev_Node, int new_data) {

        /*1. check if the given prev_node is NULL */
        if (prev_Node == null) {
            System.out.println("The given previous node cannot be NULL ");
            return;
        }

        /* 2. allocate node
         * 3. put in the data */
        Node new_node = new Node(new_data);

        /* 4. Make next of new node as next of prev_node */
        new_node.next = prev_Node.next;

        /* 5. Make the next of prev_node as new_node */
        prev_Node.next = new_node;

        /* 6. Make prev_node as previous of new_node */
        new_node.prev = prev_Node;

        /* 7. Change previous of new_node's next node */
        if (new_node.next != null)
            new_node.next.prev = new_node;
    }
}
```

### Adding node at front

![Tracing of algorithm](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_front1.png)

### Add a node after a given node

![Tracing of algorithm](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/03/DLL_add_middle1.png)

## Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/DataStructures/Lists/DoublyLinkedList.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Data%20Structure/Doubly%20Linked%20List.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/data_structures/linked_list/doubly_linked_list.py)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/data-structures/linked-list/double-linkedlist.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/data_structures/linked_lists/double_list.rb)

## Video Explanation

[A CS50 video explaining the Doubly Linked List Data Structure](https://www.youtube.com/watch?v=FHMPswJDCvU)
