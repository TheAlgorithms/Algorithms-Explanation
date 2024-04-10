# Circular Linked List

Circular Linked List is an end-connected data structure made of Nodes. Similar to the linear and doubly linked list, each node is composed of a variable ```data``` where its content is stored and a pointer to the next Node on the list. 
The Linked List has a ```pointer``` to the adjacent elements but the last node is connected towards the head node i.e the first node itself, thus forming a circular shape.

### Advantages over Arrays & Linear Linked List & Doubly Linked List

- Any node can be a starting point
- Useful for implementation of queue
- Circular lists are useful in applications to repeatedly go around the list
- Circular Doubly Linked Lists are used for the implementation of advanced data structures like Fibonacci Heap.
- The size of a linked list is not fixed (dynamic size)
- Deleting and adding an element is not expensive compared to an array

### Drawbacks

- Circular lists are complex as compared to singly linked lists.
- Reversing of circular list is a complex as compared to singly or doubly lists.
- If not traversed carefully, then we could end up in an infinite loop
- Elements can be accessed sequentially not randomly compared to an array
- Extra memory allocation needs to be done for pointers which connects elements in a linked list

### Time Complexity

| Operation | Average | Worst |
|-----------|---------|-------|
| Initialize|   O(1)  |    -  |
| Access    |   O(n)  |  O(n) |
| Search    |   O(n)  |  O(n) |
| Insertion |   O(1)  |  O(n) |
| Deletion  |   O(1)  |  O(n) |

### Real World Application

- Allocating CPU to resources
- Multiplayer Board games

### SLL v.s. CLL

![image](https://tutorialhorizon.com/static/media/algorithms/2016/03/Circular-Linked-List.png)

### Example

<u>Insertion</u>
```java
public void insertHead(int data)
{
	Node temp = new Node(data);
	Node cur = head;
	while(cur.getNext() != head)
		cur = cur.getNext();
	if(head == null)
	{
		head = temp;
		head.setNext(head);
	}
	else
	{
		temp.setNext(head);
		head = temp;
		cur.setNext(temp);
	}
	size++;
}
 ```

## Video Explanation

[Video explanation on YouTube](https://youtu.be/HMkdlu5sP4A)
