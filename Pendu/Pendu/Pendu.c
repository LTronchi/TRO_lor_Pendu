// Pendu.cpp : Ce fichier contient la fonction 'main'. L'ex�cution du programme commence et se termine � cet endroit.
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

    printf("Mot al�atoire : %s\n", mot);
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
        printf("Bravo ! Tu as trouv� le mot : %s\n", motADeviner);
    }
    else {
        printf("Dommage... Le mot �tait : %s\n", motADeviner);
    }

    printf("\nAppuie sur Entr�e pour quitter...");
    getchar(); getchar(); 
    return 0;
}



// Ex�cuter le programme�: Ctrl+F5 ou menu D�boguer�> Ex�cuter sans d�bogage
// D�boguer le programme�: F5 ou menu D�boguer�> D�marrer le d�bogage

// Astuces pour bien d�marrer�: 
//   1. Utilisez la fen�tre Explorateur de solutions pour ajouter des fichiers et les g�rer.
//   2. Utilisez la fen�tre Team Explorer pour vous connecter au contr�le de code source.
//   3. Utilisez la fen�tre Sortie pour voir la sortie de la g�n�ration et d'autres messages.
//   4. Utilisez la fen�tre Liste d'erreurs pour voir les erreurs.
//   5. Acc�dez � Projet�> Ajouter un nouvel �l�ment pour cr�er des fichiers de code, ou � Projet�> Ajouter un �l�ment existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, acc�dez � Fichier�> Ouvrir�> Projet et s�lectionnez le fichier .sln.