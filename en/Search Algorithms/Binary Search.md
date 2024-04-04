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
- Return -(insertion index + 1) if the target element is not found in the array (If the lower index is greater than or equal to higher index). Some simpler implementations just return -1 if the element is not found. The offset of 1 must be added as the insertion index might be 0 (the searched value might be smaller than all elements in the array). As indexing starts at 0, this must be distinguishable from the case where the target element has the index 0.

#### Time Complexity

O(log n) Worst Case     
O(1) Best Case (If middle element of initial array is the target element)

#### Space Complexity

O(1) For iterative approach          
O(1) For recursive approach *if tail call optimization is used*, O(log n) due to recursion call stack, otherwise

#### Example

```
arr = [1,2,3,4,5,6,7]  

target = 2
Initially the element at middle index is 4 which is greater than 2. Therefore we search the left half of the
array i.e. [1,2,3].
Here we find the middle element equal to target element so we return its index i.e. 1

target = 9          
A simple Binary Search implementation may return -1 as 9 is not present in the array. A more complex one would return the index at which 9 would have to be inserted, which would be `-8` (last position in the array (7) plus one (7+1), negated)`.
```

#### Video Explanation

[A CS50 video explaining the Binary Search Algorithm](https://www.youtube.com/watch?v=5xlIPT1FRcA)

#### Animation Explanation

- [Tute Board](https://boardhub.github.io/tute/?wd=binarySearchAlgo2)
