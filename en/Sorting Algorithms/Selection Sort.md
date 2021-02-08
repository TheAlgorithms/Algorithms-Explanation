# Selection Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- select the smallest element from the array
- put it at the beginning of the array
- then select the smallest array from the remaining unsorted list
- append it to the sorted array at the beginning
- keep doing this for every element of the array
- repeat the above process n times

#### Time Complexity

`O(n^2)` Worst case performance

`O(n^2)` Best-case performance

`O(n^2)` Average performance

#### Space Complexity

`O(1)` Worst case

#### Example

```
arr[] = {80, 10, 40, 30}
Indexes: 0   1   2   3    

1. Index = 0
	Select the minimum number from the array (between index 0-3), ie, 10
2. Swap 10  and 80 (arr[0])
3. The array now is {10, 80, 40, 30}

4. Index = 1
	Select the minimum number from the array (between index 1-3), ie, 30
5. Swap 30 and 80 (arr[1])
6. The array now is {10, 30, 40, 80}

7. Index = 2
	Select the minimum number from the array (between index 2-3), ie, 40
8. Swap 40 and 40 (arr[2])
9. The array now is {10, 30, 40, 80}

The array is now sorted.
```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/SelectionSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/Sorting/Selection%20Sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/selection_sort.py)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/selection_sort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Sorting/selection_sort.rb)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/SelectionSort.c)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/SelectionSort.scala)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/selectionSort.js)

#### Video Explanation

[A video explaining the Selection Sort Algorithm](https://www.youtube.com/watch?v=f8hXR_Hvybo)

#### Animation Explanation

- [Tute Board](https://boardhub.github.io/tute/?wd=selectSortAlgo2)
