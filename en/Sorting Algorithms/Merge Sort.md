# Merge Sort (Divide and Conquer Algorithm)

#### Problem Statement

Given an array of n elements, write a function to sort the array

#### Approach

- Find a mid point and divide the array into to halves based on the mid point
- Recursively call the merge sort function for both the halves
- Merge the two sorted halves to get the sorted array

#### Time Complexity

```
Best case - O(n log n)
Average - O(n log n)
Worst case - O(n log n)
```

#### Space Complexity

`O(n)`

#### Example 1

```
arr = [1, 3, 9, 5, 0, 2]  

Divide the array in two halves [1, 3, 9] and [5, 0, 2]

Recursively call merge sort function for both these halves which will provide sorted halves
=> [1, 3, 9] & [0, 2, 5]

Now merge both these halves to get the sorted array [0, 1, 2, 3, 5, 9]
```

#### Example 2

```
arr = [1, 9, 2, 5, 7, 3, 6, 4]  

Divide the array into two halves [1, 9, 2, 5] and [7, 3, 6, 4]

As you can see that the above two halves are not yet sorted, so divide both of them into two halves again.

This time we get four arrays as [1, 9], [2, 5], [7, 3] and [6, 4].

We see that the last two arrays are again not sorted, so we divide them again into two halves and we will get [7], [3], [6], and [4].

Since an array of a single element is sorted, we now have all the arrays sorted, now we only need to merge them appropriately.

First, the arrays of one element will be merged as they were divided in last, and are at top of the recursion stack, so we get [3,7] and [4,6].

Now the merge will occur accordingly to the recursion stack, [1, 9] and [2, 5] will be merged and will make [1, 2, 5, 9].

Similarly [3, 7] and [4, 6] will be merged and made [3, 4, 6, 7].

At the next stack level [1, 2, 5, 9] and [3, 4, 6, 7] will be merged and we will get the final sorted array as [1, 2, 3, 4, 5, 6, 7, 9].
```

#### Code Implementation Links

- [Assembly](https://github.com/TheAlgorithms/AArch64_Assembly/blob/main/sorters/merge_sort.s)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/merge_sort.c)
- [C#](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/MergeSorter.cs)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/sort/merge_sort.dart)
- [Elixir](https://github.com/TheAlgorithms/Elixir/blob/master/lib/sorting/merge_sort.ex)
- [Elm](https://github.com/TheAlgorithms/Elm/blob/master/src/Sorting/MergeSort.elm)
- [F#](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Sort/Merge_Sort.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/mergesort.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Sorts/MergeSort.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/MergeSort.java)
- [JavaScript](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/MergeSort.js)
- [Julia](https://github.com/TheAlgorithms/Julia/blob/main/src/sorts/merge_sort.jl)
- [Kotlin](https://github.com/TheAlgorithms/Kotlin/blob/master/src/main/kotlin/sort/MergeSort.kt)
- [Lua](https://github.com/TheAlgorithms/Lua/blob/main/src/sorting/mergesort.lua)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/merge_sort.m)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/Sorting/MergeSort.php)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/merge_sort.py)
- [R](https://github.com/TheAlgorithms/R/blob/master/sorting_algorithms/merge_sort.r)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/merge_sort.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/merge_sort.rs)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/MergeSort.scala)
- [Solidity](https://github.com/TheAlgorithms/Solidity/blob/main/src/Sorts/MergeSort.sol)
- [Swift](https://github.com/TheAlgorithms/Swift/blob/master/sorts/MergeSort.swift)
- [TypeScript](https://github.com/TheAlgorithms/TypeScript/blob/master/sorts/merge_sort.ts)

#### Video Explanation

[A CS50 video explaining the Merge Sort Algorithm](https://www.youtube.com/watch?v=EeQ8pwjQxTM)
