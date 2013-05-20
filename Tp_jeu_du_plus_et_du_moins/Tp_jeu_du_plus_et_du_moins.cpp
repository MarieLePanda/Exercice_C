// Tp_jeu_du_plus_et_du_moins.cpp�: d�finit le point d'entr�e pour l'application console.
//
	
#include "stdio.h"
#include "stdlib.h"
#include "stdafx.h"
#include <cstdlib> 
#include "time.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int nombreMystere;
	int proposition;
	int max = 100; 
	int min = 0;
	int nbCoups = 0;
	int nbMaxCoups = 10;
	bool trouve = false;

	srand(time(NULL));
	nombreMystere = (rand() %( max - min +1)) + min;

	printf("Le nombre myst�re a ete choisie. il est compris entre 0 et 100.\nVous avez 10 essaye pour le trouver.\n\nBonne chance !\n");
	
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

	return 0;
}
