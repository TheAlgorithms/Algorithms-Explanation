# 병합 정렬 (분할 정복 알고리즘)

## 문제

n개 원소로 구성된 배열이 주어졌을 때, 이 배열을 정렬하는 함수를 구하라.

## 절차

- Find a mid point and divide the array into to halves based on the mid point
- Recursively call the merge sort function for both the halves
- Merge the two sorted halves to get the sorted array

## 시간 복잡도

- $O(n \log n)$

## 공간 복잡도

- $O(n)$

## 예시

```
arr = [1, 3, 9, 5, 0, 2]

Divide the array in two halves [1, 3, 9] and [5, 0, 2]

Recursively call merge sort function for both these halves which will provide sorted halves
=> [1, 3, 9] & [0, 2, 5]

Now merge both these halves to get the sorted array [0, 1, 2, 3, 5, 9]
```

## 영상 URL

- [CS50](https://www.youtube.com/watch?v=EeQ8pwjQxTM)
