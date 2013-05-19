// exo_structure_conditionnelle.cpp�: d�finit le point d'entr�e pour l'application console.
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
		La soici�t� "SIMPA" pr�voit de donner � chacun de ses employ�s une prime de fin d'ann�e � hauteur de 3% du salaire net.
		Cette prime sera major�e de 100� pour les salari�s dont l'anciennet� est sup�rieure � 5 ans.
		Ecrire l'algorithme qui permet de saisir le salaire et l'anciennet� puis de calculer et d'afficher le montant de la prime 
		d'un salari�.
	*/
	printf("--------------------------------------------\n");
	printf("Voici le troisieme exercice du TD3, prime.\n\n");

	int salaireNet;
	int nombreAnnee;
	double prime;

	printf("Entrez votre salaire net.\n");
	scanf_s("%d", &salaireNet);
	printf("Entrez maintenant votre nombre d'annee d'anciennete.\n");
	scanf_s("%d", &nombreAnnee);

	prime = salaireNet*0.03;
	
	if(nombreAnnee > 5)
	{
		prime += 100;
	}

	printf("Votre prime de fin d'annee est de %d euro\n", prime);
	printf("--------------------------------------------\n");
	
	/*
		Exercice 4 : Train
		A la gare Monparnasse, un voyageur s'arr�te pr�s d'un guichet automatique. Il souhaite connaitre le prix des billets
		pour aller dans les villes de Chartres, Angers et Nantes.
		Voici les tarif :

		- Chartes : 20.5 �
		- Angers : 40 �
		- Nantes : 50.5 �

		Ecrire l'algorithme qui affiche � l'�cran le prix du billet correspondant � la ville saisie par le voyageur.
		Affichage : "Un billet pour ... faut ... euro."
	*/
	printf("--------------------------------------------\n");
	printf("Voici le quatrieme exercice du TD3, Train.\n\n");

	int choix;
	double chartres = 20.5;
	double angers = 40;
	double nantes = 50.5;

	printf("Bienvenue a la gare de Monparnasse.\nSelectionnez votre destination :\n");
	printf("1- Chartres : %d euro\n", chartres);
	printf("2- Angers : %d euro\n", angers);
	printf("3- Nantes : %d euro\n", nantes);

	scanf_s("%d",&choix);
	
	switch (choix)
	{
		case 1:
			printf("un billet pour Chartres vaut %d euro.\n", chartres);
			break;

		case 2:
			printf("un billet pour Angers vaut %d euro.\n", angers);
			break;
		case 3:
			printf("un billet pour Nantes vaut %d euro.\n", nantes);
			break;
		default:
			printf("Vous devez choisir une destination.\n");
			break;
	}

	return 0;
}

