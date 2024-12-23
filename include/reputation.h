#ifndef REPUTATION_H
#define REPUTATION_H

#include "utilisateur.h"
#include "produit.h"

/**
 * Fonction pour calculer le score de réputation d'un produit
 * @param avis_positifs Nombre d'avis positifs
 * @param avis_negatifs Nombre d'avis négatifs
 * @return Score de réputation calculé
 */
int calculer_score_reputation(int avis_positifs, int avis_negatifs);
/**
 * Fonction pour ajouter un avis sur un produit
 * @param utilisateur Utilisateur donnant l'avis
 * @param produit Produit sur lequel l'avis est donné
 * @param avis_positifs Nombre d'avis positifs
 * @param avis_negatifs Nombre d'avis négatifs
 */
void ajouter_avis(Utilisateur *utilisateur, Produit *produit, int avis_positifs, int avis_negatifs);

#endif // REPUTATION_H