// exo_structure_conditionnelle.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	
	/*
		Exercice 2 : Multiple
		Ecrire un programme qui affiche si le nombre saisi par l'utilisateur est un multiple de 3
	*/
	
	printf("--------------------------------------------\n");
	printf("Voici le deuxieme exercice du TD3, Multiple.\n\n");

	int nombre;

	printf("Entrez un nombre.\n");
	scanf_s("%d", &nombre);

	if(nombre%3 == 0)
	{
		printf("%d est divisible par 3.\n", nombre);
	}
	else
	{
		printf("%d n'est pas divisible par 3.\n", nombre);
	}
	printf("--------------------------------------------\n");

	/*
		Exercice 3 : Prime
		La soiciété "SIMPA" prévoit de donner à chacun de ses employés une prime de fin d'année à hauteur de 3% du salaire net.
		Cette prime sera majorée de 100€ pour les salariés dont l'ancienneté est supérieure à 5 ans.
		Ecrire l'algorithme qui permet de saisir le salaire et l'ancienneté puis de calculer et d'afficher le montant de la prime 
		d'un salarié.
	*/
	printf("--------------------------------------------\n");
	printf("Voici le troisieme exercice du TD3, prime.\n\n");

	int salaireNet;
	int nombreAnnee;
	int prime;

	printf("Entrez votre salaire net.\n");
	scanf_s("%d", &salaireNet);
	printf("Entrez maintenant votre nombre d'annee d'anciennete.\n");
	scanf_s("%d", &nombreAnnee);

	prime = salaireNet*0.03;
	
	if(nombreAnnee > 5)
	{
		prime += 100;
	}

	printf("Votre prime de fin d'annee est de %d euros\n", prime);
	printf("--------------------------------------------\n");
	

	return 0;
}

