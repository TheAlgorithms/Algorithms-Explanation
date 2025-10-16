# Coin Change – Minimum Coins

## Problem

Given a total amount `N` and a set of coins `S = {S₁, S₂, …, Sₘ}`, find the **minimum number of coins** required to make the amount `N`.
If the amount cannot be made with the given coins, return `-1`.

---

## Idea

This is a variation of the **Unbounded Knapsack Problem**, where we have an infinite supply of each coin.
The goal is to determine the smallest number of coins needed to sum to `N`.

We define an array `minCoin[]`, where each element `minCoin[i]` stores the minimum number of coins required to make a total of `i`.
The base case is `minCoin[0] = 0`.

For every amount from `1` to `N`, and for each coin `c` in the set `S`, the relation is given by:

```
minCoin[i] = min( minCoin[i], 1 + minCoin[i - c] )
```

where `minCoin[i - c]` is the minimum number of coins required for the remaining amount.

---

## Implementation

A straightforward C++ implementation might look as follows:

```cpp
#include <iostream>
#include <limits.h>
using namespace std;

int myMin(int a, int b) {
    return (a < b) ? a : b;
}

int coinChange(int coins[], int amount) {
    if (amount < 1)
        return 0;

    int *minCoin = new int[amount + 1];
    minCoin[0] = 0;

    for (int i = 1; i <= amount; i++) {
        minCoin[i] = INT_MAX;
        for (int j = 0; j < 3; j++) {
            if (coins[j] <= i && minCoin[i - coins[j]] != INT_MAX) {
                minCoin[i] = myMin(minCoin[i], minCoin[i - coins[j]] + 1);
            }
        }
    }

    int result = (minCoin[amount] == INT_MAX) ? -1 : minCoin[amount];
    delete[] minCoin;
    return result;
}

int main() {
    int coins[3] = {1, 2, 5};
    int amount = 11;

    int result = coinChange(coins, amount);
    cout << "The minimum number of coins used: " << result << endl;

    return 0;
}
```

Note that `INT_MAX` is used to represent an unreachable amount during computation.

---

## Analysis

### Space Complexity

`O(N)` — only one array of size `amount + 1` is required.

### Time Complexity

`O(N × M)` — for each amount up to `N`, we iterate through all `M` available coin denominations.

---

## Walkthrough

Finding the minimum number of coins for
`coins = [1, 2, 5]` and `amount = 11`:

| Amount | Coin Used | Remainder | Minimum Coins | Explanation      |
| :----: | :-------- | :-------- | :------------ | :--------------- |
|    1   | 1         | 0         | 1             | Using one 1-coin |
|    2   | 2         | 0         | 1             | Using one 2-coin |
|    3   | 1         | 2         | 2             | 1 + 2            |
|    4   | 2         | 2         | 2             | 2 + 2            |
|    5   | 5         | 0         | 1             | Using one 5-coin |
|    6   | 5         | 1         | 2             | 5 + 1            |
|    7   | 5         | 2         | 2             | 5 + 2            |
|    8   | 5         | 3         | 3             | 5 + 3            |
|    9   | 5         | 4         | 3             | 5 + 4            |
|   10   | 5         | 5         | 2             | 5 + 5            |
|   11   | 5         | 6         | 3             | 5 + 5 + 1        |

The result is:

```
minCoin[11] = 3
```

Thus, the minimum number of coins required to make `11` is **3**, using coins `{5, 5, 1}`.

---

## Applications

* Currency exchange and change-making systems
* Resource optimization problems
* Variants of the subset-sum and knapsack problems
* Payment gateway and vending machine algorithms

---

## Resources

* [GeeksforGeeks – Minimum Coins to Make Change](https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/)
* [YouTube – Coin Change (Minimum Coins) by Tushar Roy](https://youtu.be/NNcN5X1wsaw?si=UHED-voB4f3viOgT)

---

