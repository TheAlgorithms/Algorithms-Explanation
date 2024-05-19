# Ceil

The ceiling function is a mathematical function which rounds a given real number $x \in \mathbb{R}$ up to the nearest integer. It is commonly referred to as the `ceil` function. We can also restate the function to say that `ceil(x)` gives us the smallest integer greater than $x$.

So, if $x \in \mathbb{Z}$ is an integer, then `ceil(x)` returns $x$. However, if the number has any decimnal component, it will round up to the next integer, regardless of the magnitude of the decimal part.  

For positive numbers $x \in \mathbb{R}^{+}$, `ceil(x)` rounds up to the next integer. So, for example, `ceil(6.9)` returns `7`.  

For negative numbers $x \in \mathbb{R}^{-}$, `ceil(x)` rounds up towards zero, just like for positive numbers. This does mean that the absolute value of `ceil(x)` is less than that of $x$. So, for example, `ceil(-6.9)` returns `-6`, as $-6 > -6.9$.  

## Idea and Implementation

For **languages which have separate integer and floating types** (C, C++, Java, Python, Rust, Zig), the `ceil` function takes in a floating point number `x` and returns the integer, which is the result of `ceil(x)`.

When the floating point number `x` is typecasted into an integer, the digits after the decimal points are cut off without rounding. So, on typecasting `x` into an integer, we get just the integer part and the fractional part is disregarded. So, `int(6.9)` gives us `6` and `int(-6.9)` gives us`-6`. In the case where `x` is negative or zero, that actually is enough for us, as that is the value of `ceil(x)` as well! And as for when `x` is positive, `int(x)` is actually 1 less than `ceil(x)`, and we can just define add one to `int(x)` to get the value of `ceil(x)`. So the pseudocode for the same is as stated below.

```py
function ceil(x: float)
    if x > 0
        return int(x) + 1
    else
        return int(x)
end
```

In the meanwhile, for **languages which just have one single type for real numbers** (JavaScript), the `ceil` function takes in a number `x` and needs to return a number which is the output of the mathematical function `ceil(x)`. This can be implemented by either using the truncation functions provided natively by the language, which would follow the previous implementation by replacing typecasting with truncation.

Otherwise, another implementation which can be taken is by getting the decimal part by using x (modulo 1), i.e., `x % 1`, which will return the digits after the decimal point for `x` (when `x` is positive or zero), which can be expressed as `x - (ceil(x) - 1)` and will return `x - ceil(x)` (when `x` is negative). The former expression can be understood by the fact that `ceil(x) - 1` returns the integral part of `x` for positive values of `x` and when subtracting that from `x`, we get the digits after the decimal point of `x`, which is what `x % 1` returns. The latter expression can be understood by the fact that for negative values of `x`, `ceil(x)` returns the integral part of `x` after truncating of the digits after decimal point. Hence, we get the digits after the decimal point after subtracting `ceil(x)` from `x`.

So, now we can evaluate `ceil(x)` to be equal to `x + 1 - (x % 1)` for positive and zero values of `x` and `x - (x % 1)` for negative values of `x`.

```js
function ceil(x)
    if x >= 0
        return x + 1 - (x % 1)
    else
        return x - (x % 1)
end
```
## Walkthrough

Let us walk through how the algorithm works for positive and negative numbers by using the numbers $x_1 = 6.9$ and $x_2 = -4.2$.

For the first implementation:

* $x_1$ is positive, and we get $int(x_1)$ to be $6$. And going by the algorithm, we are returned $6 + 1 = 7$, which is the correct output.
* $x_2$ is negative, and we get $int(x_2)$ to be $-4$. And going by the algorithm, we are returned $-4$, which is the correct output.

For the second implementation:

* $x_1$ is positive. So `x % 1` gives us `0.9`. Thus `x + 1 - (x % 1)` gives us `6.9 + 1 - 0.9` which is `7`, which is the correct output.
* $x_2$ is negative. So `x % 1` gives us `-0.2`. Thus `x - (x % 1)` evaluates to `-4.2 - (-0.2)`, which is `-4`, which is the correct output.

## Applications

* Quadratic reciprocity
* Rounding of numbers

## Resources

* [Wikipedia Article](https://www.wikiwand.com/en/Ceil)