# Tri à bulles

## Description

### Principe

Le principe du tri à bulles est de comparer répétitivement les éléments consécutifs d'un tableau deux à deux, et de les permuter lorsque ces derniers sont mal trié.

### Complexités

#### Complexités temporelle

- Dans le pire des cas, lorsque le plus petit élément est à la fin du tableau, la complexité est de `O(n^2)`
- Dans le meilleur cas, lorsque le tableau est déjà trié, la complexité est de `O(n)` (on n'effectue qu’une seule itération de l'algorithme)
- En moyenne, la complexité est de `O(n^2)`


## Étapes

- Sélectionner le premier élément du tableau
- Le comparer avec l'élément suivant
  - Si la valeur du premier élément est plus grande que celle du deuxième, permuter ces derniers.
  - Sinon, ne rien faire
- Continuez à faire cela pour chaque index du tableau.
- Répétez les étapes précédentes n fois.

## Exemple

```txt
tab[] = {10, 80, 40, 30}
Indexes: 0   1   2   3

1. Index = 0, Valeur = 10
2. 10 < 80, ne rien faire et continuer

3. Index = 1, Valeur = 80
4. 80 > 40, permuter 80 et 40
5. Les nouvelles valeurs du tableau sont : {10, 40, 80, 30}

6. Index = 2, Valeur = 80
7. 80 > 30, permuter 80 et 30
8. Les nouvelles valeurs du tableau sont : {10, 40, 30, 80}

Répétez les étapes précédentes

tab[] = {10, 40, 30, 80}
Indexes: 0   1   2   3

1. Index = 0, Valeur = 10
2. 10 < 40, ne rien faire et continuer

3. Index = 1, Valeur = 40
4. 40 > 30, permuter 40 et 30
5. Les nouvelles valeurs du tableau sont : {10, 30, 40, 80}

6. Index = 2, Valeur = 40
7. 40 < 80, ne rien faire
8. Les nouvelles valeurs du tableau sont : {10, 30, 40, 80}

Répétez les étapes précédentes

tab[] = {10, 30, 40, 80}
Indexes: 0   1   2   3

1. Index = 0, Valeur = 10
2. 10 < 30, ne rien faire et continuer

3. Index = 1, Valeur = 30
4. 30 < 40, ne rien faire et continuer

5. Index = 2, Valeur = 40
6. 40 < 80, ne rien faire

Puisqu'il n'y a pas de permutations dans les étapes précédentes, cela signifie que le tableau est trié et que nous pouvons nous arrêter ici.
```

## Implémentations

- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/bubble_sort.py)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/bubble_sort.c)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/bubble_sort.cpp)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/BubbleSorter.cs)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/BubbleSort.java)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sorts/bubblesort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/bubble_sort.rb)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/BubbleSort.scala)
- [JavaScript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/BubbleSort.js)