# BELL NUMBERS

## Number of ways to Partition a Set

Given a set of n elements, find number of ways of partitioning it.
## Examples

 
Input:  n = 2

Output: Number of ways = 2
Explanation: Let the set be 
```
{1, 2} { {1}, {2} } { {1, 2} } 
```

Input: n = 3

Output: Number of ways = 5
Explanation: Let the set be 
```
{1, 2, 3} { {1}, {2}, {3} } { {1}, {2, 3} } { {2}, {1, 3} } { {3}, {1, 2} } { {1, 2, 3} } 
```
### Recommended practice
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




```java
 
import java.io.*;


public class GFG {

    public static void main(String[] args)
    
    {
        
        int n = 5;
        
        int[][] s = new int[n + 1][n + 1];
        
        for (int i = 0; i < n + 1; i++) {
            
            for (int j = 0; j < n + 1; j++) {
                
                if (j > i)
                
                    s[i][j] = 0;
                    
                else if (i == j)
                
                    s[i][j] = 1;
                    
                else if (i == 0 || j == 0)
                
                    s[i][j] = 0;
                    
                else {
                    
                    s[i][j]
                    
                        = j * s[i - 1][j] + s[i - 1][j - 1];
                        
                }
                
            }
            
        }
        
        int ans = 0;
        
        for (int i = 0; i < n + 1; i++) {
            
            ans += s[n][i];
            
        }
        
        System.out.println(ans);
        
    }
   
}
```
Output
 52
 
Time complexity: O(N^2) 

Auxiliary Space: O(N^2) 

### References

- [Bell Number - Wikipedia](https://en.wikipedia.org/wiki/Bell_number)
- [Bell Triangle - Wikipedia](https://en.wikipedia.org/wiki/Bell_triangle)
