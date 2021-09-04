# Find (Maximum) 

Find the maximum number from a list of given numbers.

## Applications

By finding the maximum number in a list, we can perform many operations based on this.

Uses:

- Sort our records based on the largest value.
- Makes our process of finding a particular item easy.
- If we are able to find out and sort our records based on 
  largest value then we can sort or find our records according 
  to particular index or element with ease.

## Steps

The maximum number from an array can be found by various ways. 
Here, we will see three different ways of finding the largest 
number.

1. By comparing all the elements of an array.
2. By using predefined methods.
3. By sorting.

## Example 1

By comparing all the elements of an array:

Given the list `[6, 4, 50, 8, 70, 2, 20]`, let's find the maximum number.

### Step 1

Provide `[6, 4, 50, 8, 70, 2, 20]` as input for a method or function.

### Step 2

By using the comparison process, we are going to find the largest number.
Set the the index element of an array as maximum number.
max = array[0]
`max = 6` 

### Step 3

Looping the entire array of elements and compare each element with max.
If a given number is bigger than the max, then we make this particular number as max.
Consider one of the iterations, which happens between 6 and 50.
`max = 50`

End of the entire loop.
`max = 70`

### Step 4

Return the value 70.

## Example 2

By predefined max method:

Given the list `[6, 4, 50, 8, 70, 2, 20]`, let's find the maximum number.

### Step 1

Provide `[6, 4, 50, 8, 70, 2, 20]` as input for a method/ function.

### Step 2

The predefined max method, find the maximum element.
`70`

### Step 3

Return the value 70.

## Example 3

By sorting:

Given the list `[6, 4, 50, 8, 70, 2, 20]`, let's find the maximum number.

### Step 1

Provide `[6, 4, 50, 8, 70, 2, 20]` as input for a method/ function.

### Step 2

The predefined sort method, sorts the entire array in ascending (small to big) order.
`[2, 4, 6, 8, 20, 50, 70]`

### Step 3

Get the last value out of the list by using predefined last method.
`70`

### Step 4

Return the value 70.

## Implementation

- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/maths/find_max.rb)

# Source

- [GeeksForGeeks](https://www.geeksforgeeks.org/c-program-find-largest-element-array/)

# YouTube

- [YouTube URL video](https://youtu.be/En68ipRaFOU)
