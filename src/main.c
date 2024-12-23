#include <stdio.h>
#include <stdlib.h>

#include "utilisateur.h"
#include "reputation.h"
#include "produit.h"
/**
 * Fonction pour afficher le menu
 */

void afficher_menu() {
    printf("\n");
    printf("\t=========================================\n");
    printf("\t||           MENU PRINCIPAL            ||\n");
    printf("\t=========================================\n");
    printf("\t||  1. Creer un utilisateur            ||\n");
    printf("\t||  2. Creer un produit                ||\n");
    printf("\t||  3. Ajouter un avis sur un produit  ||\n");
    printf("\t||  4. Afficher infos utilisateur      ||\n");
    printf("\t||  5. Afficher infos produit          ||\n");
    printf("\t||  6. Afficher tous les utilisateurs  ||\n");
    printf("\t||  7. Afficher tous les produits      ||\n");
    printf("\t||  8. Quitter                         ||\n");
    printf("\t=========================================\n");
    printf("\t>> Veuillez entrer votre choix : ");
}



/**
 * Fonction principale
 */
int main() {
    int choix, id_utilisateur, id_produit, avis_positifs, avis_negatifs;
    char nom[50], email[100], nom_produit[50];
    Utilisateur *utilisateur;
    Produit *produit;

    while (1) {
        afficher_menu();
        
        printf("\n\tEntrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez le nom de l'utilisateur: ");
                scanf("%s", nom);
                printf("Entrez l'email de l'utilisateur: ");
                scanf("%s", email);
                id_utilisateur = creer_utilisateur(nom, email);
                if (id_utilisateur != -1) {
                    printf("Utilisateur cree avec l'ID: %d\n", id_utilisateur);
                } else {
                    printf("Erreur: Limite d'utilisateurs atteinte.\n");
                }
                break;
            case 2:
                printf("Entrez le nom du produit: ");
                scanf("%s", nom_produit);
                id_produit = creer_produit(nom_produit);
                if (id_produit != -1) {
                    printf("Produit cree avec l'ID: %d\n", id_produit);
                } else {
                    printf("Erreur: Limite de produits atteinte.\n");
                }
                break;
            case 3:
                printf("Entrez l'ID de l'utilisateur: ");
                scanf("%d", &id_utilisateur);
                printf("Entrez l'ID du produit: ");
                scanf("%d", &id_produit);
                printf("Entrez le nombre d'avis positifs: ");
                scanf("%d", &avis_positifs);
                printf("Entrez le nombre d'avis negatifs: ");
                scanf("%d", &avis_negatifs);
                utilisateur = obtenir_utilisateur(id_utilisateur);
                produit = obtenir_produit(id_produit);
                if (utilisateur && produit) {
                    ajouter_avis(utilisateur, produit, avis_positifs, avis_negatifs);
                } else {
                    printf("Utilisateur ou produit non trouve.\n");
                }
                break;
            case 4:
                printf("Entrez l'ID de l'utilisateur: ");
                scanf("%d", &id_utilisateur);
                imprimer_info_utilisateur(id_utilisateur);
                break;
            case 5:
                printf("Entrez l'ID du produit: ");
                scanf("%d", &id_produit);
                imprimer_info_produit(id_produit);
                break;
            case 6:
                imprimer_tous_les_utilisateurs();
                break;
            case 7:
                imprimer_tous_les_produits();
                break;
            case 8:
                printf("Fin du programme!  .......\n");
                exit(0);
            default:
                printf("Choix invalide.\n");
        }
    }

    return 0;
}