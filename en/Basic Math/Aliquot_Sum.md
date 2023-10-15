# Aliquot Sum

The aliquot sum $s(n)$ of a positive integer $n$ is the sum of all proper divisors of $n$, that is, all divisors of $n$ other than the number $n$ itself. That is:

$$ s(n) = \sum_{d | n, d \neq n} {d} $$

So, for example, the aliquot sum of the number $15$ is $(1 + 3 + 5) = 9$

Aliquot sum is a very useful property in Number Theory, and can be used for defining:
- Prime Numbers
- Deficient Numbers
- Abundant Numbers
- Perfect Numbers
- Amicable Numbers
- Untouchable Numbers
- Aliquot Sequence of a number
- Quasiperfect & Almost Perfect Numbers
- Sociable Numbers

## Facts about Aliquot Sum
- 1 is the only number whose aliquot sum is 0
- The aliquot sums of perfect numbers is equal to the numbers itself
- For a [*semiprime*](https://en.wikipedia.org/wiki/Semiprime) number of the form $pq$, the aliquot sum is $p + q + 1$
- The Aliquot sum function was one of favorite topics of investigation for the world famous Mathematician, [Paul Erdős](https://en.wikipedia.org/wiki/Paul_Erd%C5%91s) 

## Approach on finding the Aliquot sum

### Step 1: *Obtain the proper divisors of the number*
We loop through all the numbers from $1$ to $[\frac{n} 2]$ and check if they divide $n$, which if they do we add them as a proper divisor.

The reason we take the upper bound as $[\frac{n} 2]$ is that, the largest possible proper divisor of an even number is $\frac{n} 2 $, and if the number is odd, then its largest proper divisor is less than $[\frac{n} 2]$, hence making it a foolproof upper bound which is computationally less intensive than looping from $1$ to $n$.

### Step 2: *Add the proper divisors of the number*
The sum which we obtain is the aliquot sum of the number

## Implementations
- [TheAlgorithms](https://the-algorithms.com/algorithm/aliquot-sum)

## Sources
- [Wikipedia](https://en.wikipedia.org/wiki/Aliquot_sum)
- [GeeksForGeeks](https://www.geeksforgeeks.org/aliquot-sum/)
