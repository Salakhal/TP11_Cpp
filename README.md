# TP11 :

## Exercice 1 : Formes géométriques

## Objectif
Implémenter une hiérarchie de formes géométriques avec une méthode virtuelle pure `aire()`.

## Fichiers
- `Forme.h` : Classe abstraite `Forme` avec méthode pure `double aire() const`.
- `Cercle.h` / `Cercle.cpp` : Classe dérivée `Cercle` avec attribut `rayon`.
- `Rectangle.h` / `Rectangle.cpp` : Classe dérivée `Rectangle` avec attributs `longueur` et `largeur`.
- `main.cpp` : Programme principal pour créer les formes, stocker dans un tableau de pointeurs et afficher les aires.

## Exemple de sortie

```
Combien de formes voulez-vous créer ? 2
Forme #1 (1=Cercle, 2=Rectangle) : 1
Entrez le rayon : 3
Forme #2 (1=Cercle, 2=Rectangle) : 2
Entrez longueur et largeur : 4 5
Aires des formes :
Forme #1 : 28.26
Forme #2 : 20

```




---

## Exercice 2 : Interface de paiement

## Objectif
Simuler une interface pour différents moyens de paiement.

## Fichiers
- `Paiement.h` : Classe abstraite `Paiement` avec méthode pure `effectuerPaiement(double montant)`.
- `PaiementCarte.h` / `PaiementCarte.cpp` : Affiche "Paiement de X DH par carte bancaire."
- `PaiementEspece.h` / `PaiementEspece.cpp` : Affiche "Paiement de X DH en espèces."
- `main.cpp` : Crée un tableau de pointeurs vers `Paiement` et simule plusieurs paiements.

## Exemple de sortie

```
Paiement de 150 DH par carte bancaire.
Paiement de 200 DH en espèces.
Paiement de 75.5 DH par carte bancaire.

```


---

## Exercice 3 : Gestion d’animaux


## Objectif
Utiliser des classes abstraites pour généraliser des comportements animaux.

## Fichiers
- `Animal.h` : Classe abstraite `Animal` avec méthode pure `crier()` et méthode `info()`.
- `Chien.h` / `Chien.cpp` : Affiche "Wouf !".
- `Chat.h` / `Chat.cpp` : Affiche "Miaou !".
- `Vache.h` / `Vache.cpp` : Affiche "Meuh !".
- `main.cpp` : Stocke les animaux dans un vecteur de pointeurs et fait appel aux méthodes.

## Exemple de sortie

```
Je suis un animal.
Wouf !
Je suis un animal.
Miaou !
Je suis un animal.
Meuh !

```



---

## Exercice 4 : Système de fichiers virtuel


## Objectif
Simuler une interface de gestion de fichiers avec abstraction.

## Fichiers
- `NoeudFichier.h` : Classe abstraite avec méthodes `nom()` et pure `taille()`.
- `Fichier.h` / `Fichier.cpp` : Fichier simple avec `nom` et `taille`.
- `Dossier.h` / `Dossier.cpp` : Contient une liste de `NoeudFichier*` et calcule la taille totale.
- `main.cpp` : Permet à l’utilisateur de créer une structure hiérarchique et d’afficher la taille des dossiers.

## Exemple de sortie
```
Créer un dossier : Dossier1
Ajouter un fichier dans Dossier1 : fichier1.txt 100
Ajouter un fichier dans Dossier1 : fichier2.txt 250
Taille totale de Dossier1 : 350

```



