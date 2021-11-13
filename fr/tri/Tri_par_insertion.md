# Tri par insertion

## Description

### Principe

Le principe du tri par insertion est de parcourir la liste de valeurs, en les classant par rapport aux valeurs déjà parcourues.  
On trie la 2ème valeur par rapport à la 1ère, la 3ème par rapport à la 2ème et la 1ème, etc.
Ainsi, lorsque l'on compare la n-ième valeur, toutes les valeurs précédentes sont triées.

### Complexités

Lors de l'évaluation des complexités d'un algorithme de tri, il est nécessaire de prendre en compte non seulement le cas général, mais également le meilleur et le pire cas.
Dans un algorithme de tri, le meilleur cas est celui où la liste est déjà triée, le pire est généralement le cas où la liste est triée "à l'envers" (décroissant si on cherche l'ordre croissant et inversement), le cas général correspond à une liste d'éléments dans le désordre.

* La complexité spatiale d'un tri par insertion est simple et est constante à travers les cas. Il s'agit de la liste des valeurs, car le tri est effectué directement dans la liste, plus une variable qui servira à retenir la valeur que l'on est en train de trier.
* La complexité temporelle varie beaucoup selon les cas :
  * Dans le pire des cas, la complexité est en $n^2/2$.
  * Dans le meilleur cas, la complexité est seulement de $n$.
  * Finalement, dans le cas général, la complexité est de $n^2/4$.
* Cet algorithme de tri a pour seuls avantages la très grande facilité d'implémentation, le peu de place mémoire prise et sa rapidité sur les très petites listes ou les listes "presque triées".

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

Voici dans le cas général :
![Tri par insertion dans le cas général](../Exemples/.gif/TriInsertionGeneral.gif)

Voici dans le meilleur cas :
![Tri par insertion dans le meilleur cas](../Exemples/.gif/TriInsertionMeilleur.gif)

Et voici dans le pire :
![Tri par insertion dans le pire cas](../Exemples/.gif/TriInsertionPire.gif)

## Implémentation

* [Python](https://github.com/TheAlgorithms/Python/blob/master/sorts/insertion_sort.py)

## Pour aller plus loin

* Dans le meilleur cas, nous n'effectuons qu'une unique comparaison. En effet, le terme comparé et plus grand que le terme juste avant, donc aucune modification n'est à effectuer. (ce qui correspond bien à $n$ opérations)
* Dans le pire des cas, on doit au contraire "redescendre" tous les termes un par un. On effectue une opération pour remonter le 2ème terme, deux pour le 3ème, etc. On effectue donc au total $\sum{k=0}{n}{k}$ opération, soit bien un ordre de $N^2/2$ (ou plus précisément $N^2$)
