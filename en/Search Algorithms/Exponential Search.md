# Exponential Search

#### Prerequisites

- [Binary Search algorithm](https://github.com/faridevnz/Algorithms-Explanation/blob/master/en/Search%20Algorithms/Binary%20Search.md)

#### Problem Statement

Given a sorted array of *n* elements, write a function to search for the index of a given element (target)

#### Approach

- Search for the **range** within which the target is included increasing *index* by powers of 2
- If this range exists in array apply the Binary Search algorithm over it
- Else return -1

#### Example

```markdown
arr = [1, 2, 3, 4, 5, 6, 7, ... 998, 999, 1_000]

target = 998
index = 0
1. SEARCHING FOR THE RANGE
index = 1, 2, 4, 8, 16, 32, 64, ..., 512, ..., 1_024
after 10 iteration we have the index at 1_024 and outside of the array 
2. BINARY SEARCH
Now we can apply the binary search on the subarray from 512 and 1_000.
```

***Note***: we apply the Binary Search from 512 to 1_000 because at `i = 2^10 = 1_024` the array is finisced and the target number is less than the latest index of the array ( 1_000 ).

#### Time Complexity

**worst case:** `O(log *i*)` where `*i* = index` (position) of the target

**best case:** `O(*1*)`

#### Complexity Explanation

- The complexity of the first part of the algorithm is **O( log *i* )** because if *i* is the position of the target in the array, after doubling the search *index* `⌈log(i)⌉` times, the algorithm will be at a search index that is greater than or equal to *i*. We can write `2^⌈log(i)⌉ >= i`
- The complexity of the second part of the algorithm also is **O ( log *i* )** because that is a simple Binary Search. The Binary Search complexity ( as explained [here](https://github.com/faridevnz/Algorithms-Explanation/blob/master/en/Search%20Algorithms/Binary%20Search.md) ) is O( *n* ) where *n* is the length of the array. In the Exponential Search, the length of the array on which the algorithm is applied is `2^i - 2^(i-1)`, put into words it means '( the length of the array from start to *i* ) - ( the part of array skipped until the previous iteration )'. Is simple verify that `2^i - 2^(i-1) = 2^(i-1) ` 

After this detailed explanation we can say that the the complexity of the Exponential Search is:

```mathematica
O(log i) + O(log i) = 2O(log i) = O(log i)
```

#### Binary Search vs Exponential Search

Let's take a look at this comparison with a less theoretical example. Imagine we have an array with`1_000_000` elements and we want to search an element that is in the `4th` position. It's easy to see that:

- The Binary Search start from the middle of the array and arrive to the 4th position after many iterations
- The Exponential Search arrive at the 4th index after only 2 iterations

#### Code Implementation Links

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/search/exponential_search.cpp)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Search/ExponentialSearch.js)
