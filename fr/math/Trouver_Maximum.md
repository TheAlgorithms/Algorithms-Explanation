# Trouver le Maximum

## Description

### Principe

* L'algorithme est direct : on parcourt toute la liste de nombre et on retient le plus grand nombre rencontré jusqu'à ce point.

### Complexités

* La complexité temporelle est de $n$ (la longueur de la liste).
* Pour la complexité spatiale, nous avons seulement à retenir le plus grand nombre

### Applications

* Un algorithme permettant de trouver le plus grand nombre d'une liste est utile dans presque tous les domaines.

### Auteurs

* À la vue de la très grande utilité et de la simplicité de cet algorithme, de nombreuses personnes l'ont très certainement mis au point en même temps.

## Étapes

* En premier lieu, il faut initialiser le maximum. Pour cela, on dit que le maximum est égale au 1er terme de la liste.
  * Attention ! Il ne faut pas prendre pour 1er maximum 0, car si notre liste est composée uniquement de nombres $< 0$, on ne va pas avoir un maximum correct.
  * Pour la même raison, il ne faut pas comparer les valeurs absolues des nombres.
* Ensuite on compare les nombres. Si le 2ème est plus grand que le maximum, il devient le maximum et ainsi de suite, jusqu'à arriver à la fin de la liste.

## Exemple

Dans notre exemple, on va prendre la liste $-48,0,8,22,0,31,-38,-15,43,14,22,21,44,15,-36,-4,-17, -47,45\\,-5,35,-26,-48,-17,-14,47,-39,41$

### Exemple en vidéo

* [Maximum](../Exemples/math/FindMax.mp4)
