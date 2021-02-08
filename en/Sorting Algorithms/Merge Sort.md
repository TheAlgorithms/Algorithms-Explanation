# Merge Sort (Divide and Conquer Algorithm)

#### Problem Statement

Given an array of n elements, write a function to sort the array

#### Approach

- Find a mid point and divide the array into to halves based on the mid point
- Recursively call the merge sort function for both the halves
- Merge the two sorted halves to get the sorted array

#### Time Complexity

`O(n log n)`

#### Space Complexity

`O(n)`

#### Example

```
arr = [1, 3, 9, 5, 0, 2]  

Divide the array in two halves [1, 3, 9] and [5, 0, 2]

Recursively call merge sort function for both these halves which will provide sorted halves
=> [1, 3, 9] & [0, 2, 5]

Now merge both these halves to get the sorted array [0, 1, 2, 3, 5, 9]
```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/MergeSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/merge_sort.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/MergeSorter.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/merge_sort.c)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/merge_sort.rb)

#### Video Explanation

[A CS50 video explaining the Merge Sort Algorithm](https://www.youtube.com/watch?v=EeQ8pwjQxTM)
