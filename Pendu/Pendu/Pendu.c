// Pendu.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LONGUEUR_MOT 6  
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"  


int main() {
    
    srand((unsigned int)time(NULL));

    
    char mot[LONGUEUR_MOT + 1];  
    for (int i = 0; i < LONGUEUR_MOT; i++) {
        int index = rand() % 26;  
        mot[i] = ALPHABET[index];
    }
    mot[LONGUEUR_MOT] = '\0';  

    printf("Mot aléatoire : %s\n", mot);
    return 0;
    int nombreDeMots = sizeof(mots) / sizeof(mots[0]);

    
    int indexMot = rand() % nombreDeMots;
    char* motADeviner = mots[indexMot];

    int longueurMot = (int)strlen(motADeviner);
    char motCache[50]; 

    
    for (int i = 0; i < longueurMot; i++) {
        motCache[i] = '_';
    }
    motCache[longueurMot] = '\0';

    int vies = 6; 
    char lettre;
    int victoire = 0;

    printf("=== JEU DU PENDU ===\n\n");

    
    while (vies > 0 && victoire == 0) {
        printf("Mot : %s\n", motCache);
        printf("Vies restantes : %d\n", vies);
        printf("Propose une lettre : ");
        scanf_s(" %c", &lettre);

        int trouve = 0;
        for (int i = 0; i < longueurMot; i++) {
            if (motADeviner[i] == lettre && motCache[i] == '_') {
                motCache[i] = lettre;
                trouve = 1;
            }
        }

        if (trouve == 0) {
            vies--;
            printf("Mauvaise lettre.\n");
        }
        else {
            printf("Bonne lettre !\n");
        }

        if (strcmp(motCache, motADeviner) == 0) {
            victoire = 1;
        }

        printf("\n");
    }

    
    if (victoire == 1) {
        printf("Bravo ! Tu as trouvé le mot : %s\n", motADeviner);
    }
    else {
        printf("Dommage... Le mot était : %s\n", motADeviner);
    }

    printf("\nAppuie sur Entrée pour quitter...");
    getchar(); getchar(); 
    return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.