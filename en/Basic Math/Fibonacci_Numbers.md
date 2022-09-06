# Calculating Fibonacci numbers

In mathematics, the Fibonacci numbers commonly denoted F(n), form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.  The Sequence looks like this:

`[0, 1, 1, 2, 3, 5, 8, 13, 21, 34,  ...]`

## Applications

Finding
```N-th``` member of this sequence would be useful in many Applications:

-   Recently Fibonacci sequence and the golden ratio are of great interest to researchers in many fields of
science including high energy physics, quantum mechanics, Cryptography and Coding.

## Steps

1.  Prepare Base Matrice
2.  Calculate the power of this Matrice
3.  Take Corresponding value from Matrix

## Example

Find ```8-th``` member of Fibonacci

### Step 0
 ```
| F(n+1)  F(n)  |
| F(n)    F(n-1)|
```

### Step 1
 ```
 Calculate matrix^1
| 1 1 |
| 1 0 |
```
### Step 2
```
Calculate matrix^2
| 2 1 |
| 1 1 |
```
### Step 3
```
Calculate matrix^4
| 5 3 |
| 3 2 |
```
### Step 4
```
Calculate matrix^8
| 34 21 |
| 21 13 |
```
### Step 5
F(8)=21

## Implementation

- [C](https://github.com/TheAlgorithms/C/blob/master/misc/fibonacci.c)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/math/fibonacci.cpp)
- [Elixir](https://github.com/TheAlgorithms/Elixir/blob/master/lib/dynamic_programming/fibonacci.ex)
- [F#](https://github.com/TheAlgorithms/F-Sharp/blob/main/Algorithms/Math/Fibonacci.fs)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/dynamic/fibonacci.go)
- [Haskell](https://github.com/TheAlgorithms/Haskell/blob/master/src/Maths/Fibonacci.hs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/maths/FibonacciNumber.java)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Maths/Fibonacci.js)
- [PHP](https://github.com/TheAlgorithms/PHP/blob/master/Maths/Fibonacci.php)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/maths/fibonacci.py)
- [R](https://github.com/TheAlgorithms/R/blob/master/Mathematics/Fibonacci.R)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/maths/fibonacci.rb)
- [Rust](https://github.com/TheAlgorithms/Rust/blob/master/src/dynamic_programming/fibonacci.rs)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Mathematics/Fibonacci.scala)
- [Swift](https://github.com/TheAlgorithms/Swift/blob/master/recursion/fibonacci.swift)

## Video URL

- [Youtube](https://www.youtube.com/watch?v=EEb6JP3NXBI)

## Others

- [Proof](https://brilliant.org/wiki/fast-fibonacci-transform/)
