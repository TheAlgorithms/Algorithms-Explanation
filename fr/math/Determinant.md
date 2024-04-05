# Déterminant

## Description

### Principe

* Calculer le déterminant d'une matrice permet de savoir si elle est inversible ou non.  
* Avoir cette information en elle-même ne sert pas à grand-chose, mais si cette matrice représente (par exemple) un système d'équation, cela permet de savoir si ce système possède une solution.

### Complexités

* L'algorithme possède une complexité temporelle de l'ordre de $n!$ (À vérifier).  
* On utilise une fonction récursive, ce qui est gourmand en termes de mémoire.

### Applications

* Trouver le déterminant d'une matrice permet de savoir si on peut utiliser la méthode du pivot de Gauss ou pas.

## Étapes

* Puisque le déterminant n'est défini que pour les matrices carrées, il faut d'abord vérifier que la matrice est carré.
* Ensuite, nous développons la matrice par rapport à la première ligne.
* On répète ces étapes à la matrice ainsi développer jusqu'à tomber sur une matrice 2×2, où on applique la formule connue $\bigg(\begin{vmatrix}a&b\\c&d\end{vmatrix}=ad-cb\bigg)$.
* De là, on remonte la cascade d'appel en effectuant les calculs.

## Exemple

Calculons le déterminant de la matrice $\begin{bmatrix}1&2&3\\4&5&6\\7&8&9\end{bmatrix}$.

### Exemple en vidéo

* [Déterminant](../Exemples/math/Determinant.mp4)

### Conclusion

Le déterminant de $\begin{bmatrix}1&2&3\\4&5&6\\7&8&9\end{bmatrix}$ est $0$.
