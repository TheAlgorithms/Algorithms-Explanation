# Bubble Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- select the first element of the array
- compare it with its next element
- if it is larger than the next element then swap them
- else do nothing
- keep doing this for every index of the array
- repeat the above process n times.

#### Time Complexity

`O(n^2)` Worst case performance

`O(n)` Best-case performance

`O(n^2)` Average performance

#### Space Complexity

`O(1)` Worst case

#### Founder's Name

- The term “Bubble Sort” was first used by Iverson, K in 1962.

#### Example

```
arr[] = {10, 80, 40, 30}
Indexes: 0   1   2   3    

1. Index = 0, Number = 10
2. 10 < 80, do nothing and continue

3. Index = 1, Number = 80
4. 80 > 40, swap 80 and 40
5. The array now is {10, 40, 80, 30}

6. Index = 2, Number = 80
7. 80 > 30, swap 80 and 30
8. The array now is {10, 40, 30, 80}

Repeat the Above Steps again

arr[] = {10, 40, 30, 80}
Indexes: 0   1   2   3   

1. Index = 0, Number = 10
2. 10 < 40, do nothing and continue

3. Index = 1, Number = 40
4. 40 > 30, swap 40 and 30
5. The array now is {10, 30, 40, 80}

6. Index = 2, Number = 40
7. 40 < 80, do nothing
8. The array now is {10, 30, 40, 80}

Repeat the Above Steps again

arr[] = {10, 30, 40, 80}
Indexes: 0   1   2   3   

1. Index = 0, Number = 10
2. 10 < 30, do nothing and continue

3. Index = 1, Number = 30
4. 30 < 40, do nothing and continue

5. Index = 2, Number = 40
6. 40 < 80, do nothing

Since there are no swaps in above steps, it means the array is sorted and we can stop here.
```

#### Code Implementation Links

- [Assembly](https://github.com/TheAlgorithms/AArch64_Assembly/blob/main/sorters/bubble_sort.s)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/bubble_sort.c)
- [C#](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/BubbleSorter.cs)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/bubble_sort.cpp)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/sort/bubble_Sort.dart)
- [Elixir](https://github.com/TheAlgorithms/Elixir/blob/master/lib/sorting/bubble_sort.ex)
- [Elm](https://github.com/TheAlgorithms/Elm/blob/master/src/Sorting/BubbleSort.elm)
- [F#](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Sort/Bubble_Sort.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/bubblesort.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Sorts/BubbleSort.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/BubbleSort.java)
- [Javascript](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/BubbleSort.js)
- [Julia](https://github.com/TheAlgorithms/Julia/blob/main/src/sorts/bubble_sort.jl)
- [Kotlin](https://github.com/TheAlgorithms/Kotlin/blob/master/src/main/kotlin/sort/BubbleSort.kt)
- [Lua](https://github.com/TheAlgorithms/Lua/blob/main/src/sorting/bubblesort.lua)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/bubble_sort.m)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/Sorting/BubbleSort.php)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/bubble_sort.py)
- [R](https://github.com/TheAlgorithms/R/blob/master/sorting_algorithms/bubble_sort.r)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/bubble_sort.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/bubble_sort.rs)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/BubbleSort.scala)
- [Solidity](https://github.com/TheAlgorithms/Solidity/blob/main/src/Sorts/BubbleSort.sol)
- [Swift](https://github.com/TheAlgorithms/Swift/blob/master/sorts/BubbleSort.swift)
- [TypeScript](https://github.com/TheAlgorithms/TypeScript/blob/master/sorts/bubble_sort.ts)

#### Video Explanation

[A video explaining the Bubble Sort Algorithm](https://www.youtube.com/watch?v=Jdtq5uKz-w4)

#### Others

Bubble sort is also known as Sinking sort.

#### Animation Explanation

- [Tute Board](https://boardhub.github.io/tute/?wd=bubbleSortAlgo2)
