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
<img width="748" height="626" alt="image" src="https://github.com/user-attachments/assets/124dca3e-9a97-46a7-85c9-72b8925afc4f" />




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
<img width="846" height="136" alt="image" src="https://github.com/user-attachments/assets/bdfdcf27-ed15-4854-8440-44d6f9e250ac" />


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

<img width="606" height="287" alt="image" src="https://github.com/user-attachments/assets/e77dcbbe-2725-40b9-97b9-9d97d768a71d" />


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
Structure des fichiers :
root (Dossier, taille=1150)
    file1.txt (Fichier, taille=100)        
    file2.txt (Fichier, taille=250)        
    docs (Dossier, taille=800)
        doc1.pdf (Fichier, taille=500)     
        doc2.pdf (Fichier, taille=300)     

Taille totale du dossier root : 1150 octets

```

<img width="723" height="317" alt="image" src="https://github.com/user-attachments/assets/6f2c60a4-5fd3-404b-b337-16dd8b7acf16" />


