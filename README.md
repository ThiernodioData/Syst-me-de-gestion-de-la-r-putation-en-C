# Système de gestion de la réputation en ligne

Ce projet est un système de gestion de la réputation en ligne conçu pour aider les utilisateurs à gérer et surveiller efficacement la réputation des produits en ligne. Il inclut des fonctionnalités pour la gestion des utilisateurs et des produits, ainsi que le calcul des scores de réputation basé sur les avis des utilisateurs.

## Structure du projet

```
online-reputation-management-system
├── src
│   ├── main.c          # Point d'entrée de l'application 
│   ├── reputation.c    # Fonctions pour la gestion de la réputation
│   └── utilisateur.c   # Fonctions pour la gestion des utilisateurs
│   └── produit.c       # Fonctions pour la gestion des produits
├── include
│   ├── reputation.h     # En-tête pour les fonctions de réputation
│   └── utilisateur.h    # En-tête pour les fonctions d'utilisateur
│   └── produit.h        # En-tête pour les fonctions de produit
├── Makefile             # Instructions de compilation
├── ressource            # Ressource 
└── README.md            # Documentation du projet
```

## Instructions d'installation

1. Clonez le dépôt:
   ```
   git clone https://github.com/ThiernodioData/Systeme-de-gestion-de-la-reputation-en-C
   cd online-reputation-management-system
   ```

2. Compilez le projet en utilisant le Makefile :
   NB:ce mettre dans le repertoire "online-reputation-management-system" avant de faire la commande make
   ```
   mingw32-make

   ```

3. Exécutez l'application :   ```
   NB:ce mettre dans le repertoire "online-reputation-management-system" avant de faire la commande make

   ```
   ./main
   ```


## Guide d'utilisation

- L'application permet aux utilisateurs de créer des profils et de gérer leurs scores de réputation.
- Les utilisateurs peuvent consulter leur réputation et apporter les ajustements nécessaires en fonction des retours et des interactions.
- Les produits peuvent également être créés et leur réputation peut être consultée.
- Les utilisateurs peuvent ajouter des avis sur les produits, ce qui met à jour le score de réputation des produits.
- lors de ajoute de donne de preverable utilisee des mots sans espace: Ex: "Ordinateur_DEL"

## Contribuer

- Les contributions sont les bienvenues ! Veuillez soumettre une pull request ou ouvrir une issue pour toute amélioration ou correction de bug.

## Auteurs
   Thierno Idrissa Diallo - Développeur principal :https://github.com/ThiernodioData/

## Support Logiciel:
   les logiciel neccesaire pour test ce projet ce trouve dans le repertoire 'ressource'
