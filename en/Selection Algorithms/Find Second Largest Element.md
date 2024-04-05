# Find Second Largest Element

#### Problem statement

Given an unsorted array, write a function to find the second largest element in the array.

#### Approach

- Find the largest element in the array by traversing through the array using a loop and store the value in a variable (for ex: a )
- Assign a variable to store the negative infinite value, which stores the least value (for ex: b )
- Run a loop from zero to the size of the array.
- Now check whether the current element is greater than variable "b" and also not equal to variable "a", which is the largest number in the array.
- if the above condition is true, then the variable b stores the current element.

#### Time Complexity

- Best case: `O(n)`
- Average case: `O(n)`
- Worst case: `O(n)`

#### Space Complexity

Worst case: `O(1)`

#### Example

```txt
arr =    [2, 5,  3,  9,  12, 34, 25]
Indexes:  0   1   2   3   4   5   6
a = max(arr) 
(a = 34)
b = float("-inf")

Traverse elements from i = 0 to i = 6
i = 0
Check if b < arr[i] (arr[0]) and arr[0] != a
True : b = arr[0] (b = 2)

i = 1
Check if b < arr[i] (arr[1]) and arr[1] != a
True : b = arr[0] (b = 5)

i = 2
Check if b < arr[i] (arr[2]) and arr[2] != a
False : As b = 5 is greater than the current element arr[2] = 3
continues with the loop

i = 3
Check if b < arr[i] (arr[3]) and arr[3] != a
True : b = arr[3] (b = 9)

i = 4
Check if b < arr[i] (arr[4]) and arr[4] != a
True : b = arr[4] (b = 12)

i = 5
Check if b < arr[i] (arr[5]) and arr[5] != a
False:  As current element is equal to the variable "a" which stores the highest value in the array
continues with the loop

i = 6
Check if b < arr[i] (arr[6]) and arr[6] != a
True : b = arr[6] (b = 25)

Now we get the value 25 in the variable "b", which is the second highest value in the array.
```

#### Video Explanation

[Video explaining 2 approaches](https://www.youtube.com/watch?v=Mv8jhYQEbkA)
