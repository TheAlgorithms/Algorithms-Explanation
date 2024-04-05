# 삽입 정렬

## 문제

n개 원소로 구성된 배열이 주어졌을 때, 이 배열을 정렬하는 함수를 구하라.

## 절차

- Define a "key" index, the subarray to the left of which is sorted.
- Initiate "key" as 1, ie. the second element of array(as there is only one element to left of the second element, which can be considered as sorted array with one element).
- If value of element at (key - 1) position is less than value of element at (key) position; increment "key".
- Else move elements of sorted subarray that are greater than value of element at "key" to one position ahead of their current position. Put the value of element at "key" in the newly created void.

## 시간 복잡도

- 최악
  - 비교: $O(n^2)$
  - 교환: $O(n^2)$
- 최선
  - 비교: $O(n)$
  - 교환: $O(1)$

## 공간 복잡도

- 최악: $O(1)$ ([In-place 알고리즘](https://en.wikipedia.org/wiki/In-place_algorithm)으로, 추가적인 메모리 할당이 필요하지 않다)

## 예시

```

12, 11, 13, 5, 6

Let us loop for i = 1 (second element of the array) to 4 (Size of input array)

i = 1.
Since 11 is smaller than 12, move 12 and insert 11 before 12
11, 12, 13, 5, 6

i = 2.
13 will remain at its position as all elements in sorted subarray are smaller than 13
11, 12, 13, 5, 6

i = 3.
5 will move to the beginning,
and all other elements from 11 to 13 will move one position ahead of their current position.
5, 11, 12, 13, 6

i = 4.
6 will move to position after 5,
and elements from 11 to 13 will move one position ahead of their current position.
5, 6, 11, 12, 13  -- sorted array
```

## 영상 URL

- [CS50](https://www.youtube.com/watch?v=DFG-XuyPYUQ)
