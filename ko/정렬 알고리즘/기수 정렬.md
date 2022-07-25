# 기수 정렬

The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is `Ω(nlogn)`, i.e., they cannot do better than `nlogn`.

Counting sort is a linear time sorting algorithm that sort in `O(n+k)` time when elements are in the range from 1 to k.

What if the elements are in the range from 1 to n2? We can’t use counting sort because counting sort will take `O(n2)` which is worse than comparison-based sorting algorithms. Can we sort such an array in linear time?

Radix Sort is the answer. The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.

## 절차

Do following for each digit i where i varies from least significant digit to the most significant digit.
Sort input array using counting sort (or any stable sort) according to the i’th digit.

## 예시

Original, unsorted list:
`170, 45, 75, 90, 802, 24, 2, 66`

Sorting by least significant digit (1s place) gives:

[*Notice that we keep 802 before 2, because 802 occurred
before 2 in the original list, and similarly for pairs
170 & 90 and 45 & 75.]

Sorting by next digit (10s place) gives:

[*Notice that 802 again comes before 2 as 802 comes before 2 in the previous list.]

`802, 2, 24, 45, 66, 170, 75, 90`

Sorting by the most significant digit (100s place) gives:
`2, 24, 45, 66, 75, 90, 170, 802`

## 시간 복잡도

Let there be d digits in input integers. Radix Sort takes `O(d*(n+b))` time where b is the base for representing numbers, for example, for the decimal system, b is 10.
What is the value of d? If `k` is the maximum possible value, then d would be `O(logb(k))`. So overall time complexity is `O((n+b) * logb(k))`. Which looks more than the
time complexity of comparison-based sorting algorithms for a large k. Let us first limit k. Let k <= nc where c is a constant. In that case, the complexity becomes
`O(n logb(n))`. But it still doesn’t beat comparison-based sorting algorithms.

## Is Radix Sort preferable to Comparison based sorting algorithms like Quick-Sort?

If we have `log2n` bits for every digit, the running time of Radix appears to be better than Quick Sort for a wide range of input numbers. The constant factors hidden in
asymptotic notation are higher for Radix Sort and Quick-Sort uses hardware caches more effectively. Also, Radix sort uses counting sort as a subroutine and counting sort
takes extra space to sort numbers.

## 영상 URL

- [](https://youtu.be/nu4gDuFabIM)
