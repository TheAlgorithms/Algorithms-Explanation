# Stalin Sort

#### Problem Statement

Given an unsorted array of `n` elements, write a function to sort the array.

#### Approach

- Iterate though list checking if items are in order.
- Any item out of order is eliminated

#### Time Complexity

`O(n)`

#### Space Complexity

`O(n)`

#### Founder's Name

- Unknown

#### Example

```
def stalin_sort(collection: list) -> list:
    if collection == []:
        return []
    largest = collection[0]
    removed = 0
    for i in range(len(collection)):
        if collection[i - removed] < largest:
            collection.pop(i - removed)
            removed += 1
        else:
            largest = collection[i - removed]
    return collection    
```

#### Code Implementation Links

- [C](https://github.com/gustavo-depaula/stalin-sort/blob/master/C/stalin-sort.c)
- [C++](https://github.com/gustavo-depaula/stalin-sort/blob/master/C%2B%2B/simple_stalin_sort.cpp)
- [JavaScript](https://github.com/gustavo-depaula/stalin-sort/blob/master/javascript/stalin-sort.js)
- [Matlab](https://github.com/gustavo-depaula/stalin-sort/blob/master/MATLAB/stalin_sort.m)
- [Python](https://github.com/gustavo-depaula/stalin-sort/blob/master/python/stalin_sort.py)
- [Rust](https://github.com/gustavo-depaula/stalin-sort/blob/master/rust/main.rs)
- [Collection](https://github.com/gustavo-depaula/stalin-sort)

#### Video Explanation

[A lego stop motion video the Counting Sort Algorithm](https://www.youtube.com/watch?v=O-hacoCpZr0)