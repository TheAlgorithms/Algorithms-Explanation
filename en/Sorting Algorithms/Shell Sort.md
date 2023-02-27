# Shell Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- start with the initial gap, g
- go through the first (n - g) elements in the array  
- compare the element with the next element that is g distance away
- swap the two elements if the first element is bigger
- decrease the gap and repeat until gap = 1

#### Time Complexity
Time complexity is dependent on the gap sequences.
Below time complexities are based on the gap sequences of n/2^k.

`O(n^2)` Worst case performance

`O(n)` Best-case performance

`O(n^2)` Average performance

#### Space Complexity

`O(1)` Worst case

#### Founder's Name

Donald Shell

#### Example

```
arr[] = {61, 109, 149, 111, 34, 2, 24, 119}
Initial Gap: 4   

1.  Index = 0, Next element index = 4
2.  61 > 34, swap 61 and 34
3.  The array is now {34, 109, 149, 111, 61, 2, 24, 119}

4.  Index = 1, Next element index = 5
5.  109 > 2, swap 109 and 2
6.  The array is now {34, 2, 149, 111, 61, 109, 24, 119}

7.  Index = 2, Next element index = 6
8.  149 > 24, swap 149 and 24
9.  The array is now {34, 2, 24, 111, 61, 109, 149, 119}

10. Index = 3, Next element index = 7
11. 111 < 119, do nothing and continue

12. Divide the gap by 2 and repeat until gap = 1
```

#### Code Implementation Links

- [Assembly](https://github.com/TheAlgorithms/AArch64_Assembly/blob/main/sorters/shell_sort.s)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/shell_sort.c)
- [C#](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/ShellSorter.cs)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/shell_sort.cpp)
- [Dart](https://github.com/TheAlgorithms/Dart/blob/master/sort/shell_Sort.dart)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/shellsort.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Sorts/ShellSort.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/ShellSort.java)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/shellSort.js)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/shell_sort.m)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/shell_sort.py)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Sorting/shell_sort.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/shell_sort.rs)


#### Video Explanation

[A video explaining the Shell Sort Algorithm](https://www.youtube.com/watch?v=H8NiFkGu2PY)

#### Others

Shell sort is also known as diminishing increment sort.
