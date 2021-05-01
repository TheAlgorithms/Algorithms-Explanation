# Recursive Bubble Sort

Bubble Sort is one of the simplest sorting algorithms that compares two elements at a time and swaps them if they are in the wrong order. This process is repeated until the entire sequence is in order.

- Time Complexity: `O(n ^ 2)` for average case; `O(n)` for best case.
- Space Complexity: `O(n)`; note that iterative bubble sort has space complexity as `O(1)`.

## Steps

Base case: If the size of the array is 1, return.

- We need to fix the last element of the current sub-array. For this, iterate over the entire array using normal Bubble Sort, and perform swapping.
- Next, call the function on the entire array excluding the last element(which was fixed by the iteration in the above step)
- Repeat until Base Case is reached.

## Example

Let the given array be: `{5, 3, 2, 1, 4}`

**First Iteration:**

- {`5`, `3`, 2, 1, 4} -> {`3`, `5`, 2, 1, 4} Swap since `5 > 3`
- {3, `5`, `2`, 1, 4} -> {3, `2`, `5`, 1, 4} Swap since `5 > 2`
- {3, 2, `5`, `1`, 4} -> {3, 2, `1`, `5`, 4} Swap since `5 > 1`
- {3, 2, 1, `5`, `4`} -> {3, 2, 1, `4`, `5`} Swap since `5 > 4`

This iteration has fixed the position of 5. Now, we will consider the array up to index 3.

**Second Iteration:**

- {`3`, `2`, 1, 4, 5} -> {`2`, `3`, 1, 4, 5} Swap since `3 > 2`
- {2, `3`, `1`, 4, 5} -> {2, `1`, `3`, 4, 5} Swap since `3 > 1`
- {2, 1, `3`, `4`, 5}; As `3 < 4`, do not swap

Note: As we check one less element with every iteration, we do not need elements at index 3 and 4 i.e., `4` and `5`, as 5 is already in order. Formally, for an array with `n` integers, we consider elements only up to index `n - i`, where `i` is the iteration number.

**Third Iteration:**

- {`2`, `1`, 3, 4, 5} -> {`1`, `2`, 3, 4, 5} Swap since `1 > 2`
- {1, `2`, `3`, 4, 5}; As `2 < 3`, do not swap

**Fourth Iteration:**

- {`1`, `2`, 3, 4, 5}; As `1 < 2`, do not swap

**Fifth Iteration:**

- {`1`, 2, 3, 4, 5}; As the size of the array is 1, return.

Note: This is the base case.

## Pseudo Code

```
void bubbleSort(arr[], n)
    if(n==1)
        return;

    for(i = 0; i<n-1; i++)
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1])

    bubbleSort(arr, n-1)
```

## Implementations

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/BubbleSortRecursion.java)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/bubble_sort_recursion.c)

## Video Explanation

[A video explaining iterative as well as recursive bubble sort](https://www.youtube.com/watch?v=gDMDVLBfCI0)
