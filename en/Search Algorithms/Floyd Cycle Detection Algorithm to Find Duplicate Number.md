# Floyd Cycle Detection Algorithm to find duplicate number in an array

## Problem Statement

Given an array of integers containing `n + 1` integers, where each integer is in the range `[1, n]` inclusive. If there is only one duplicate number in the input array, this algorithm returns the duplicate number without modifying the original array, otherwise, it returns -1.

## Approach

- Use the function `f(x) = arr[x]` to construct the sequence: 
`arr[0]`, `arr[arr[0]]`, `arr[arr[arr[0]]]`, `arr[arr[arr[arr[0]]]]`, etc....
- Each new element in the sequence is an element in `arr[]` at the index of the previous element.
- Starting from `x = arr[0]`, it will produce a linked list with a cycle.
- The cycle appears because `arr[]` contains duplicate elements(at least one). The duplicate value is an entrance to the cycle. 

## Time Complexity

O(n)

## Space Complexity

O(1) 

## Example

```
arr = [3, 4, 8, 5, 9, 1, 2, 6, 7, 4]  

return value = 4
```

## Code Implementation Links

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/search/floyd_cycle_detection_algo.cpp)
- [C](https://github.com/TheAlgorithms/C/blob/master/searching/floyd_cycle_detection_algorithm.c)

#### Video Explanation

[YouTube video explaining the Floyd Cycle Detection algorithm](https://www.youtube.com/watch?v=B6smdk7pZ14)
