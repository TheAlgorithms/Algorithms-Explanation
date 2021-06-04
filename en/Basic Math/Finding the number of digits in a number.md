# Finding the number of digits in a number

Let's say `N = 2019`. The number of digits in N here is 4 and the digits are: `2`, `0`, `1`, and `9`.

Some more Examples:
```
N = 00  [zero]
Number of digits = 0

N = -123 [negative]
Number of digits = 3

N = 10000 [positive]
Number of digits = 5
```

<div align="center">
  <h2 align="center"> 1st Solution </h2>
</div>

### Simple Solution 
The first solution that comes to mind is quite simple:

    1. Check whether the number N is equal to zero.
    2. Increase the count of digits by 1 if N is not zero.
    3. Reduce the number by dividing it by 10.
    4. Repeat the above steps until the number is reduced to zero.

**Analysis of the above algorithm:** You can clearly see that the number of operations performed in the above solution is equal to the count of digits present in the number. So, the time complexity of the solution is O(digitsCount).

**Dry-run of the above algorithm:** 
Consider an example, N = 58964. Initialize a variable digitsCount to zero which will store the count of digits. Keep incrementing digitsCount until N is not zero, and reduce it by dividing by 10 at each step.
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

Therefore, number of digits = 5.
```

<div align="center">
  <h2 align="center"> 2nd Solution </h2>
</div>

### Better Solution 
A better solution is to use mathematics to solve this problem. The number of digits in a number say N can be easily obtained by using the following formula:
```
number of digits in N = log10(N) + 1.
```

**Derivation:** Suppose the number of digits in the number **N** is **K**.

Therefore, we can say that:
```
10^(K-1) <= N < 10K
```
Applying base-10 logarithm to both sides in the above equation, we get:
```
K-1 <= log10(N) < K.

or, K - 1 + 1 <= log10(N) + 1 < K + 1
or, K <= log10(N) + 1 < K + 1 
```
Therefore,
```
K = floor(log10(N) + 1)
```

**Analysis of the above algorithm:** The above algorithm uses two mathematical functions: the `logarithm of a number` and the `floor function`. Therefore, its time complexity depends on the complexity of those two functions. Practically, the `floor function` is always, or can at least easily be made, constant time - all it has to do is: drop the digits behind the decimal point. For practical purposes, one can `assume that the logarithm is constant time` as well, as one will usually be working with fixed-width floating-point values. If one uses `arbitrary-precision "big number" libraries` however, logarithm will not be constant anymore: performance will depend on the logarithm algorithms used.


# Source

- [Proof in GeeksForGeeks](https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/)

# YouTube

- [Video URL](https://www.youtube.com/watch?v=ngWnvWR8NkE)
