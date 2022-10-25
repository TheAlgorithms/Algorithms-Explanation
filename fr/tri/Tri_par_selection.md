# Tri par Selection

## Description

### Principe

Le tri par sélection est un algorithme de tri par comparaison, qui malgres sa simplicité est en generale considerer comme ineficasse de fait de sa complexité.

### Complexités

#### Complexités spatiale

- `O(1)`

#### Complexité temporelle

- Pire, moyens et meilleur cas :  `O(n^2)`

## Étapes

- Sélectionner le plus petit élément du tableau
- Le permuter avec le premier élément du tableau
- Puis sélectionner le plus petit élément du tableau dans la liste non triée restante
- Le permuter avec le premier élément du tableau dans la liste non triée restante
- Continuez à faire cela pour chaque élément du tableau

## Exemple

```txt

tab[] = {80, 10, 40, 30}
Indexes : 0   1   2   3

1. Index = 0
	Sélectionnez le nombre minimum dans le tableau et son index (index entre 0-3), (la plus petite valeur est 10, et l'index est 1)
2. Permuter les indexe 1 et 0 (valeurs 10 et 80)
3. La nouvelle valeur du tableau est : {10, 80, 40, 30}

4. Index = 1
	Sélectionnez le nombre minimum dans le tableau et son index (index entre 1-3), (la plus petite valeur est 30, et l'index est 3)
5. Permuter les indexe 3 et 1 (valeurs 30 et 80)
6. La nouvelle valeur du tableau est : {10, 30, 40, 80}

7. Index = 2
	Sélectionnez le nombre minimum dans le tableau et son index (index entre 2-3), (la plus petite valeur est 40, et l'index est 2)
8. Permuter les indexe 2 et 2 (valeurs 40 et 40)
9. La nouvelle valeur du tableau est : {10, 30, 40, 80}

Le Tableau est maintenant trié.
```

## Implémentation

- [Java](https://github.com/TheAlgorithms/Java/blob/master/src/main/java/com/thealgorithms/sorts/SelectionSort.java)
- [C++ Iterative](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/selection_sort_iterative.cpp)
- [C++ Recursive](https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/sorting/selection_sort_recursive.cpp)
- [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/selection_sort.py)
- [Go](https://github.com/TheAlgorithms/Go/blob/master/sort/selectionsort.go)
- [Ruby](https://github.com/TheAlgorithms/Ruby/blob/master/Sorting/selection_sort.rb)
- [C iterative](https://github.com/TheAlgorithms/C/blob/master/sorting/selection_sort.c)
- [C recursive](https://github.com/TheAlgorithms/C/blob/master/sorting/selection_sort_recursive.c)
- [Scala](https://github.com/TheAlgorithms/Scala/blob/master/src/main/scala/Sort/SelectionSort.scala)
- [TypeScript](https://github.com/TheAlgorithms/Javascript/blob/master/Sorts/selectionSort.js)