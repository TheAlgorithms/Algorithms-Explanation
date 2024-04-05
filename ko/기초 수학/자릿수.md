# 자릿수

`N = 2019`이라고 할 때, `N`의 자릿수는 4이고, 각 자리의 숫자는 `2`, `0`, `1`, `9`이다.

몇 가지 예시를 보면:

```
N = 00  [영(零)]
자릿수 = 0

N = -123 [음수]
자릿수 = 3

N = 10000 [양수]
자릿수 = 5
```

## 간단한 방법

가장 먼저 떠오르는 방법은 간단하다:

    1. 숫자 N이 0인지 확인한다.
    2. N이 0이 아닌 경우, 자릿수를 1 늘린다.
    3. N을 10으로 나눈다.
    4. N이 0이 될 때까지 위의 과정을 반복한다.

**알고리즘 분석:** 위 방법에서 수행되는 작업의 수는 숫자 N의 자릿수와 같다는 사실을 쉽게 알 수 있다. 따라서 이 방법의 시간 복잡도는 $O(d)$이다. ($d$는 숫자 N의 자릿수)

**모의 실행:** `N = 58964`라고 할 때,

자릿수를 저장할 변수 `digitsCount`를 0으로 초기화하고, `N`이 0이 아닌 동안 반복적으로 `digitsCount`를 늘리고 `N`을 10으로 나눈다.

```
Iteration 1: N not equals to 0
Increment digitsCount, digitsCount = digitsCount + 1.
digitsCount = 0 + 1 = 1.
N = N/10 = 58964/10 = 5896.

Iteration 2: N not equals to 0
Increment digitsCount, digitsCount = digitsCount + 1.
digitsCount = 1 + 1 = 2.
N = N/10 = 5896/10 = 589.

Iteration 3: N not equals to 0
Increment digitsCount, digitsCount = digitsCount + 1.
digitsCount = 2 + 1 = 3.
N = N/10 = 589/10 = 58.

Iteration 4: N not equals to 0
Increment digitsCount, digitsCount = digitsCount + 1.
digitsCount = 3 + 1 = 4.
N = N/10 = 58/10 = 5.

Iteration 5: N not equals to 0
Increment digitsCount, digitsCount = digitsCount + 1.
digitsCount = 4 + 1 = 5.
N = N/10 = 5/10 = 0.

Iteration 6: N becomes equal to 0.
Terminate any further operation.
Return value of digitsCount.
```

그러므로 `N`의 자릿수는 5이다.

## 더 나은 방법

수학을 활용하면 더 나은 방법을 찾을 수 있다. N의 자릿수는 다음의 공식으로 쉽게 구할 수 있다:

```
N의 자릿수 = log10(N) + 1.
```

**유도:** `N`의 자릿수를 `K`라고 하면:

```
10^(K-1) <= N < 10^K
```

위 부등식의 양변에 상용로그(밑이 10인 로그)를 취하면:

```
K - 1 <= log10(N) < K.

또는, K - 1 + 1 <= log10(N) + 1 < K + 1
또는, K <= log10(N) + 1 < K + 1
```

그러므로,

```
K = floor(log10(N) + 1)
```

**알고리즘 분석:** 위 방법은 `로그`와 `버림`이라는 수학적인 함수를 사용한다. 그러므로 이 방법의 시간 복잡도는 두 함수의 복잡도에 따라 달라진다. 버림함수는 소수점 이하의 숫자들을 버리기만 하면 되기 때문에 사실상 항상 일정한 시간이 걸린다 (적어도 그렇게 만들기 쉽다). 일반적으로 고정폭 부동 소수점 값을 사용하기 때문에 실용적으로는 `로그함수도 일정한 시간이 걸린다고 가정`할 수 있다. 하지만 임의 정밀도 "큰 수" 라이브러리를 사용하면, 사용되는 로그 알고리즘에 따라 로그함수의 성능이 달라질 수 있다.

## 영상 URL

- [Programming Tutorials (C, C++)](https://www.youtube.com/watch?v=ngWnvWR8NkE)

## 출처

- [GeeksforGeeks](https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/)
