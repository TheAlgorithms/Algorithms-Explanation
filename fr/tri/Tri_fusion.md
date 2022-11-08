# Tri Fusion

## Description

### Principe
Le tri fusion, aussi appelé "tri dichotomique" est un Algorithme de tri Stable, qui est basé sur la technique "diviser pour régner".

### Complexités

#### Complexités spatiale

La complexité spatiale de l'algorithme est de `O(n)`

#### Complexités temporelle

- meilleur cas : `O(n log n)`
- cas moyens : `O(n log n)`
- pire cas : `O(n log n)`

## Étapes

- Trouvez le milieu du tableau et divisez le en deux moitiés en fonction du milieu.
- Appeler récursivement la fonction de tri fusion pour les deux moitiés
- Fusionnez les deux moitiés triées pour obtenir le tableau trié.

## Exemple

```txt
tab = [1, 9, 2, 5, 7, 3, 6, 4]

Divisez le tableau en deux moitiés [1, 9, 2, 5] et [7, 3, 6, 4]

Les deux moitiés ci-dessus ne sont pas encore triées, donc nous devons les diviser à nouveau en deux moitiés.

Cette fois, nous obtenons quatre tableaux : [1, 9], [2, 5], [7, 3] et [6, 4].

les deux derniers tableaux ne sont toujours pas triés, donc nous les divisons à nouveau en deux moitiés et nous obtenons [7], [3], [6], and [4].

Puisqu'un tableau d'un seul élément est trié, nous avons maintenant tous les tableaux triés, il ne nous reste plus qu'à les fusionner de manière appropriée.

D'abord, les tableaux d'un seul élément seront fusionnés vu qu'ils ont été divisés en dernier, et sont au sommet de la pile de récursion, donc nous obtenons [3,7] et [4,6].

Puis la fusion va se produire conformément à la pile de récurrence, [1, 9] et [2, 5] seront fusionnés et donneront [1, 2, 5, 9].

De même, [3, 7] et [4, 6] seront fusionnés et donneront [3, 4, 6, 7].

Au niveau suivant de la pile, [1, 2, 5, 9] et [3, 4, 6, 7] seront fusionnés et nous obtiendrons le tableau trié final comme [1, 2, 3, 4, 5, 6, 7, 9].
```

## Implémentation

- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/merge_sort.py)
- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/MergeSort.java)
- [C](https://github.com/TheAlgorithms/C/blob/master/sorting/merge_sort.c)
- [C++](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/merge_sort.cpp)
- [C-Sharp](https://github.com/TheAlgorithms/C-Sharp/blob/master/Algorithms/Sorters/Comparison/MergeSorter.cs)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/sorting/merge_sort.rb)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/mergesort.go)
- [JavaScript](https://github.com/TheAlgorithms/JavaScript/blob/master/Sorts/MergeSort.js)