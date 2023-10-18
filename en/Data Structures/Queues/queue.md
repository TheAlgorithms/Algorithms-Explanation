# Queue

## Description

A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. It is often compared to a real-world queue of people waiting in line. The element that is added first is the one that gets removed first. Queues are commonly used for various applications, such as task scheduling, managing requests, and more.

## Queue Operations

1) Enqueue (Push): This operation is used to add an item to the back or end of the queue. It's equivalent to "pushing" an item onto the queue. When you enqueue an item, it becomes the last item in the queue.

2) Dequeue (Pop): Dequeue is the operation used to remove and return the front item from the queue. The item that has been in the queue the longest (the front item) is the one removed. After dequeuing an item, the next item in the queue becomes the new front.

3) Peek (Front): This operation is used to view the front item in the queue without removing it. It provides a way to examine the item at the front of the queue without actually dequeuing it.

4) isEmpty: This operation checks whether the queue is empty. If the queue contains no items, it returns true; otherwise, it returns false.

## Source

- [Queue Data Structure](https://www.geeksforgeeks.org/queue-data-structure/)

## Video URL

- [Queue in Data Structure](https://www.youtube.com/watch?v=zp6pBNbUB2U)
- [Implementation of Queue using Arrays](https://www.youtube.com/watch?v=YqrFeU90Coo)
- [Queue Implementation using Linked List in C](https://www.youtube.com/watch?v=RN1wzY_tnYU)

## Implementation

1) Queue Implementation Using Lists (Arrays)

In this approach, you can use a list (or array) to represent a queue. You will maintain two pointers, one pointing to the front of the queue and another pointing to the back. The front pointer keeps track of the element to be dequeued, and the back pointer keeps track of where new elements should be enqueued.

2) Queue Implementation Using a Linked List

In this approach, you can use a linked list to implement a queue. You maintain two pointers, one pointing to the front (head) of the queue and another pointing to the back (tail). Enqueueing involves adding a new node at the tail, and dequeueing involves removing the node at the head.
