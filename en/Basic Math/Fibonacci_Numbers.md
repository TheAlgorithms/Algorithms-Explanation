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

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/math/fibonacci.cpp)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/Maths/FibonacciNumber.java)
- [Javascript](https://github.com/TheAlgorithms/Javascript/blob/80c2dc85d714f73783f133964d6acd9b5625ddd9/Maths/Fibonacci.js)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/maths/fibonacci.py)

## Video URL

- [Youtube](https://www.youtube.com/watch?v=EEb6JP3NXBI)

## Others

- [Proof](https://brilliant.org/wiki/fast-fibonacci-transform/)
