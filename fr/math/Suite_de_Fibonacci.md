# La suite de Fibonacci

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
De nombreux algorithmes existent pour calculer les nombres de la suite, mais nous allons ici nous intéresser à l'implémentation la plus directe.

### Complexités

* L'algorithme possède une complexité temporelle de l'ordre de $n$.  
* La complexité spatiale est extrêmement faible car nous ne stockons que les 2 derniers termes.

## Étapes

* La première étape consiste à calculer $F(2)$ à partir de $F(1)$ et F(0)$.
* La deuxième, à calculer $F(3)$ à partir de $F(2)$ et F(1)$.
* Et ainsi de suite jusqu'à $F(n)$.

## Exemple

Dans notre exemple nous cherchons à calculer F(6), le 7ème terme de la suite.

### Exemple en vidéo

* [Fibonacci normal](../Exemples/math/FibonacciNormal.mp4)

### Conclusion

On a donc $F(6) = 8$
