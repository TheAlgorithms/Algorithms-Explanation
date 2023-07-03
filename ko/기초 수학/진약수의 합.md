# 진약수의 합

$s(n)$은 양의 정수 $n$에 대한 모든 진약수의 합을 구하는 표현식이다. 여기서, 진약수는 자기 자신인 $n$을 제외한 $n$의 모든 약수를 의미한다.

$$ s(n) = \sum\_{d | n, d \neq n} {d} $$

예를 들면, $15$ 에 대한 진약수의 합은 $(1 + 3 + 5) = 9$ 이다.

진약수의 합은 정수론에서 매우 유용한 성질이며, 다음을 정의하는 데 사용할 수 있다:

- 소수(Prime Numbers)
- 부족수(Deficient Numbers)
- 과잉수(Abundant Numbers)
- 완전수(Perfect Numbers)
- 친화수(Amicable Numbers)
- 불가촉수(Untouchable Numbers)
- 진약수의 합 수열(Aliquot Sequence of a number)
- 준완전수&근완전수(Quasiperfect & Almost Perfect Numbers)
- 사교수(Sociable Numbers)

## 진약수의 합에 관한 사실들

- 1은 진약수의 합이 0인 유일한 수
- 완전수는 진약수들의 합이 자기 자신이 되는 수
- $pq$처럼 곱셈 형태인 [_준소수_](https://en.wikipedia.org/wiki/Semiprime)에 대한 진약수의 합은 $p + q + 1$ 이다 (p와 q는 1이 아닌 서로 다른 숫자인 상황을 가정)
- 진약수의 합은 세계적으로 유명한 수학자 [Paul Erdős](https://en.wikipedia.org/wiki/Paul_Erd%C5%91s)가 가장 좋아하는 조사 주제 중 하나

## 진약수의 합을 찾는 접근방식

### 1단계: _진약수 구하기_

$1$부터 $[\frac{n} 2]$까지의 모든 수를 반복하여, $n$을 나눌 수 있는지 확인하고, 분할할 수 있다면 진약수에 추가한다.

$[\frac{n} 2]$와 같은 상계를 가지는 이유는 $n$이 짝수인 경우, 가능한 진약수 중 가장 큰 진약수는 $\frac{n} 2 $이며, $n$이 홀수인 경우, 가능한 진약수 중 가장 큰 진약수가 $[\frac{n} 2]$보다 작다. 따라서, 상계를 만들어 계산하는 방법이 $1$부터 $n$까지 모든 수를 반복하는 방법보다 불필요한 계산을 줄일 수 있다.

### 2단계: _진약수 더하기_

이렇게 구한 합은 진약수의 합이다

## 출처

- [위키피디아 "진약수의 합" 항목](https://ko.wikipedia.org/wiki/%EC%A7%84%EC%95%BD%EC%88%98%EC%9D%98_%ED%95%A9)
- [Wikipedia "Aliquot sum" 항목](https://en.wikipedia.org/wiki/Aliquot_sum)
- [GeeksForGeeks](https://www.geeksforgeeks.org/aliquot-sum/)

## The Algorithms 페이지

- [진약수의 합](https://the-algorithms.com/ko/algorithm/aliquot-sum)
