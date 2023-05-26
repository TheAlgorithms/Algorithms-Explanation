# Cycle Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- If the element is already at its correct position do nothing
- Otherwise, find the correct position of a by counting the total number of elements that are less than current element
- Insert current element into its correct position
- Set replaced element as new current element and find its correct position
- Continue process until array is sorted

#### Time Complexity

`O(n^2)` Worst case performance

`O(n^2)` Best-case performance

`O(n^2)` Average performance

#### Space Complexity

`O(n)` Worst case

#### Application of algorithm

- Cycle sort algorithm is useful for situations where memory write or element swap operations are costly.

#### Example

A single cycle of sorting array | b | d | e | a | c |

```
1. Select element for which the cycle is run, i.e. "b".

|b|d|e|a|c|

b - current element 

2. Find correct location for current element and update current element.

|b|b|e|a|c|

d - current element 

3. One more time, find correct location for current element and update current element.

|b|b|e|d|c|

a - current element 

4. Current element is inserted into position of initial element "b" which ends the cycle.

|a|b|e|d|c|

a - current element 

5. New cycle should be started for next element.
```

#### Video Explanation

[A video explaining the Cycle Sort Algorithm](https://www.youtube.com/watch?v=gZNOM_yMdSQ)

#### The Algorithms Page

[Cycle Sort](https://the-algorithms.com/algorithm/cycle-sort)
