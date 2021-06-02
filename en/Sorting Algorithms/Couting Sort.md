# Counting Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- Find out the maximum element (let it be max) from the given array.
- Initialize an array of length max+1 with all elements 0. This array is used for storing the count of the elements in the array.
- Store the count of each element at their respective index in count array. For example: if the count of element 3 is 2 then, 2 is stored in the 3rd position of count array. If element "5" is not present in the array, then 0 is stored in 5th position.
- Store cumulative sum of the elements of the count array. It helps in placing the elements into the correct index of the sorted array.
- Find the index of each element of the original array in the count array. This gives the cumulative count. Place the element at the index calculated as shown in figure below.
- After placing each element at its correct position, decrease its count by one.

#### Time Complexity

- `O(n+k)`, best-case performance

- `O(n+k)`, average-case performance

- `O(n+k)`, worst-case performance - where k is the range of the non-negative key values.

#### Space Complexity

`O(n+k)`, worst-case performance

#### Founder's Name

- Harold H. Seward

#### Example

```
count = array of k+1 zeros
for x in input do
  count[key(x)] += 1

total = 0
for i in 0, 1, ... k do
  count[i], total = total, count[i] + total

output = array of the same length as input
for x in input do
  output[count[key(x)]] = x
  count[key(x)] += 1

return output
```

#### Code Implementation Links

- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/counting_sort.c)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/counting_sort.cpp)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/CountingSort.js)
- [Matlab](https://github.com/TheAlgorithms/MATLAB-Octave/blob/master/algorithms/sorting/counting_sort.m)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/counting_sort.py)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/sorting/counting_sort.rs)

#### Video Explanation

[A video explaining the Counting Sort Algorithm](https://www.youtube.com/watch?v=7zuGmKfUt7s)

#### Animation Explanation

TBD
