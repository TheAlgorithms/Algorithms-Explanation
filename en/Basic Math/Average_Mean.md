# Average (Mean)

Calculate the average of a list of numbers using mean.

## Applications

Calculating the mean of a list of numbers is one of the most common ways to
determine the average of those numbers.

Calculating a mean would be useful in these situations:

-   Determining the average score for all players of a video game level.
-   Finding the average grade for tests that a student took this semester.
-   Determining the average size of all files in a directory/folder.

## Steps

1.  Input a list of numbers.
2.  Calculate the sum of all numbers in the list.
3.  Count the numbers in the list.
4.  Divide the sum by the total count of numbers in the list.
5.  Return mean.

## Example

Given the list `[2, 4, 6, 8, 20, 50, 70]`, let's calculate the average.

### Step 1

Send `[2, 4, 6, 8, 20, 50, 70]` as input for a method/function.

### Step 2

Add all the numbers together.

`2 + 4 + 6 + 8 + 20 + 50 + 70 = 160`, so `sum = 160`.

### Step 3

Count the numbers in the list.

The list has seven numbers, so `count = 7`.

### Step 4

Divide the sum of all the numbers by the count of the numbers.

```
sum = 160
count = 7
```
If we ignore significant digits: `sum / count = `22.<u>857142</u>

If we properly consider significant digits: `sum / count = 23`

### Step 5

Return the value of 22.<u>857142</u> or `23`.

## Implementation

-   [Python](https://github.com/TheAlgorithms/Python/blob/master/maths/average_mean.py)

## Video URL

-   [Mean on Khan Academy](https://www.khanacademy.org/math/ap-statistics/summarizing-quantitative-data-ap/measuring-center-quantitative/v/mean-median-and-mode)

## Others

-   [Mean on Wikipedia](https://en.wikipedia.org/wiki/Mean)
