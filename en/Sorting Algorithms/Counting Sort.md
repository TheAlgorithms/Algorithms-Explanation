# Counting Sort

#### Problem Statement

Given an unsorted array of `n` elements, write a function to sort the array.

#### Approach

- Find out the maximum element (let's call it `max`) from the given array.
- Initialize an array of length `max+1` with all elements set to 0 to store the array's count.
- Store the count of each element at their respective index in the array's count.
- Store cumulative sum of the elements of the count array. It helps in placing the elements into the correct index of the sorted array.
- Find the index of each element of the original array in the array's count. This gives the cumulative count.
- Place the element at the index calculated and decrease its count by one.

#### Time Complexity

`O(n+k)`: where `k` is the range of the non-negative key values.

#### Space Complexity

`O(n+k)`: where `k` is the range of the non-negative key values.

#### Founder's Name

- Harold H. Seward.

#### Example

```
countingSort(array, size)
  max <- find largest element in array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
```

#### Code Implementation Links

- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/counting_sort.c)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/counting_sort.cpp)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/CountingSort.js)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/counting_sort.m)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/counting_sort.py)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/counting_sort.rs)

#### Video Explanation

[A video explaining the Counting Sort Algorithm](https://www.youtube.com/watch?v=7zuGmKfUt7s)

#### Animation Explanation

[Counting Sort visualization](https://www.cs.usfca.edu/~galles/visualization/CountingSort.html)
