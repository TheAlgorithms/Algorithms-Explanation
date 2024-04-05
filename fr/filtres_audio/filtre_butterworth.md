# Le filtre Butterworth

## Description

### Principe

* Le filtre de Butterworth est originellement un filtre passe-bas, et c'est le filtre le plus utilisé du fait de son gain extrêmement plat dans la zone passe-bande.  
* L'avantage d'un tel filtre est d'amplifier toutes les fréquences voulues de façon uniforme, au lieu d'amplifier certaines fréquences plus que d'autre comme le faisaient les filtres en usage avant sa découverte (les filtres [elliptiques](https://fr.wikipedia.org/wiki/Filtre_elliptique) et [de Tchebychev](https://fr.wikipedia.org/wiki/Filtre_de_Tchebychev)).
* De plus, Butterworth a prouvé que le filtre passe-bas pouvait être modifié facilement afin de donner des filtres passe-haut, passe-bande ou coupe-bande.
* La fonction de transfert d'un filtre de Butterworth passe-bas d'ordre $n$ dans le domaine fréquentielle est :
$$\tag{avec $p_k=\omega_ce^{\frac{j(2k+n-1)\pi}{2n}}$}H(p) = \frac{G_0}{\prod^n_{k=1}(p-p_k)/\omega_c}$$

### Complexités

* Considérant qu'il s'agit simplement d'une formule à appliquer, les complexités temporelle et spatiale de l'algorithme est très faible.

### Applications

* Les filtres sont utilisés dans tous les domaines faisant du traitement de signal, que ce soit dans le domaine de la radio-communication où celui du traitement d'images.
* En associant par exemple dans un circuit éléctronique un filtre passe-bande et un amplificateur opérationnel, il est possible de créer un générateur d'onde sinusoïdale.

### L'auteur

* Stephen Butterworth est un ingénieur britannique et il décrit ce type de filtre en 1930 dans son livre 'Traité sur la théorie des filtres'.

## Étapes

* On commence par calculer les différents coefficients pour le filtre.
* On applique ces coefficients à un filtre IIR.
