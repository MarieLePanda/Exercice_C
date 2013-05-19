// exo_structure_conditionnelle.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	
	/*
		Exercice 2 : Multiple
		Ecrire un programme qui affiche si le nombre saisi par l'utilisateur est un multiple de 3.
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
		La soiciete "SIMPA" prevoit de donner à chacun de ses employes une prime de fin d'annee à hauteur de 3% du salaire net.
		Cette prime sera majorée de 100€ pour les salaries dont l'anciennete est superieure à 5 ans.
		Ecrire l'algorithme qui permet de saisir le salaire et l'anciennete puis de calculer et d'afficher le montant de la prime 
		d'un salarie.
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

	printf("Votre prime de fin d'annee est de %lf euro\n", prime);
	printf("--------------------------------------------\n");
	
	/*
		Exercice 4 : Train
		A la gare Monparnasse, un voyageur s'arrete près d'un guichet automatique. Il souhaite connaitre le prix des billets
		pour aller dans les villes de Chartres, Angers et Nantes.
		Voici les tarif :

		- Chartes : 20.5 euro
		- Angers : 40 euro
		- Nantes : 50.5 euro

		Ecrire l'algorithme qui affiche a l'ecran le prix du billet correspondant a la ville saisie par le voyageur.
		Affichage : "Un billet pour ... vaut ... euro."
	*/
	printf("--------------------------------------------\n");
	printf("Voici le quatrieme exercice du TD3, Train.\n\n");

	int choix;
	double chartres = 20.5;
	double angers = 40;
	double nantes = 50.5;

	printf("Bienvenue a la gare de Monparnasse.\nSelectionnez votre destination :\n");
	printf("1- Chartres : %lf euro\n", chartres);
	printf("2- Angers : %lf euro\n", angers);
	printf("3- Nantes : %lf euro\n", nantes);

	scanf_s("%d",&choix);
	
	switch (choix)
	{
		case 1:
			printf("un billet pour Chartres vaut %lf euro.\n", chartres);
			break;

		case 2:
			printf("un billet pour Angers vaut %lf euro.\n", angers);
			break;
		case 3:
			printf("un billet pour Nantes vaut %lf euro.\n", nantes);
			break;
		default:
			printf("Vous devez choisir une destination.\n");
			break;
	}

	printf("--------------------------------------------\n");

	/*
		Exercice 5 : Reduction
		Une entreprise souhaite recompenser ses plus gros clients. Elle accorde une reduction en fonction du montant de la facture.
		Cette reduction variable se calcule de la facon suiante :
		- Pour un montant inférieur a 1 000 euro : pas de reduction.
		- Pour un montant compris entre 1 000 euro et 10 000 euro : reduction de 5%.
		- Pour un montant superieur a 10 000 euro : reduction de 10%.
		Le directeur commercal vous demande de realiser un programme permettant de calculer le total que paiera le client 
		(montant - reduction). 
	*/

	printf("--------------------------------------------\n");
	printf("Voici le cinquieme exercice du TD3, Reduction.\n\n");

	double montantFacture;
	double montantAPayer;

	printf("Entrez le montant de votre facture.\n");
	scanf_s("%lf", &montantFacture);

	if(montantFacture >= 10000)
	{
		montantAPayer = montantFacture - (montantFacture*0.1);
	}
	else 
	{
		if(montantFacture >= 1000)
		{
			montantAPayer = montantFacture - (montantFacture*0.05);
		}
		else
		{
			montantAPayer = montantFacture;
		}
	}

	printf("Total a payer %lf euro\n", montantAPayer);
	printf("--------------------------------------------\n");

	/*
		Exercice 6 : Annee Bissextile
		On dit souvent qu'une annee est bissextile si son expression numerale est divisible par 4. Par exemple : 1980 est bissextile car
		1980 est divisible par 4, alors que 1981 est non bissextile. Cette définition est erronnée car 1700 bien que divisible par 4
		n'est pas une annee bissextile. En fait les annees seculaires telles que 1600, 1700, 1800 etc. Forme un cas particulier ;
		la condition pour qu'une annee seculaires soit biessextile n'est plus d'etre divisible par 4 mais d'etre divisible par 400.
		Ainsi 1300 n'est pas bissextile alors que 1600 est bissextile.

		Ecrire l'algorithme qui determinera si une annee, saisie par l'utilisateur est bissextile ou non. Le resultat sera affiche
		sous la forme de l'un des deux message suivant : "L'annee yyyy est bissextile." ou "L'annee yyyy n'est pas bissextile.".
	*/

	printf("--------------------------------------------\n");
	printf("Voici le sixieme exercice du TD3, Annee bissextile.\n\n");

	int annee;
	bool bissextile;

	printf("Entrez une annee.\n");
	scanf_s("%d", &annee);

	if(annee % 4 == 0 )
	{
		if(annee % 100 == 0)
		{
			if (annee % 400 == 0)
			{
				bissextile = true;
			}
			else
			{
				bissextile = false;
			}
		}
		else
		{
			bissextile = true;
		}
	}
	else
	{
		bissextile = false;
	}

	if(bissextile)
	{
		printf("L'annee %d est bissextile.\n", annee);
	}
	else
	{
		printf("L'annee %d n'est pas bissextile.\n", annee);
	}

	printf("--------------------------------------------\n");

	/*
		Exercice 8 : Tarifs Postaux
		Voila la tarification en vigeur pour les lettres en service rapide :
		jusqu'a 
		- 20g 0.50 euro
		- 50g 0.75 euro
		- 100g 1.11 euro
		- 250g 1.90 euro
		- 500g 2.65 euro

		Ecrire un algorithme qui affiche le tarif net du timbre en fonction du poids de la lettre en gramme.
		Le calcul du tarif est en fonction du poids et doit se faire uniquement en fonction de la majoation par rapport au tarif 
		precedent.
		Si la lettre est superrieur a 500g, le message suivant s'affiche "Veuillez vous renseigner aupres de votre bureau de poste.".
	*/

	printf("--------------------------------------------\n");
	printf("Voici le huitieme exercice du TD3, Tarifs postaux.\n\n");

	int poidsLettre;
	

	printf("Entrez le poids de votre colis.\n");
	scanf_s("%d", &poidsLettre);

	if(poidsLettre > 500)
	{
		printf("Veuillez vous renseigner aupres de votre bureau de poste.\n");
	}
	else if(poidsLettre > 250)
	{
		printf("Le tarif est de 2.65 euro.\n");
	}
	else if(poidsLettre > 100)
	{
		printf("Le tarif est de 1.90 euro.\n");
	}
	else if(poidsLettre > 50)
	{
		printf("Le tarif est de 1.11 euro.\n");
	}
	else if(poidsLettre > 20)
	{
		printf("Le tarif est de 0.75 euro.\n");
	}
	else
	{
		printf("Le tarif est de 0.50 euro.\n");
	}
	
	printf("--------------------------------------------\n");

	return 0;
}

