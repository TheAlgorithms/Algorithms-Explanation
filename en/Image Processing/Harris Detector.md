# Harris Detector

## Problem Statement

Detect corners and edges in a given image.

## Approach

Given image $I$, $n\times n$ size Gaussian Kernel $G_{n\times n}$,

1. Compute the gradients of the image, both horizontal and vertical directions. $X=(-1, 0, 1)\otimes I$, $Y=(-1, 0, 1)^T \otimes I$
2. Compute the matrix $M$, where $A = G_{n\times n} \otimes X^2$, $B=G_{n\times n}\otimes Y^2$, $C=G_{n\times n}\otimes XY$
3. Compute the response function $R$, where $R=AB-C^2-k(A+B)$
4. Classify all points in $R​$.

## Code Implementation Links

- [Python](https://github.com/TheAlgorithms/Python/blob/master/computer_vision/harriscorner.py)

## Reference

C. Harris and M. Stephens, “A Combined Corner and Edge Detector,” in *Proceedings of the Alvey Vision Conference 1988*, Manchester, 1988, pp. 23.1-23.6.
