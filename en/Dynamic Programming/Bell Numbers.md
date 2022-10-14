<h2> <u><b>BELL NUMBERS</u>: Number of ways to Partition a Set</h2></b>
<br>
Given a set of n elements, find number of ways of partitioning it. 
<br>
<b> Examples: </b>
 
<b>Input:</b>  n = 2
<br>
<b>Output:</b> Number of ways = 2
<br>
<b>Explanation:</b> Let the set be {1, 2}
            { {1}, {2} } 
            { {1, 2} }

<b>Input: </b> n = 3
<br>
<b>Output:</b> Number of ways = 5
<br>
<b>Explanation:</b> Let the set be {1, 2, 3}
             { {1}, {2}, {3} }
             { {1}, {2, 3} }
             { {2}, {1, 3} }
             { {3}, {1, 2} }
             { {1, 2, 3} }. 
             <br>
             <br>
<b>Recommended practice</b>

Solution to above questions is Bell Number. 
What is a Bell Number? 
Let S(n, k) be total number of partitions of n elements into k sets. The value of n’th Bell Number is sum of S(n, k) for k = 1 to n. 
Bell(n) = \sum_{k=1}^{n}S(n,k)                 
Value of S(n, k) can be defined recursively as, S(n+1, k) = k*S(n, k) + S(n, k-1)
How does above recursive formula work? 
When we add a (n+1)’th element to k partitions, there are two possibilities. 
1) It is added as a single element set to existing partitions, i.e, S(n, k-1) 
2) It is added to all sets of every partition, i.e., k*S(n, k)
S(n, k) is called Stirling numbers of the second kind
First few Bell numbers are 1, 1, 2, 5, 15, 52, 203, …. 
A Simple Method to compute n’th Bell Number is to one by one compute S(n, k) for k = 1 to n and return sum of all computed values. Refer this for computation of S(n, k).
Below is Dynamic Programming based implementation of the above recursive code using the Stirling number-



// Java program to find number of ways of partitioning it.
<br>
 
import java.io.*;
<br>
// "static void main" must be defined in a public class.
<br>
public class GFG {\
<br>
    public static void main(String[] args)
    <br>
    {
        <br>
        int n = 5;
        <br>
        int[][] s = new int[n + 1][n + 1];
        <br>
        for (int i = 0; i < n + 1; i++) {
            <br>
            for (int j = 0; j < n + 1; j++) {
                <br>
                if (j > i)
                <br>
                    s[i][j] = 0;
                    <br>
                else if (i == j)
                <br>
                    s[i][j] = 1;
                    <br>
                else if (i == 0 || j == 0)
                <br>
                    s[i][j] = 0;
                    <br>
                else {
                    <br>
                    s[i][j]
                    <br>
                        = j * s[i - 1][j] + s[i - 1][j - 1];
                        <br>
                }
                <br>
            }
            <br>
        }
        <br>
        int ans = 0;
        <br>
        for (int i = 0; i < n + 1; i++) {
            <br>
            ans += s[n][i];
            <br>
        }
        <br>
        System.out.println(ans);
        <br>
    }
    <br>
}
<br>
 
<b>Output</b><br>
52<br>
Time complexity: O(N2) 
<br>
Auxiliary Space: O(N2) 


<b>Reference:</b> <br>
https://en.wikipedia.org/wiki/Bell_number 
<br>
https://en.wikipedia.org/wiki/Bell_triangle