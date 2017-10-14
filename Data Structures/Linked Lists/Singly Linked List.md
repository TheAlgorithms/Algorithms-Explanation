# Singly Linked List

#### Description

A linear & connected data structure

#### How is it different from a typical array?

- Size of a linked list is not fixed 
- Deleting and adding an element in the middle is not expensive compared to an array
- Elements can be accessed sequentially not dynamically compared to an array
- Extra memory allocation needs to be done for pointers which connects elements in a linked list


#### Example

```
class LinkedList
{
    Node head;

    class Node
    {
        int data;
        Node next;
        Node(int d) {data = d;}
    }
}

Here every node has a value and a pointer to the next node. The head node signifies the first element in 
the list
 ```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/data_structures/Lists/SinglyLinkedList.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Linked%20List.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/data_structures/LinkedList/singly_LinkedList.py)

#### Video Explanation

[A CS50 video explaining the Linked List Data Structure](https://www.youtube.com/watch?v=5nsKtQuT6E8)
