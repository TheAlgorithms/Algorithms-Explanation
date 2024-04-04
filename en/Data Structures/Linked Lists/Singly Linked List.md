# Singly Linked List

Singly Linked List is a linear and connected data structure made of Nodes. Each node is composed of a variable ```data``` where its content is stored and a pointer to the next Node on the list. The Linked List has a pointer to the first element of this Node sequence and may also have another pointer to the last Node to make operations at the far end less time-consuming. You can also store a ```length``` variable to store the total length.

### Advantages over Arrays

- Size of a linked list is not fixed (dynamic size)
- Deleting and adding an element is not expensive compared to an array

### Drawbacks

- Elements can be accessed sequentially not randomly compared to an array
- Extra memory allocation needs to be done for pointers which connects elements in a linked list

### Time Complexity

| Operation | Average | Worst |
|-----------|---------|-------|
| Access    |   O(n)  |  O(n) |
| Search    |   O(n)  |  O(n) |
| Insertion |   O(1)  |  O(1) |
| Deletion  |   O(1)  |  O(1) |

## Example

```.java
class LinkedList {
    Node head;      // Pointer to the first element
    Node tail;      // Optional. Points to the last element

    int length;     // Optional

    class Node {
        int data;   // Node data. Can be int, string, float, templates, etc
        Node next;  // Pointer to the next node on the list
    }
}
 ```

## Video Explanation

[A CS50 video explaining the Linked List Data Structure](https://www.youtube.com/watch?v=5nsKtQuT6E8)
