#include "utilisateur.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_UTILISATEURS 100


static Utilisateur *tete_utilisateurs = NULL;
static int nombre_utilisateurs = 0;

/**
 * Fonction pour créer un nouvel utilisateur
 * @param nom Nom de l'utilisateur
 * @param email Email de l'utilisateur
 * @return ID de l'utilisateur créé ou -1 en cas d'erreur
 */
int creer_utilisateur(const char *nom, const char *email) {
    if (nombre_utilisateurs >= MAX_UTILISATEURS) {
        return -1; // Limite d'utilisateurs atteinte
    }
    Utilisateur *nouveau_utilisateur = (Utilisateur *)malloc(sizeof(Utilisateur));
    if (!nouveau_utilisateur) {
        return -1; // Erreur d'allocation mémoire
    }
    nouveau_utilisateur->id = nombre_utilisateurs + 1;
    strncpy(nouveau_utilisateur->nom, nom, sizeof(nouveau_utilisateur->nom) - 1);
    strncpy(nouveau_utilisateur->email, email, sizeof(nouveau_utilisateur->email) - 1);
    nouveau_utilisateur->suivant = tete_utilisateurs;
    tete_utilisateurs = nouveau_utilisateur;
    nombre_utilisateurs++;
    return nouveau_utilisateur->id; // Retourne l'ID du nouvel utilisateur
}

/***
 * Fonction pour obtenir un utilisateur à partir de son ID
 * @param id ID de l'utilisateur
 * @return Pointeur vers l'utilisateur ou NULL si l'ID est invalide
 */
Utilisateur* obtenir_utilisateur(int id) {
    Utilisateur *courant = tete_utilisateurs;
    while (courant) {
        if (courant->id == id) {
            return courant;
        }
        courant = courant->suivant;
    }
    return NULL; // ID utilisateur invalide
}

/**
 * Fonction pour imprimer les informations d'un utilisateur
 * @param id ID de l'utilisateur
 */
void imprimer_info_utilisateur(int id) {
    Utilisateur *utilisateur = obtenir_utilisateur(id);
    if (utilisateur) {
        printf("ID Utilisateur: %d\n", utilisateur->id);
        printf("Nom: %s\n", utilisateur->nom);
        printf("Email: %s\n", utilisateur->email);
    } else {
        printf("Utilisateur non trouve.\n");
    }
}

/**
 * Fonction pour imprimer les informations de tous les utilisateurs
 */
void imprimer_tous_les_utilisateurs() {
    if (nombre_utilisateurs == 0) {
        printf("Aucun utilisateur enregistre.\n");
        return;
    }
    Utilisateur *courant = tete_utilisateurs;
    while (courant) {
        printf("ID Utilisateur: %d\n", courant->id);
        printf("Nom: %s\n", courant->nom);
        printf("Email: %s\n", courant->email);
        printf("--------------------------\n");
        courant = courant->suivant;
    }
}