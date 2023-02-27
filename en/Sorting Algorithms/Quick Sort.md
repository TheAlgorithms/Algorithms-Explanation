# Quick Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array
#### Approach

- Make the right-most index value pivot
- partition the array using pivot value
- quicksort left partition recursively
- quicksort right partition recursively

#### Time Complexity

- `O(n^2)` Worst case performance
- `O(n log n)` Best-case performance
- `O(n log n)` Average performance

#### Space Complexity

`O(log n)` Worst case

#### Founder's Name

Tony Hoare in 1959

#### Example

```
arr[] = {10, 80, 30, 90, 40, 50, 70}
Indexes:  0   1   2   3   4   5   6

low = 0, high =  6, pivot = arr[h] = 70
Initialize index of smaller element, i = -1

Traverse elements from j = low to high-1
j = 0 : Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
i = 0
arr[] = {10, 80, 30, 90, 40, 50, 70} // No change as i and j
                                     // are same

j = 1 : Since arr[j] > pivot, do nothing
// No change in i and arr[]

j = 2 : Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
i = 1
arr[] = {10, 30, 80, 90, 40, 50, 70} // We swap 80 and 30

j = 3 : Since arr[j] > pivot, do nothing
// No change in i and arr[]

j = 4 : Since arr[j] <= pivot, do i++ and swap(arr[i], arr[j])
i = 2
arr[] = {10, 30, 40, 90, 80, 50, 70} // 80 and 40 Swapped
j = 5 : Since arr[j] <= pivot, do i++ and swap arr[i] with arr[j]
i = 3
arr[] = {10, 30, 40, 50, 80, 90, 70} // 90 and 50 Swapped

We come out of loop because j is now equal to high-1.
Finally we place pivot at correct position by swapping
arr[i+1] and arr[high] (or pivot)
arr[] = {10, 30, 40, 50, 70, 90, 80} // 80 and 70 Swapped

Now 70 is at its correct place. All elements smaller than
70 are before it and all elements greater than 70 are after
it.
```

#### Code Implementation Links

- [Assembly](https://github.com/TheAlgorithms/AArch64_Assembly/blob/main/sorters/quick_sort.s)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/quick_sort.c)
- [C#](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/QuickSorter.cs)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/quick_sort.cpp)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/sort/quick_Sort.dart)
- [Elixir](https://github.com/TheAlgorithms/Elixir/blob/master/lib/sorting/quick_sort.ex)
- [F#](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Sort/Quick_Sort.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/quicksort.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Sorts/QuickSort.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/QuickSort.java)
- [JavaScript Iterative](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/QuickSort.js)
- [JavaScript Recursive](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/QuickSortRecursive.js)
- [Julia](https://github.com/TheAlgorithms/Julia/blob/main/src/sorts/quick_sort.jl)
- [Kotlin](https://github.com/TheAlgorithms/Kotlin/blob/master/src/main/kotlin/sort/QuickSort.kt)
- [Lua](https://github.com/TheAlgorithms/Lua/blob/main/src/sorting/quicksort.lua)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/quick_sort.m)
- [OCaml](https://github.com/TheAlgorithms/OCaml/blob/master/Sorts/quicksort.ml)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/Sorting/QuickSort.php)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/quick_sort.py)
- [R](https://github.com/TheAlgorithms/R/blob/master/sorting_algorithms/quick_sort.r)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/quicksort.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/quick_sort.rs)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/QuickSort.scala)
- [Solidity](https://github.com/TheAlgorithms/Solidity/blob/main/src/Sorts/QuickSort.sol)
- [Swift](https://github.com/TheAlgorithms/Swift/blob/master/sorts/QuickSort.swift)
- [TypeScript](https://github.com/TheAlgorithms/TypeScript/blob/master/sorts/quick_sort.ts)

#### Video Explanation

[A video explaining the Quick Sort Algorithm](https://www.youtube.com/watch?v=COk73cpQbFQ)
