# Insertion Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array
#### Approach

- Pick key value
- Compare key value with all elements in the sorted sub-list
- Shift the elements in the sorted sub-list which are greater than the key value to be sorted
- Insert the key value
- Repeat until list is sorted


#### Time Complexity

O(n<sup>2</sup>) Worst case performance

O(n) Best-case performance

O(n<sup>2</sup>) Average performance


#### Space Complexity

O(n) total, O(1) auxillary.


#### Example

```
arr[] = {14, 33, 27, 10, 35, 42, 44}
Indexes:  0   1   2   3   4   5   6
 ```
Compares first two elements, 14 and 33 in this case.

These two values are found to be in sorted ascending order, so for now 14 is in the sorted sublist.
 ```
sorted_sublist[] = {14}
unsorted_sublist[] = {33, 27, 10, 35, 42, 44}
  ```
The algorithm goes on to check 33 and 27.

Found to be in descending order so the algorithm swaps 33 with 27.

The algorithm also checks with all the elements of sorted sub-list. Here we see that the sorted sub-list has only one element 14, and 27 is greater than 14. Hence, the sorted sub-list remains sorted after swapping.

By now we have 14 and 27 in the sorted sub-list. Next, it compares 33 with 10.
 ```
sorted_sublist[] = {14, 27}
unsorted_sublist[] = {33, 10, 35, 42, 44}
 ```
The algorithm goes on to check 33 and 10, again insertion sort does the exact same thing as before and swaps 33 and 10.

However, now 27 and 10 are unsorted and are swapped too. Now 14 and 10 are unsorted and are also swapped.

Now the sorted sublist includes 10, 14, and 27.
 ```
sorted_sublist[] = {10, 14, 27}
unsorted_sublist[] = {33, 35, 42, 44}
 ```
Iterating through the rest of the unsorted array consumes one element at a time until the follow is true:
 ```
sorted_sublist[] = {10, 14, 27, 33, 35, 42, 44}
unsorted_sublist[] = {}
 ```
Thus, the sequence is completely sorted.


#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/InsertionSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Sorting/Insertion%20Sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/insertion_sort.py)
- [Scala](https://github.com/TheAlgorithms/Ruby/blob/master/InsertionSort.rb)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/insertionSort.js)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/Insertion%20Sort.scala)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/Insertion_Sort.go)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/InsertionSort.c)


[A video explaining Insertion Sort](https://www.youtube.com/watch?v=i-SKeOcBwko)

