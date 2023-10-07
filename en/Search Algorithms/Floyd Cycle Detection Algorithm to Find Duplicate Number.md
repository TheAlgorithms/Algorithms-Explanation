# Floyd Cycle Detection Algorithm to find duplicate number in an array

## Problem Statement

Given an array of integers containing `n + 1` integers, where each integer is in the range `[1, n]` inclusive. If there is only one duplicate number in the input array, this algorithm returns the duplicate number without modifying the original array, otherwise, it returns -1.

## Approach
- We can imagine the array `arr` as a directed graph where each element is a node. Node with value `arr[i]` will point to node with value `arr[arr[i]]`.
- The problem now becomes finding the node where two nodes with same value point towards.
- Since a cycle is formed when two nodes with same value point towards the same node, we can use Floyd Cycle Detection Algorithm (also known as "Hare and Tortoise algorithm") to solve the problem.
- The idea of algorithm is to maintain two pointers, `hare` and `tortoise` that iterate the array at different "speeds" (just like the fable). The details are as follow:

### The procedure
- Using two pointers `hare` and `tortoise`.
- Initiate `hare = tortoise = arr[0]`.
- For every next step until `hare == tortoise` again, assign `hare = arr[arr[hare]]` and `tortoise = arr[tortoise]` (`hare` "jumps" 2 steps while `tortoise` "jumps" one step.
- At this point, `hare == tortoise`, reset `tortoise = arr[0]` while keep the value of `hare` in the above procedure.
- For every next step until `hare == tortoise` again, assign `hare = arr[hare]` and `tortoise = arr[tortoise]` (this time `hare` only "jumps" one step).
- When `tortoise == hare`, that means `arr[hare] == arr[tortoise]` which is the start of the cycle, hence `hare` and `tortoise` represent the value of the duplicated element.
- Return `tortoise` (also possible to return `hare`)
  
## Time Complexity

`O(n)`

## Space Complexity

`O(1)`, since we only use two extra variables as pointers.

## Example with step-by-step explanation

```
arr = [3, 4, 8, 5, 9, 1, 2, 6, 7, 4]

hare = tortoise = arr[0] = 3

1st step:
  - hare = arr[arr[3]] = arr[5] = 1
  - tortoise = arr[3] = 5
2nd step:
  - hare = arr[arr[1]] = arr[4] = 9
  - tortoise = arr[5] = 1
3rd step:
  - hare = arr[arr[9]] = arr[4] = 9
  - tortoise = arr[1] = 4
4th step:
  - hare = arr[arr[9]] = 9
  - tortoise = arr[4] = 9

tortoise = arr[0] = 3

1st step:
  - hare = arr[9] = 4
  - tortoise = arr[3] = 5
2nd step:
  - hare = arr[4] = 9
  - tortoise = arr[5] = 1
3rd step:
  - hare = arr[9] = 4
  - tortoise = arr[1] = 4

return tortoise = 4
```

## Code Implementation Links

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/search/floyd_cycle_detection_algo.cpp)
- [C](https://github.com/TheAlgorithms/C/blob/master/searching/floyd_cycle_detection_algorithm.c)
#### Video Explanation

- [YouTube video explaining the Floyd Cycle Detection algorithm](https://www.youtube.com/watch?v=B6smdk7pZ14)
- [Another Youtube video](https://www.youtube.com/watch?v=PvrxZaH_eZ4&t=1s)
