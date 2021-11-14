# Trouver le Maximum

## Description

### Principe

* L'algorithme est direct : on parcourt toute la liste de nombre et on retient le plus petit nombre rencontré jusqu'à ce point.

### Complexités

* La complexité temporelle est de $n$ (la longueur de la liste).
* Pour la complexité spatiale, nous avons seulement à retenir le plus grand nombre

### Applications

* Un algorithme permettant de trouver le plus petit nombre d'une liste est utile dans presque tous les domaines.

### Auteurs

* À là vue de la très grande utilité et de la simplicité de cet algorithme, de nombreuses personnes l'ont très certainement mis au point en même temps.

## Étapes

* La première étape est d'initialiser le minimum. Pour cela, on dit qu'il est égale au 1er terme de la liste.
  * Attention ! Il ne faut pas prendre pour 1er minimum 0, car si notre liste est composée uniquement de nombres $> 0$, on ne va pas avoir un minimum correct.
  * Pour la même raison, il ne faut pas comparer les valeurs absolues des nombres.
* Ensuite on compare les nombres. Si le 2ème est plus grand que le minimum, il devient le minimum et ainsi de suite, jusqu'à arriver à la fin de la liste.

## Exemple

Dans notre exemple, on va prendre la liste $16,6,2,-14,43,-28,-35,20,-23,25,9,38,17,43,-44,-16,-16,39,\\-4,4,2,-42,11,-13,30,-47,7,-10$

### Exemple en vidéo

* [Minimum](../Exemples/math/FindMin.mp4)
