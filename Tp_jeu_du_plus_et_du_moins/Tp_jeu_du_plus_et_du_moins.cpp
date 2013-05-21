/*******************************************************************************\
*								JEU DU PLUS OU MOINS							*
*									MODE CONSOLE								*
*									ECRIT EN C									*
*										PAR										*
*									MARIE LE PANDA								*
\*******************************************************************************/


//-_-_-_-_-_Bibliotheque a inclure_-_-_-_-_-\\

#include "stdio.h"
#include "stdlib.h"
#include "stdafx.h"
#include "cstdlib" 
#include "time.h"
#include "HeaderPlusMoins.h"

//-_-_-_-_-_Variable globale_-_-_-_-_-\\


const int min = 0;
const int nbCoupsMax = 10;

//-_-_-_-_-_Fonction_-_-_-_-_-\\

//Sert a mettre en place l'un des trois niveau de difficulte choisie par l'utilisateur
void miseEnPlaceDeLaDifficulte(int *pointeurDifficulte, int *pointeurMax)
{
	if(*pointeurDifficulte == 1)
		{
			*pointeurMax = 100;
		}
		else if(*pointeurDifficulte == 2)
		{
			*pointeurMax = 1000;
		}
		else
		{
			*pointeurMax = 10000;
		}
}


//Sert a genere un nombre mystere aleatoirement ou saisie par un autre joueur
int generationDuNombreMystere(int *pointeurMax, int *pointeurNombreJoueur)
{
	int nombreMystere;

	if(*pointeurNombreJoueur == 1)
	{
		nombreMystere = (rand() %( *pointeurMax - min +1)) + min;
	}
	else
	{
		do
		{
		printf("--------------------------------------------------------------------------------\n");
		printf("\tJoueur 1 : Selectionner un nombre mystere entre %d et %d:\n", min, *pointeurMax);
		scanf_s("%d", &nombreMystere);
		}while (!(nombreMystere >= min && nombreMystere <= *pointeurMax));
				
		for(int i = 0; i <80; i++)
		{
			printf("................................................................................\n");
		}
		printf("\tJoueur 2 : A vous de trouvez le nombre mystere.\n");
	}

	return nombreMystere;
}


//permet de tenter de trouver le nombre
//Prend en parametre le nombre que le joueur doit trouver
//Retourne si le joueur a trouver le nombre ou non
bool jouer(int nbATrouver)
{
	int nbCoups = 0;
	int proposition;
	bool trouve = false;
	do
	{
		printf("Dites un nombre : \n");
		scanf_s("%d", &proposition);
		nbCoups++;

		if( proposition < nbATrouver)
		{
			printf("C'est plus !\n");
		}
		else if(proposition > nbATrouver)
		{
			printf("C'est moins !\n");
		}
		else
		{
			trouve = true;
		}

	}while(!trouve && nbCoups < nbCoupsMax);

	return trouve;
}


//Sert a definir le nombre de joueur qui vont jouer
void nombreDeJoueur(int *pointeurNombreJoueur)
{


	printf("\tA ce jeu vous pouvez jouer seul ou a deux.\n");
	printf("\tA combien voulez vous jouer ?\n");
	printf("\t\t1- Je veux jouez seul contre l'ordinateur\n");
	printf("\t\t2- Je veux jouez avec un amis.\n");

	scanf_s("%d", pointeurNombreJoueur);

	switch (*pointeurNombreJoueur)
	{
	case 1 :
		printf("\tTres bien vous allez jouer tous seul.\n");
		break;
	case 2 :
		printf("\tTres bien vous allez jouer a deux.\n");
		break;
	default:
		printf("\tCeci n'est pas possible.\n\n");
		nombreDeJoueur(pointeurNombreJoueur);
		break;
	}
}


//Permet a l'utilisateur de choisir son niveau de difficulte
void niveauDifficulte(int *pointeurDifficulte)
{
	printf("\tVous pouvez choisir 3 niveaux de diffculte different\n");
	printf("\tQuel niveau voulez vous choisir ?\n");
	printf("\t\t1- Niv 1 de 1 a 100\n");
	printf("\t\t2- Niv 2 de 1 a 1 000\n");
	printf("\t\t3- Niv 3 de 1 a 10 000\n");
	
	scanf_s("%d", pointeurDifficulte);
	*pointeurDifficulte;
	switch (*pointeurDifficulte)
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
		niveauDifficulte(pointeurDifficulte);
		break;
	}

	//return difficulte;
}


//Sert a afficher le menu en debut de jeu
void menu()
{
	
	int choix;
	bool valide;
	int difficulte;
	int *pointeurDifficulte = &difficulte;
	int nbJoueur;
	int *pointeurNombreJoueur = &nbJoueur;

	do
	{
		//Menu
		printf("================================================================================\n");
		printf("\t\t\t\tMENU\n");
		printf("================================================================================\n");
		printf("\t\tChoix du nombre nombre de joueur\n");
		printf("--------------------------------------------------------------------------------\n");
		nombreDeJoueur(pointeurNombreJoueur);

		printf("--------------------------------------------------------------------------------\n");
		printf("\t\tChoix de la difficulte\n");
		printf("--------------------------------------------------------------------------------\n");
		niveauDifficulte(pointeurDifficulte);

		printf("--------------------------------------------------------------------------------\n");
		printf("\t\tResume\n");
		printf("--------------------------------------------------------------------------------\n");
		
		printf("\tVous jouez donc a %d joueur(s), niveau de difficulte %d ?\n", nbJoueur, difficulte);
		printf("\t\t 1- Oui. (Commencer la partie)\n");
		printf("\t\t 2- Non. (Revenir au menu)\n");
		scanf_s("%d", &choix);

		if(choix == 1)
		{
			valide = true;
			printf("\tLa partie va commencer.\n");
			partie(pointeurDifficulte, pointeurNombreJoueur);
		}
		else
		{
			valide = false;
		}

	}while (!valide);

}


//Permet de lancer la partie
void partie(int *pointeurDifficulte, int *pointeurNombreJoueur)
{
	int nombreMystere;	
	bool trouve;
	int continuer;
	int max;
	int *pointeurMax = &max;

	do
	{
		printf("================================================================================\n");
		printf("\t\t\t\tPARTIE\n");
		printf("================================================================================\n");
	
		miseEnPlaceDeLaDifficulte(pointeurDifficulte, pointeurMax);

		nombreMystere = generationDuNombreMystere(pointeurMax, pointeurNombreJoueur);

		trouve = jouer(nombreMystere);

		if (trouve)
		{
			printf("================================================================================\n");
			printf("\t\t\t\tYOU WON\n");
			printf("================================================================================\n");
			printf("Feliciation le nombre mystere etait %d !\n", nombreMystere); 
		}
		else
		{
			printf("================================================================================\n");
			printf("\t\t\t\tGAME OVER\n");
			printf("================================================================================\n");
			printf("Oh non ! Vous avez perdu !\nVous n'avez pas reussis a trouvez le nombre mystere a temps\n");
			printf("Le nombre mystere etait %d\n", nombreMystere);
		}

		printf("\tQue voulez vous faire ?\n");
		printf("\t\t1- Recommencer la partie\n");
		printf("\t\t2- Retourner au menu\n");
		printf("\t\t3- Quitter\n");

		scanf_s("%d", &continuer);

	} while (continuer == 1);

	if(continuer == 2)
	{
		menu();
	}
	
}


//Point d'entre de l'applaication
int _tmain(int argc, _TCHAR* argv[])
{

	
	srand(time(NULL));

	menu();
	
	
	return 0;
}

