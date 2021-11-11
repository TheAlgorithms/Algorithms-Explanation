# Tri par insertion

## Description

### Principe

Le principe du tri par insertion est de parcourir la liste de valeurs, en les classant par rapport aux valeurs déjà parcourues.  
On trie la 2ème valeur par rapport à la 1ère, la 3ème par rapport à la 2ème et la 1ème, etc.

### Complexités

Lors de l'évaluation des complexités d'un algorithme de tri, il est nécessaire de prendre en compte non seulement le cas général, mais également le meilleur et le pire cas.

* La complexité spatiale d'un tri par insertion est simple et est constante à travers les cas. Il s'agit de la liste des valeurs, car le tri est effectué directement dans la liste, plus une variable qui servira à retenir la valeur que l'on est en train de trier.
* La complexité temporelle varie beaucoup selon les cas :
  * Dans le pire des cas, la complexité est en $n^2/2$.
  * Dans le meilleur cas, la complexité est seulement de $n$.
  * Finalement, dans le cas général, la complexité est de $n^2/4$

## Étapes

* On commence par comparer la 2ème valeur à la 1ère, et on la place accordement.
* On compare la 3ème valeur avec la 2ème.
  * Soit la 3ème valeur est plus grande, auquel cas on passe à la 4eme.
  * Où alors, elle est plus petite, auquel cas on copie la 2ème valeur à la place de la 3ème, et on compare avec la 1ère.
    * De là, soit la 1ère est plus petite, et on passe à la 4ème valeur.
    * Soit, la 1ère est plus grande, et on copie la 1ère à la place de la 2ème, puis on place la valeur que l'on trie à la place de la 1ère.
* On continue comme cela jusqu'à atteindre la fin de la liste.
(Je vous conseille de regarder la vidéo pour que le principe soit plus clair.)

## Exemple

Dans notre exemple, on va trier la liste $84, 33, 82, 53, 50, 66, 10, 92, 96, 77, 29$

### Exemple en vidéo

![Tri par insertion dans le cas général](../Exemples/.gif/TriInsertionGeneral.gif)

### Conclusion

On obtient à la fin la liste $10, 29, 33, 50, 53, 66, 77, 82, 84, 92, 96$ ce qui est bien notre liste de départ triée.

## Implémentation

* [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/insertion_sort.py)
