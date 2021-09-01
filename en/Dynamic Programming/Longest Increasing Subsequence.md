# Longest Increasing Subsequence in O(NlogN)

## Problem Statement

Given an Array of Integers `A`, find the length of the longest increasing subsequence (**LIS**) such that all elements of the subsequence are sorted in increasing order. An increasing subsequence contains elements `A[i]` and `A[j]` only if `i < j` and `A[i] <  A[j]`.

## Approach

The basic idea behind the solution is to keep track of all active subsequences at a given point in time. Based on the current number being considered, update these active lists. To understand this process, let’s work out an example.

```
A = {2,8,7}
Monotonically increasing subsequences are {2,8} and {2,7}
```
What if we add another element, 11 in this?

```
A = {2,8,7,11}
Monotonically increasing subsequences are {2,8,11} and {2,7,11}
```
What if a new element 9 is added to the array? What happens now? If we add t0 subsequences, the length of the longest subsequence remains 3.

```
A = {2,8,7,11,9}
Monotonically increasing subsequences are {2,8,9} and {2,7,9}
```
The decision to take for each element being considered is whether we create new active subsequences with length 3 with element 9 in them or continue with 11. If the next element is 10 we know that adding 9 to subsequence leads us to longer subsequences rather than keeping 11.

How do we decide when to replace and when to continue with the old element in the list of subsequences?

We add a new number `A[i]` to the sequence if `A[i]` > `E`, `E` is the last element in subsequence
and replace an number with `A[i]`, if there exists a number `A[j]` such that if `E` > `A[i]` < `A[j]`, it means, the new number falls somewhere between `A[j]` and `E`.

What if `A[i]` is smaller than all elements in the present list of subsequences? In this case, we have to create a new list and add `A[i]` into it. The invariant is to maintain lists of increasing sequences and update them based on the next number.
Each time a new element is to be added, scan all the lists of subsequences in decreasing order of their length. The following algorithm shows how to add/replace the new elements in the existing lists or to create a new list with them.

```
1. If A[i] is the smallest among all end candidates of active lists, start a new active list with A[i] of length 1.
2. If A[i] is largest among all end candidates of active lists, clone the largest active list, and append A[i] to it.
3. If A[i] is in between, find the list with the largest end number that is smaller than A[i]. Clone and append A[i] to this list.
4. Discard all other lists of the same length as that of this modified list.
```

## Time Complexity

`O(N * LogN)` In any case     
`O(logn)` time to find the ceiling of it and put it at the correct position

## Space Complexity

`O(N)` for each element in the array

## Example

Let’s take an example and see how it works with an array `A = [ 0, 8, 4, 12, 2, 10, 6, 14]`.</br>
For `A[0]`, there are no active lists of subsequences. We will create a new one.

```
[0,8,4,12,2,10,6,14]
[0]
```
Next, we go to `A[1]` which is 8. `A[i]` is greater than the ends of all the current lists, we will take the longest one and append `A[1]` to it.

```
[0,8,4,12,2,10,6,14]
[[0],[0,8]]
```
For `A[2]` with value 4, `A[i]` is less than the end of one of the lists and greater than the end of the other. We will find the list which has an end less than `A[i]`. In this case, it is the first list containing [0]. Clone it and append `A[2]` to it and discard all other lists of the same length.

```
[0,8,4,12,2,10,6,14]
[[0],[0,4]]
[0,8] is discarded as it is of the same length 2.
```
For `A[3]` with value 12, it is the same case as `A[1]` since it is greater than all the ends of the current lists, we will clone the longest available list and append it to that.

```
[0,8,4,12,2,10,6,14]
[[0],[0,4],[0,4,12]]
```
`A[4]` with value 2, it has the same case as `A[2]`, clone the one with the largest end which is less than `A[4]`, append `A[4]` to it, and discard all same length lists.

```
[0,8,4,12,2,10,6,14]
[[0],[0,2],[0,4,12]]
```
`A[5]` with value 10. Same as `A[4]`. Clone, extend and discard all the same length subsequences.
Lists = [ [0], [0, 2], [0,2,10] ] and [0, 4, 12] is discarded.

`A[6]` is 6. Same as `A[5]` We will clone the list which has an end smaller than `A[6]`, extend it, and discard all other lists which have the same length.
Lists = [ [0], [0, 2], [0,2,6] ] and [0, 2, 10] is discarded.

Following the same approach, we will go through all the numbers in the given array. The longest increasing subsequence in the given array is [ 0,2,6,14] with a length of 4.

```
[0,8,4,12,2,10,6,14]
[[0],[0,2],[0,2,6],[0,2,6,14]]
```
It seems like a lot of things need to be done just for maintaining the lists and there is significant space complexity required to store all of these lists. We can optimize on this, observe that we use only ends of the list and their sizes. We do not care what was before them on the list. So, can we store the ends of all the lists of an auxiliary array and do operations on them? The size of this array in the worst case will be n.

To append to the list, add another element in the auxiliary array. To replace just overwrite the smallest number which is greater than the current number. To find the smallest number which is greater than the current number, we can use binary search algorithm.

To find the length of the longest subsequence, keep track of the length of the auxiliary array because this will be the length of LIS.


## Code Implementation Links

[Code Implementation](https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/)

## Video Explanation

[Video explanation by Tushar Roy](https://www.youtube.com/watch?v=S9oUiVYEq7E&ab_channel=TusharRoy-CodingMadeSimple)
