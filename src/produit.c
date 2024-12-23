#include "produit.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 

#define MAX_PRODUITS 100

static Produit *tete_produits = NULL;
static int nombre_produits = 0;
/**
 * Fonction pour créer un nouveau produit
 * @param nom Nom du produit
 * @return ID du produit créé ou -1 en cas d'erreur
 */
int creer_produit(const char *nom) {
    if (nombre_produits >= MAX_PRODUITS) {
        return -1; // Limite de produits atteinte
    }
    Produit *nouveau_produit = (Produit *)malloc(sizeof(Produit));
    if (!nouveau_produit) {
        return -1; // Erreur d'allocation mémoire
    }
    nouveau_produit->id = nombre_produits + 1;
    strncpy(nouveau_produit->nom, nom, sizeof(nouveau_produit->nom) - 1);
    nouveau_produit->score_reputation = 0;
    nouveau_produit->suivant = tete_produits;
    tete_produits = nouveau_produit;
    nombre_produits++;
    return nouveau_produit->id; // Retourne l'ID du nouveau produit
}

/***
 * Fonction pour obtenir un produit à partir de son ID
 * @param id ID du produit
 * @return Pointeur vers le produit ou NULL si l'ID est invalide
 */
Produit* obtenir_produit(int id) {
    Produit *courant = tete_produits;
    while (courant) {
        if (courant->id == id) {
            return courant;
        }
        courant = courant->suivant;
    }
    return NULL; // ID produit invalide
}

/**
 * Fonction pour imprimer les informations d'un produit
 * @param id ID du produit
 */
void imprimer_info_produit(int id) {
    Produit *produit = obtenir_produit(id);
    if (produit) {
        printf("ID Produit: %d\n", produit->id);
        printf("Nom: %s\n", produit->nom);
        printf("Score de Reputation: %d\n", produit->score_reputation);
    } else {
        printf("Produit non trouve.\n");
    }
}

/**
 * Fonction pour imprimer tous les produits enregistrés
 */
void imprimer_tous_les_produits() {
    if (nombre_produits == 0) {
        printf("Aucun produit enregistre.\n");
        return;
    }
    Produit *courant = tete_produits;
    while (courant) {
        printf("ID Produit: %d\n", courant->id);
        printf("Nom: %s\n", courant->nom);
        printf("Score de Reputation: %d\n", courant->score_reputation);
        printf("--------------------------\n");
        courant = courant->suivant;
    }
}