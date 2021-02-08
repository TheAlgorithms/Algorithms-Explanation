# Bubble Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- select the first element of the array
- compare it with its next element
- if it is larger than the next element then swap them
- else do nothing
- keep doing this for every index of the array
- repeat the above process n times.

#### Time Complexity

`O(n^2)` Worst case performance

`O(n)` Best-case performance

`O(n^2)` Average performance

#### Space Complexity

`O(1)` Worst case

#### Founder's Name

- The term “Bubble Sort” was first used by Iverson, K in 1962.

#### Example

```
arr[] = {10, 80, 40, 30}
Indexes: 0   1   2   3    

1. Index = 0, Number = 10
2. 10 < 80, do nothing and continue

3. Index = 1, Number = 80
4. 80 > 40, swap 80 and 40
5. The array now is {10, 40, 80, 30}

6. Index = 2, Number = 80
7. 80 > 30, swap 80 and 30
8. The array now is {10, 40, 30, 80}

Repeat the Above Steps again

arr[] = {10, 40, 30, 80}
Indexes: 0   1   2   3   

1. Index = 0, Number = 10
2. 10 < 40, do nothing and continue

3. Index = 1, Number = 40
4. 40 > 30, swap 40 and 30
5. The array now is {10, 30, 40, 80}

6. Index = 2, Number = 40
7. 40 < 80, do nothing
8. The array now is {10, 30, 40, 80}

Repeat the Above Steps again

arr[] = {10, 30, 40, 80}
Indexes: 0   1   2   3   

1. Index = 0, Number = 10
2. 10 < 30, do nothing and continue

3. Index = 1, Number = 30
4. 30 < 40, do nothing and continue

5. Index = 2, Number = 40
6. 40 < 80, do nothing

Since there are no swaps in above steps, it means the array is sorted and we can stop here.
```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Java/blob/master/Sorts/BubbleSort.java)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/bubble_sort.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/bubble_sort.py)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/BubbleSorter.cs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/bubblesort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/bubble_sort.rb)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/bubble_sort.c)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/BubbleSort.scala)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/BubbleSort.js)

#### Video Explanation

[A video explaining the Bubble Sort Algorithm](https://www.youtube.com/watch?v=Jdtq5uKz-w4)

#### Others

Bubble sort is also known as Sinking sort.

#### Animation Explanation

- [Tute Board](https://boardhub.github.io/tute/?wd=bubbleSortAlgo2)
