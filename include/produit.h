#ifndef PRODUIT_H
#define PRODUIT_H
/**
 * Structure de données pour un produit
 */
typedef struct Produit {
    int id;
    char nom[50];
    int score_reputation;
    struct Produit *suivant;
} Produit;

/**
 * Fonction pour créer un nouveau produit
 * @param nom Nom du produit
 * @return ID du produit créé ou -1 en cas d'erreur
 */
int creer_produit(const char *nom);

/**
 * Fonction pour obtenir un produit à partir de son ID
 * @param id ID du produit
 * @return Pointeur vers le produit ou NULL si l'ID est invalide
 */
Produit* obtenir_produit(int id);

/**
 * Fonction pour imprimer les informations d'un produit
 * @param id ID du produit
 */
void imprimer_info_produit(int id);

/**
 * Fonction pour imprimer tous les produits enregistrés
 */
void imprimer_tous_les_produits();

#endif // PRODUIT_H