// Tp_jeu_du_plus_et_du_moins.cpp : définit le point d'entrée pour l'application console.
//
	
#include "stdio.h"
#include "stdlib.h"
#include "stdafx.h"
#include <cstdlib> 
#include "time.h"

int nombreDeJoueur()
{
	int nbjoueur;

	printf("\tA ce jeu vous pouvez jouer seul ou a deux.\n");
	printf("\tA combien voulez vous jouer ?\n");
	printf("\t\t1- Je veux jouez seul contre l'ordinateur\n");
	printf("\t\t2- Je veux jouez avec un amis.\n");

	scanf_s("%d", &nbjoueur);

	switch (nbjoueur)
	{
	case 1 :
		printf("\tTres bien vous allez jouer tous seul.\n");
		break;
	case 2 :
		printf("\tTres bien vous allez jouer a deux.\n");
		break;
	default:
		printf("\tCeci n'est pas possible.\n\n");
		nbjoueur = nombreDeJoueur();
		break;
	}

	return nbjoueur;
}



int niveauDifficulte()
{
	int difficulte;

	printf("\tVous pouvez choisir 3 niveaux de diffculte different\n");
	printf("\tQuel niveau voulez vous choisir ?\n");
	printf("\t\t1- Niv 1 de 1 a 100\n");
	printf("\t\t2- Niv 2 de 1 a 1 000\n");
	printf("\t\t3- Niv 3 de 1 a 10 000\n");

	scanf_s("%d", &difficulte);

	switch (difficulte)
	{
	case 1 :
		printf("\tVous avez choisie le niveau 1. Ca devrai le faire. :)\n");
		break;
	case 2 :
		printf("\tVous avez choisie le niveau 2. T'es un peu un mec chaud toi. :|\n");
		break;
	case 3 :
		printf("\tVous avez choisie le niveau 3. Merci de ne pas casser le clavier. :x\n");
		break;
	default:
		printf("\tCe niveau n'est pas encore disponible. bientot promis\n\n");
		difficulte = niveauDifficulte();
		break;
	}

	return difficulte;
}



int _tmain(int argc, _TCHAR* argv[])
{

	printf("================================================================================\n");
	printf("\t\t\t\tMENU\n");
	printf("================================================================================\n");
	printf("\t\tChoix du nombre nombre de joueur\n");
	printf("--------------------------------------------------------------------------------\n");
	int nbjoueur = nombreDeJoueur();

	printf("\t\tChoix de la difficulte\n");
	printf("--------------------------------------------------------------------------------\n");
	int difficulte = niveauDifficulte();

	/*
	int nombreMystere;
	int proposition;
	int max = 100; 
	int min = 0;
	int nbCoups = 0;
	int nbMaxCoups = 10;
	bool trouve = false;

	srand(time(NULL));
	nombreMystere = (rand() %( max - min +1)) + min;

	printf("Le nombre mystère a ete choisie. il est compris entre 0 et 100.\nVous avez 10 essaye pour le trouver.\n\nBonne chance !\n");
	
	do
	{
		printf("Dites un nombre : %d\n", nombreMystere);
		scanf_s("%d", &proposition);
		nbCoups++;

		if( proposition < nombreMystere)
		{
			printf("C'est plus !\n");
		}
		else if(proposition > nombreMystere)
		{
			printf("C'est moins !\n");
		}
		else
		{
			trouve = true;
		}

	}while(!trouve && nbCoups < nbMaxCoups);

	if (trouve)
	{
		printf("Feliciation le nombre mystere etait %d, vous l'avez trouve en %d coup(s) !\n", nombreMystere, nbCoups); 
	}
	else
	{
		printf("oh non ! Vous avez perdu !\n");
	}
	*/
	return 0;
}

