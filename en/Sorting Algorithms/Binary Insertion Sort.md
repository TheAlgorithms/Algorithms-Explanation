# Binary Insertion Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

**Process flow:**

In binary insertion sort, we divide the array into two subarrays — sorted and unsorted. The first element of the array is in the sorted subarray, and the rest of the elements are in the unsorted one.

We then iterate from the second element to the last element. For the i-th iteration, we make the current element our “key.” This key is the element that we have to add to our existing sorted subarray.

Consider the array Arr,

1. Iterate the array from the second element to the last element.
2. Store the current element Arr[i] in a variable key.
3. Find the position of the element just greater than Arr[i] in the subarray from Arr[0] to Arr[i-1] using binary search. Say this element is at index pos.
4. Shift all the elements from index pos to i-1 towards the right.
5. Arr[pos] = key.

#### Time Complexity

`O(n Log n)` Best case Performance

`O(n^2)` Average case Performance

`O(n^2)` Worst case Performance

#### Space Complexity

Binary insertion sort is an in-place sorting algorithm. This means that it only requires a constant amount of additional space. We sort the given array by shifting and inserting the elements.

Therefore, the space complexity of this algorithm is `O(1)` if we use iterative binary search. It will be `O(logN)` if we use recursive binary search because of `O(log N)` recursive calls.

#### Example 

Consider the array 29, 10, 14, 37, 14,

![binary insertion sort - array](https://cdn.hashnode.com/res/hashnode/image/upload/v1661929956266/DSLKdODLR.png align="center")


**First Pass**

Key = 1

Since we consider the first element is in the sorted array, we will be starting from the second element. Then we apply the binary search on the sorted array. 

![first pass - binary insertion sort ](https://cdn.hashnode.com/res/hashnode/image/upload/v1661934538052/qqF1rB3Qq.png align="center")

In this scenario, we can see that the middle element in sorted array  (29) is greater than the key element 10. So the position of the key element is 0. Then we can shift the remaining elements by 1 position.


![after binary search first pass - binary insertion sort](https://cdn.hashnode.com/res/hashnode/image/upload/v1661934765696/rVvhl09gD.png align="center")

Increment the value of key. 

**Second Pass**

Key = 2

Now the key element is 14. We will apply binary search in the sorted array to find the position of the key element. 


![binary insertion sort -  second pass](https://cdn.hashnode.com/res/hashnode/image/upload/v1661934886050/hO3y2uCQ7.png align="center")

In this scenario, by applying binary search, we can see key element to be placed at index 1 (between 10 and 29). Then we can shift the remaining elements by 1 position.


![binary insertion sort - after binary search, second pass](https://cdn.hashnode.com/res/hashnode/image/upload/v1661934956931/sbe6VJ_2K.png align="center")


**Third Pass**

Key = 3

Now the key element is 37. We will apply binary search in the sorted array to find the position of the key element. 


![binary insertion sort - third pass](https://cdn.hashnode.com/res/hashnode/image/upload/v1661935075142/N6zvcH73Q.png align="center")

In this scenario, by applying binary search, we can see key element is placed in its correct position. 

![binary insertion sort - after binary search](https://cdn.hashnode.com/res/hashnode/image/upload/v1661935158835/52ZGwrAOF.png align="center")


**Fourth Pass**

Key = 4

Now the key element is 14. We will apply binary search in the sorted array to find the position of the key element. 


![binary insertion sort - fourth pass ](https://cdn.hashnode.com/res/hashnode/image/upload/v1661935242311/YX7lhAazo.png align="center")

In this scenario, by applying binary search, we can see key element to be placed at index 2 (between 14 and 29). Then we can shift the remaining elements by 1 position.


![binary insertion sort - after binary search](https://cdn.hashnode.com/res/hashnode/image/upload/v1661935283231/zCdCYPErq.png align="center")

Now we can see all the elements are sorted.

#### Is Binary Insertion Sort a stable algorithm ?
It is a stable sorting algorithm, the elements with the same values appear in the same order in the final array as they were in the initial array.

#### Cons and Pros
1. Binary insertion sort works efficiently for smaller arrays.
2. This algorithm also works well for almost-sorted arrays, where the elements are near their position in the sorted array.
3. However, when the size of the array is large, the binary insertion sort doesn’t perform well. We can use other sorting algorithms like merge sort or quicksort in such cases.
4. Making fewer comparisons is also one of the strengths of this sorting algorithm; therefore, it is efficient to use it when the cost of comparison is high.
5. Its efficient when the cost of comparison between keys is sufficiently high. For example, if we want to sort an array of strings, the comparison operation of two strings will be high.

#### Code Implementation Links

- [Javascript](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/BinaryInsertionSort.js)

- [Python](https://github.com/syedjafer/Python/blob/master/sorts/binary_insertion_sort.py)

- [Typescript](https://github.com/syedjafer/TypeScript/blob/master/Sorts/BinaryInsertionSort.ts)

#### Blog 

[makereading blog binary insertion sort](https://makereading.com/binary-insertion-sort)

#### Video Explanation

[A video explaining the binary insertion sort](https://www.youtube.com/watch?v=3Yx_wINCxM4)

