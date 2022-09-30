# Quick Select

### Problem Statement

Given an array, find the kth largest / smallest element in linear time complexity.

### Approach

- Select a pivot element at random
- Apply partitioning as used in quick sort
- After partitioning, the pivot will be placed in its sorted location ie. All elements smaller than the pivot will be on its left and greater on its right
- If index of sorted pivot is k, then the pivot is our kth element and we return the number
- Else, check if 'k' is greater or smaller and choose a new pivot in that range.
- Repeat till we get the kth element at kth position

### Time Complexity

- `O(n^2)` Worst-Case Performance

- `O(n)` Best-case Performance

- `O(n)` Average Performance


### Founder's Name

- This algorithm was developed by Tony Hoare and is also called `Hoare's Selection Algorithm`.

### Example

```
arr[] = {8,2,11,7,9,1,3}
Indexes: 0 1 2 3 4 5 6

Let's say k = 4. ie. We have to find 4th smallest element.

1. Choosing random pivot as 7
2. Swap 7 with the last element and apply the partitioning algorithm
3. After applying partition, all elements smaller than 7 will be placed to the left and greater in its right.
   Thus we can say that 7 is in its sorted position arr[] = {2,3,1,7,8,9,11}
4. As position of '7' is 4th (ie. k). Thus we will simply return 7
```

### Helpful Video Links

[Video explaining how to find the Kth smallest/largest element in varying complexities](https://youtu.be/hGK_5n81drs)
