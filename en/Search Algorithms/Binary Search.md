# Binary Search (A divide and conquer algorithm)

#### Problem Statement

Given a sorted  array of n elements, write a function to search for the index of a given element (target)

#### Approach

- Search for the array by dividing the array in half repeatedly.
- Initially consider the actual array and pick the element at the middle index
- Keep a lower index i.e. 0 and higher index i.e. length of array
- If it is equal to the target element then return the index
- Else if it is greater than the target element then consider only the left half of array. (lower index = 0, higher = middle - 1)
- Else if it is less than the target element then consider only the right half of array. (lower index = middle + 1, higher = length of array)
- Return -1 if target element is not found in the array (Base Case: If lower index is greater than or equal to higher index)

#### Time Complexity

O(log n) Worse Case     
O(1) Best Case (If middle element of initial array is the target element)

#### Space Complexity

O(1) For iterative approach          
O(log n) For recursive approach due to recursion call stack

#### Example

```
arr = [1,2,3,4,5,6,7]  

target = 2
Initially the element at middle index is 4 which is greater than 2. Therefore we search the left half of the
array i.e. [1,2,3].
Here we find the middle element equal to target element so we return its index i.e. 1

target = 9          
Binary Search should return -1 as 9 is not present in the array
```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Searches/BinarySearch.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Search/Binary%20Search.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/searches/binary_search.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/searches/binary_search.cs)
- [C](https://github.com/TheAlgorithms/C/blob/master/searching/Binary_Search.c)

#### Video Explanation

[A CS50 video explaining the Binary Search Algorithm](https://www.youtube.com/watch?v=5xlIPT1FRcA)

#### Animation Explanation

- [Tute Board](https://boardhub.github.io/tute/?wd=binarySearchAlgo2)
