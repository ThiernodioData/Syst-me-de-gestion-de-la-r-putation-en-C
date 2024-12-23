#include "reputation.h"
#include <stdio.h>

/**
 * Fonction pour calculer le score de réputation d'un produit
 * @param avis_positifs Nombre d'avis positifs
 * @param avis_negatifs Nombre d'avis négatifs
 * @return Score de réputation calculé
 */
int calculer_score_reputation(int avis_positifs, int avis_negatifs) {
    if (avis_positifs + avis_negatifs == 0) {
        return 0; // Aucun avis signifie une réputation neutre
    }
    return (avis_positifs * 100) / (avis_positifs + avis_negatifs);
}

/**
 * Fonction pour ajouter un avis sur un produit
 * @param utilisateur Utilisateur donnant l'avis
 * @param produit Produit sur lequel l'avis est donné
 * @param avis_positifs Nombre d'avis positifs
 * @param avis_negatifs Nombre d'avis négatifs
 */
void ajouter_avis(Utilisateur *utilisateur, Produit *produit, int avis_positifs, int avis_negatifs) {
    produit->score_reputation = calculer_score_reputation(avis_positifs, avis_negatifs);
    printf("Score de reputation mis a jour pour le produit %s: %d\n", produit->nom, produit->score_reputation);
}