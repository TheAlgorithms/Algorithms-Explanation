# Heap Sort

#### Problem Statement

Given an unsorted array of n elements, write a function to sort the array

#### Approach

- Obtain the array of input elements.
- Visualize the elements of the array as though in a tree.
- root = first element in the array
- parent(i) = i/2
- left(i) = 2*i
- right(i) = 2*i + 1

                 a[0]
                /    \
            a[1]      a[2]
            /  \      /   \
        a[3]   a[4]  a[5]  a[6]

- Max-heap property: key of node >= key of children
- Min-heap property: key of node <= key of children

#### Time Complexity

O(n log n) Worst case performance

\Omega (n log n) Best-case performance

\Theta (n log n) Average performance

#### Space Complexity

O(1) Worst case

#### Founder's Name

- J. W. J. Williams

#### Algorithms

1. ***MAX HEAPIFY***


```
l = left(i)
r = right(i)

if (l <= heap-size(A) and A[l] > A[i])
    then largest = l else largest = i
if (r <= heap-size(A) and A[r] > A[largest])
    then largest = r
if largest == i
    then exchange A[i] and A[largest]

 Max_Heapify(A, largest)
```
2. ***BUILD MAX HEAP***

```
for i=n/2 downto 1
    do Max_Heapify(A, i)
```
3. ***HEAP SORT***

```
I. Build Max Heap from unordered array;
II. Find maximum element A[1];
III. Swap elements A[n] and A[1]:
    now max element is at the end of the array!
IV. Discard node n from heap
    (by decrementing heap-size variable)
V. New root may violate max heap property, but its
children are max heaps. Run max_heapify to fix this.
VI. Go to Step 2 unless heap is empty.
```

#### Code Implementation Links

- [Java](https://github.com/TheAlgorithms/Implementation/Java/HeapSort.java)
- [C++](https://github.com/TheAlgorithms/Implementation/C++/HeapSort.cpp)
- [Python](https://github.com/TheAlgorithms/Implementation/Python/HeapSort.py)


#### Video Explanation

This is a lecture at MIT OCW.
[Lecture 4: Heaps and Heap Sort](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/lecture-4-heaps-and-heap-sort/)
