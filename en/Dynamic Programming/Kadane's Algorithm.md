# Kadane's Algorithm

## Problem Statement
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Note: A subarray is a contiguous part of an array.


1st example

```text

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

2nd example

```text

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: [5,4,-1,7,8] has the largest sum = 23.
```


## Time Complexity

O(N)

## Space Complexity

O(1)

## Algorithm
The idea is to keep track of the maximum sum of the subarray ending at the current index. 
The maximum sum of the subarray ending at the current index can be calculated by adding the current element to the maximum sum of the subarray ending at the previous index. 
If the maximum sum of the subarray ending at the previous index is negative, then the maximum sum of the subarray ending at the current index is the current element. 
The maximum sum of the subarray ending at the current index is stored in a variable maxEndingHere.
The maximum sum of the subarray ending at the current index is compared with the maximum sum of the subarray ending at the previous index. 
If the maximum sum of the subarray ending at the current index is greater than the maximum sum of the subarray ending at the previous index, then the maximum sum of the subarray ending at the current index is stored in a variable maxSoFar.
The maximum sum of the subarray ending at the current index is returned as the output.


## Walkthrough

`array = [-2,1,-3,4,-1,2,1,-5,4]`

We consider each element of the array and decide whether to include it in the current subarray or start a new subarray from it.

### Calculation Formula for two variables

```
current Sum = 0  Calculated by max(number, currentSum + number)
largest Sum = float("-inf")  Calculated by max(currentSum, largestSum)
```


### Traversing through an array will look like

```
Consider -2
current_sum = max(-2, current_sum + -2) = max(-2, 0 + -2) = -2
largest_sum = max(-2, float("-inf")) = -2
```
```
Consider 1
current_sum = max(1, current_sum+1) = max(1, -2+1) = 1
largest_sum = max(1, -2) = 1
```
```
Consider -3
current_sum = max(-3, current_sum + -3) = max(-3, 1 + -3) = -2
largest_sum = max(-2, 1) = 1
```
```
Consider 4
current_sum = max(4, current_sum + 4) = max(4, -2 + 4) = 4
largest_sum = max(4, 1) = 4
```
```
Consider -1
current_sum = max(-1, current_sum + -1) = max(-1, 4 + -1) = 3
largest_sum = max(3, 4) = 4
```
```
Consider 2
current_sum = max(2, current_sum + 2) = max(2, 3 + 2) = 5
largest_sum = max(5, 4) = 5
```
```
Consider 1
current_sum = max(1, current_sum + 1) = max(1, 5 + 1) = 6
largest_sum = max(6, 5) = 6
```
```
Consider -5
current_sum = max(-5, current_sum + -5) = max(-5, 6 + -5) = 1
largest_sum = max(1, 6) = 6
```
```
Consider 4
current_sum = max(4, current_sum + 4) = max(4, 1 + 4) = 5
largest_sum = max(5, 6) = 6
```

```Hence the output will be 6```



### Code Implementation Links

- [Python](https://github.com/TheAlgorithms/Python/blob/252df0a149502143a14e7283424d40b785dd451c/maths/kadanes.py)
