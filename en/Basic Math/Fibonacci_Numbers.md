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

- [Python](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=python)
- [Javascript](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=javascript)
- [C++](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=c-plus-plus)
- [Java](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=java)
- [C](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=c)
- [Haskell](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=haskell)
- [F#](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=f-sharp)
- [Go](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=go)
- [Rust](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=rust)
- [Ruby](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=ruby)
- [php](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=php)
- [Elixir](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=elixir)
- [Scala](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=scala)
- [Swift](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=swift)
- [Julia](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=julia)
- [Typescript](https://the-algorithms.com/de/algorithm/fibonacci-numbers?lang=typescript)

## Video URL

- [Youtube](https://www.youtube.com/watch?v=EEb6JP3NXBI)

## Others

- [Proof](https://brilliant.org/wiki/fast-fibonacci-transform/)
