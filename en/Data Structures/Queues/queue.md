# Queue

## Description:
A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. It is often compared to a real-world queue of people waiting in line. The element that is added first is the one that gets removed first. Queues are commonly used for various applications, such as task scheduling, managing requests, and more.

### Time Complexity:
Enqueue (Insertion): O(1)
Dequeue (Removal): O(1)
Peek (Accessing the front element): O(1)

### Space Complexity:
O(n), where n is the number of elements in the queue.

## Applications:
1) Task scheduling
2) Print job management
3) Breadth-first search (BFS) in graph algorithms
4) Simulating real-world scenarios
5) Handling requests in a web server

## Founder's Name:
The concept of a queue in computer science is not attributed to a specific individual. It's a fundamental data structure used in various computer science applications.

## Queue Operations:

1) Initialize a Queue:
-Create an empty queue data structure. You can implement a queue using an array, linked list, or other data structures, depending on your specific requirements.
2) Enqueue (Insertion):
-To add an element to the queue, insert it at the rear (end) of the queue.
-Increment the rear pointer to point to the newly added element.
-Ensure the queue remains in the correct order, following the FIFO principle.
3) Dequeue (Removal):
-To remove an element from the queue, take it from the front.
-Increment the front pointer to point to the next element in the queue.
-Make sure to handle the case when the queue becomes empty.
4) Peek (Accessing the Front Element):
-To access the element at the front of the queue without removing it, simply refer to the front element.
-This is useful for checking what's at the front of the queue without altering its contents.
5) Check if Queue is Empty:
-You can determine if the queue is empty by comparing the front and rear pointers. If they are equal, the queue is empty.
6) Check if Queue is Full (if using a fixed-size array):
-In cases where a fixed-size array is used to implement a queue, check if the rear pointer has reached the maximum size of the array to determine if the queue is full.

## Sourse:
-[Queue Data Structure](https://www.geeksforgeeks.org/queue-data-structure/)
## Video URL:
-[Queue in Data Structure](https://www.youtube.com/watch?v=zp6pBNbUB2U)
-[Implementation of Queue using Arrays](https://www.youtube.com/watch?v=YqrFeU90Coo)
-[Queue Implementation using Linked List in C](https://www.youtube.com/watch?v=RN1wzY_tnYU)

## Others:
Queues can be implemented using arrays, linked lists, or specialized queue data structures depending on the specific requirements. They are crucial in scenarios where tasks or data need to be processed in a specific order, ensuring fairness and proper management.
