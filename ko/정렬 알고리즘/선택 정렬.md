# 선택 정렬

## 문제

n개 원소로 구성된 배열이 주어졌을 때, 이 배열을 정렬하는 함수를 구하라.

## 절차

- select the smallest element from the array
- put it at the beginning of the array
- then select the smallest array from the remaining unsorted list
- append it to the sorted array at the beginning
- keep doing this for every element of the array
- repeat the above process n times

## 시간 복잡도

- 최악: $O(n^2)$
- 최선: $O(n^2)$
- 평균: $O(n^2)$

## 공간 복잡도

- 최악: $O(1)$

## 예시

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

## 영상 URL

- [CS50](https://www.youtube.com/watch?v=f8hXR_Hvybo)

## 기타

- [Tute Board](https://boardhub.github.io/tute/?wd=selectSortAlgo2)
