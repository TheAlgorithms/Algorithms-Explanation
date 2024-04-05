# 셸 정렬

## 문제

n개 원소로 구성된 배열이 주어졌을 때, 이 배열을 정렬하는 함수를 구하라.

## 절차

- start with the initial gap, g
- go through the first (n - g) elements in the array
- compare the element with the next element that is g distance away
- swap the two elements if the first element is bigger
- decrease the gap and repeat until gap = 1

## 시간 복잡도

셸 정렬의 시간 복잡도는 gap sequences에 따라 다르다. 아래 시간 복잡도는 $(\frac{n}{2})^k$의 gap sequences를 가정한다.

- 최악: $O(n^2)$
- 최선: $O(n)$
- 평균: $O(n^2)$

## 공간 복잡도

- 최악: $O(1)$

## 만든 사람

- [도널드 셸](https://en.wikipedia.org/wiki/Donald_Shell)

## 예시

```
arr[] = {61, 109, 149, 111, 34, 2, 24, 119}
Initial Gap: 4

1.  Index = 0, Next element index = 4
2.  61 > 34, swap 61 and 34
3.  The array is now {34, 109, 149, 111, 61, 2, 24, 119}

4.  Index = 1, Next element index = 5
5.  109 > 2, swap 109 and 2
6.  The array is now {34, 2, 149, 111, 61, 109, 24, 119}

7.  Index = 2, Next element index = 6
8.  149 > 24, swap 149 and 24
9.  The array is now {34, 2, 24, 111, 61, 109, 149, 119}

10. Index = 3, Next element index = 7
11. 111 < 119, do nothing and continue

12. Divide the gap by 2 and repeat until gap = 1
```

## 영상 URL

- [Computer Education for All](https://www.youtube.com/watch?v=H8NiFkGu2PY)
