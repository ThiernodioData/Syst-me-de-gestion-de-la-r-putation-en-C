#ifndef UTILISATEUR_H
#define UTILISATEUR_H
/**
 * Structure de données pour un utilisateur
 */
typedef struct Utilisateur {
    int id;
    char nom[50];
    char email[100];
    struct Utilisateur *suivant;
} Utilisateur;


typedef struct Utilisateur Utilisateur;

/**
 * Fonction pour créer un nouvel utilisateur
 * @param nom Nom de l'utilisateur
 * @param email Email de l'utilisateur
 * @return ID de l'utilisateur créé ou -1 en cas d'erreur
 */
int creer_utilisateur(const char *nom, const char *email);

/***
 * Fonction pour obtenir un utilisateur à partir de son ID
 * @param id ID de l'utilisateur
 * @return Pointeur vers l'utilisateur ou NULL si l'ID est invalide
 */
Utilisateur* obtenir_utilisateur(int id);

/**
 * Fonction pour imprimer les informations d'un utilisateur
 * @param id ID de l'utilisateur
 */
void imprimer_info_utilisateur(int id);

/**
 * Fonction pour imprimer tous les utilisateurs enregistrés
 */
void imprimer_tous_les_utilisateurs();

#endif // UTILISATEUR_H