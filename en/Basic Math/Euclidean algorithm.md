# Euclidean algorithm

## Problem

Find the Greatest Common Divisor (GCD) of two positive integers $a$ and $b$, which is defined as the largest number $g = gcd(a, b)$ such that $g$ divides both $a$ and $b$ without remainder.

## Idea

The Euclidean algorithm is based on the simple observation that the GCD of two numbers doesn't change if the smaller number is subtracted from the larger number:

Let $a > b$. Let $g$ be the GCD of $a$ and $b$.
Then $g$ divides $a$ and $b$. Thus $g$ also divides $a - b$.

Let $g'$ be the GCD of $b$ and $a - b$.

Proof by contradiction that $g' = g$:

Assume $g' < g$ or $g' > g$.

If $g' < g$, $g'$ would not be the *greatest* common divisor,
since $g$ is also a common divisor of $a - b$ and $b$.

If $g' > g$, $g'$ divides $b$ and $a - b$ -
that is, there exist integers $n, m$
such that $g'n = b$ and $g'm = a - b$.
Thus $g'm = a - g'n \iff g'm + g'n = a \iff g'(m + n) = a$.
This imples that $g' > g$ also divides $a$,
which contradicts the initial assumption that $g$ is the GCD of $a$ and $b$.

## Implementation

To speed matters up in practice, modulo division is used instead of repeated subtractions:
$b$ can be subtracted from $a$ as long as $a >= b$.
After these subtractions only the remainder of $a$ when divided by $b$ remains.

A straightforward Lua implementation might look as follows:

```lua
function gcd(a, b)
	while b ~= 0 do
		a, b = b, a % b
	end
	return a
end
```

note that `%` is the modulo/remainder operator;
`a` is assigned to the previous value of `b`,
and `b` is assigned to the previous value of `a`
modulo the previous value of `b` in each step.

## Analysis

### Space Complexity

The space complexity can trivially be seen to be constant:
Only two numbers (of assumed constant size), $a$ and $b$, need to be stored.

### Time Complexity

Each iteration of the while loop runs in constant time and at least halves $b$.
Thus $O(log_2(n))$ is an upper bound for the runtime.

## Walkthrough

Finding the GCD of $a = 42$ and $b = 12$:

1. $42 \mod 12 = 6$
2. $12 \mod 6 = 0$

The result is $gcd(42, 12) = 6$.

Finding the GCD of $a = 633$ and $b = 142$ using the Euclidean algorithm:

1. $633 \mod 142 = 65$
2. $142 \mod 65 = 12$
3. $65 \mod 12 = 5$
4. $12 \mod 5 = 2$
5. $5 \mod 2 = 1$
6. $2 \mod 1 = 0$

The result is $gcd(633, 142) = 1$: $a$ and $b$ are co-prime.

## Applications

* Shortening fractions
* Finding the Least Common Multiple (LCM)
* Efficiently checking whether two numbers are co-prime (needed e.g. for the RSA cryptosystem)

## Resources

* [Wikipedia Article](https://en.wikipedia.org/wiki/Euclidean_algorithm)
