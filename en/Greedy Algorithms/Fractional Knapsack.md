# Knapsack Problem (Greedy algorithm)

#### Problem Statement

Given a set of items, each with weight and a value, determine the number of each item included in a collection so that the total weight is less than or equal to the given limit and the total value is as large as possible.

##### Greedy method will always provide an optimal solution with fractional knapsack problem.

#### Time Complexity

O(nlog n) Worst Case     

#### Example

```
Lets assume the capacity of knapsack, W = 60
value = [280, 100, 120, 120]  
weight = [40, 10, 20, 24]

Ratio(V/W) = 7,10,6,5
Say those items as A,B,C,D
next, the items should be sorted in descending order based on the ratio of value by weight to get maximum profit
First and foremost, B was picked since its weight is smaller than the knapsack's capacity. The next item, A, is chosen since the knapsack's available capacity is more than A's weight. C is now the next item on the list. However, the entire item cannot be chosen because the knapsack's remaining capacity is less than C's weight.
As a result, the C proportion (60–50)/20)
The knapsack's capacity is now equal to the specified items.
As a result, no more items can be chosen.

10 + 40 + 20*(10/20) = 60 is the total weight of the chosen goods.

100+280+120*(10/20)=380+60=440 is the total profit.

This is the most suitable option.

We won't be able to make more money by combining diverse things.

```

#### Code Implementation Links

- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/greedy_algorithms/knapsack.cpp)
- [Python](https://github.com/TheAlgorithms/Python/tree/master/knapsack)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/tree/master/Algorithms/Knapsack)

#### Video Explanation

[A CS50 video explaining the Greedy Algorithm](https://www.youtube.com/watch?v=Ou9OA0yQCYA)
