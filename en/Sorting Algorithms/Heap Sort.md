# Heap Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- Build a max heap from the input data.
- At this point, the largest item is stored at the root of the heap. Replace it with the last item of the heap followed by reducing the size of heap by 1. Finally, heapify the root of tree.
- Repeat above steps while size of heap is greater than 1.

#### Time Complexity

`O(n log n)` Worst case performance

`O(n log n)` (distinct keys)
or O(n) (equal keys) Best-case performance

`O(n log n)` Average performance

#### Space Complexity

`O(1)` Worst case auxiliary


#### Example
 ```
Input data: 4, 10, 3, 5, 1
         4(0)
        /   \
     10(1)   3(2)
    /   \
 5(3)    1(4)

The numbers in bracket represent the indices in the array
representation of data.

Applying heapify procedure to index 1:
         4(0)
        /   \
    10(1)    3(2)
    /   \
5(3)    1(4)

Applying heapify procedure to index 0:
        10(0)
        /  \
     5(1)  3(2)
    /   \
 4(3)    1(4)
The heapify procedure calls itself recursively to build heap
 in top down manner.
  ```

![heap-image](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif "Heap Sort")

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/HeapSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/heap_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/heap_sort.py)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/heapsort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/heap_sort.rb)
- [C-sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/HeapSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/heap_sort.c)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/HeapSort.js)

#### Video Explanation

[A video explaining the Selection Sort Algorithm](https://www.youtube.com/watch?v=MtQL_ll5KhQ)
