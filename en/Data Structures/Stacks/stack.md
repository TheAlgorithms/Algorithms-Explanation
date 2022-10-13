# Stack

A stack is a basic linear data structure that follows an order in which objects are accessed. The order is called LIFO(Last In First Out)or FILO(First in Last Out).
A perfect example of stacks would be plates in a canteen, a pile of books, or a box of Pringles.
Stacks are used to implement parsers and evaluation expressions and backtracking algorithms. basic operations are pushing an element into the stack and popping the element out of the stack.
We can make use of linked lists or arrays of lists. The stack contains only one pointer
"top pointer" which points to the topmost elements of the stack. Insertion and deletion occur at only one end of the stack.
Some Standard Stack Operations are:
push(): inserts the element at the top of the stack.
pop(): When we delete the element at the top of the stack
isEmpty(): It determines whether the stack is empty.
isFull(): determines whether the stack is full or not
peek(): Gets the value of the top element without removing it


Working with Stacks
 1.   A pointer called TOP is used to keep track of the top element in the stack.
 2.  When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
 3.   On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
 4.   On popping an element, we return the element pointed to by TOP and reduce its value.
 5.   Before pushing, we check if the stack is already full
 6.   Before popping, we check if the stack is already empty



# Source

- [Stack Data Structure - GeeksForGeeks](https://www.geeksforgeeks.org/stack-data-structure/) -[DS-Stack JavaPoint](https://www.javatpoint.com/data-structure-stack)
[Stack Data Structure](https://www.programiz.com/dsa/stack)

# Video and Practice Problems

-[Array Implementation of Stack Data Structure](https://youtu.be/sFVxsglODoo)