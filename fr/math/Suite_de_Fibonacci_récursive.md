# La suite de Fibonacci récursive

## Description

### Principe

* La suite de Fibonacci est définie mathématiquement de la sorte :
$$
\begin{cases}
F(0) = 0\\
F(1) = 1\\
\forall n \in \natnums / n \ge 2, F(n) = F(n-2) + F(n-1)
\end{cases}
$$
* Cela signifie que chaque terme est la somme des deux termes précédents, en ayant pour termes de départ 0 et 1.  
La suite ressemble à ceci :
$$0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, \ldots$$
\
De nombreux algorithmes existent pour calculer les nombres de la suite, mais nous allons ici nous intéresser à l'implémentation la plus immédiate/directe, celle qui est récursive.

### Complexités

* Cet algorithme n'est pas optimal et prends beaucoup de place et de temps à se terminer.  
Plus précisement, la complexité temporelle de ce programme est $\phi^n$ ($\phi$ étant le nombre d'or), et sa complexité spatiale est $2^n$.

## Étapes

* La première étape consiste à appeler $F(n-2)$ et $F(n-1)$.
* La deuxième consite à appeler $F(n-4)$ et $F(n-3)$ (venant de $F(n-2)$) ainsi que $F(n-3)$ et $F(n-2)$ (venant de $F(n-1)$).
* Ainsi de suite, jusqu'à appeler $F(1)$ ou $F(0)$, où on peut commencer à remonter la cascade d'appel et à additionner les termes.
* On obtient à la fin $F(n)$.

## Exemple

Dans notre exemple nous cherchons à calculer $F(4)$, le 5ème terme de la suite.

### Exemple en vidéo

* [Fibonacci récursif](../Exemples/math/FibonacciRecursif.mp4)

### Conclusion

On a donc $F(4) = 3$
