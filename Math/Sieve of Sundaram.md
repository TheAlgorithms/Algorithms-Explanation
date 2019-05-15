# Sieve of Sundaram

The Sieve of Sundaram is a simple algorithm for finding all prime numbers up to a specified integer.
Discovered by Indian mathematician S. P. Sundaram.
It uses simple fact - every prime number can't be representable in the form `2*q+1` where `q=i+j+2*i*j`.

## Steps

Algorithm can be described in three simple steps.

1. For given integer `n` find all integers up to `n/2` representable in the form `i+j+2*i*j`, where `1<=i,j and i<=j`.
2. Remove Sundaram numbers from the list.
3. Remaining numbers multiply by 2 and increment by 1.

## Example

Let's trace the algorithm for `n=51`.
First we find integers up 25 which can be 
represented in the form `i+j+2*i*j`. 

    i=1, j=1: q - 4, 7, 10, 13, 16, 19, 22, 25
    i=2, j=2: q - 12, 17, 22
    i=3, j=3: q - 24

In each row `i` is fixed and `j` incremented by 1.    

Next remove Sundaram numbers from integers up to 25.
Result - 

    1, 2, 3, 5, 6, 8, 9,
    11, 14, 15, 18, 20, 21, 23.

Last step - multiply by 2 and add 1.

    3, 5, 7, 11, 13, 17, 19,
    23, 29, 31, 37, 41, 43, 47.

Don't forget add 2 to the list. Done!

## Implementation

## Video URL

[Sieve of Sundaram](https://www.youtube.com/watch?v=bKUhtvNrfuQ)

## Links

[Sieve of Sundaram](https://en.wikipedia.org/wiki/Sieve_of_Sundaram)
