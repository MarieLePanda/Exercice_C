// Exo_tableau.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h";
#include "FonctionTableau.h";
#include <string.h>;
/*
Exercice 1

Créez une fonction sommeTableau qui renvoie la somme des valeurs contenues dans le tableau 
(utilisez un return pour renvoyer la valeur).
*/

int sommeTableau(int tableau[], int tailleTableau)
{
	int resultat= 0;
	
	for(int i = 0; i < tailleTableau; i++)
	{
		resultat += tableau[i];
	}
	
	return resultat;
}

/*
Exercice 2

Créez une fonction moyenneTableau qui calcule et renvoie la moyenne des valeurs. 
*/

double moyenneTableau(int tableau[], int tailleTableau)
{
	double resultat = 0;
	
	for(int i = 0; i < tailleTableau; i++)
	{
		resultat += tableau[i];
	}
	resultat = resultat / tailleTableau;
	
	return resultat;
}

/*
Exercice 3

Créez une fonction copierTableau qui prend en paramètre deux tableaux. 
Le contenu du premier tableau devra être copié dans le second tableau.
*/

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
	for(int i = 0; i < tailleTableau; i++)
	{
		tableauCopie[i] = tableauOriginal[i];
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int tableau[4] = {5,15,10,0};
	int tableauCopie[4] = {0};
	char chaine[] = "salut";

	printf("%s\n", chaine);
	
	printf("La somme des chiffres du tableau 1 est : %d\n", sommeTableau(tableau, 4));
	printf("La somme des chiffres du tableau 2 est : %d\n", sommeTableau(tableauCopie, 4));

	printf("La moyenne des chiffres du tableau 1 est : %lf\n", moyenneTableau(tableau, 4));
	printf("La moyenne des chiffres du tableau 2 est : %lf\n", moyenneTableau(tableauCopie, 4));

	copie(tableau, tableauCopie, 4);

	printf("La somme des chiffres du tableau 1 est : %d\n", sommeTableau(tableau, 4));
	printf("La somme des chiffres du tableau 2 est : %d\n", sommeTableau(tableauCopie, 4));

	printf("La moyenne des chiffres du tableau 1 est : %lf\n", moyenneTableau(tableau, 4));
	printf("La moyenne des chiffres du tableau 2 est : %lf\n", moyenneTableau(tableauCopie, 4));

	return 0;
}

