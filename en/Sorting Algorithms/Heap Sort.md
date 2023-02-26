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

- [Assembly](https://github.com/TheAlgorithms/AArch64_Assembly/blob/main/sorters/heap_sort.s)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/heap_sort.c)
- [C#](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/HeapSorter.cs)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/heap_sort.cpp)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/sort/heap_Sort.dart)
- [F#](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Sort/Heap_Sort.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/heapsort.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Sorts/InsertionSort.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/HeapSort.java)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/HeapSort.js)
- [Julia](https://github.com/TheAlgorithms/Julia/blob/main/src/sorts/heap_sort.jl)
- [Kotlin](https://github.com/TheAlgorithms/Kotlin/blob/master/src/main/kotlin/sort/HeapSort.kt)
- [Lua](https://github.com/TheAlgorithms/Lua/blob/main/src/sorting/heapsort.lua)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/heap_sort.m)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/heap_sort.py)
- [R](https://github.com/TheAlgorithms/R/blob/master/sorting_algorithms/heap_sort.r)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/heap_sort.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/heap_sort.rs)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/HeapSort.scala)

#### Video Explanation

[A video explaining the Heap Sort Algorithm](https://www.youtube.com/watch?v=MtQL_ll5KhQ)
