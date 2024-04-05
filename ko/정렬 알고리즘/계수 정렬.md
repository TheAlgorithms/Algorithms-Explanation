# 계수 정렬

## 문제

n개 원소로 구성된 배열이 주어졌을 때, 이 배열을 정렬하는 함수를 구하라.

## 절차

- Find out the maximum element (let's call it `max`) from the given array.
- Initialize an array of length `max+1` with all elements set to 0 to store the array's count.
- Store the count of each element at their respective index in the array's count.
- Store cumulative sum of the elements of the count array. It helps in placing the elements into the correct index of the sorted array.
- Find the index of each element of the original array in the array's count. This gives the cumulative count.
- Place the element at the index calculated and decrease its count by one.

## 시간 복잡도

- $O(n+k)$ ($k$는 음수가 아닌 key 값의 범위)

## 공간 복잡도

- $O(n+k)$ ($k$는 음수가 아닌 key 값의 범위)

## 만든 사람

- [해롤드 H. 수어드](https://en.wikipedia.org/wiki/Harold_H._Seward)

## 예시

```
countingSort(array, size)
  max <- find largest element in array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
```

## 영상 URL

- [GeeksforGeeks](https://www.youtube.com/watch?v=7zuGmKfUt7s)

## 기타

- [David Galles (University of San Francisco)](https://www.cs.usfca.edu/~galles/visualization/CountingSort.html)
