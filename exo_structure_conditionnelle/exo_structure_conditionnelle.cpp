// exo_structure_conditionnelle.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//Exercice 2 Multiple
	/*
		Ecrire un programme qui affiche si le nombre saisi par l'utilisateur est un multiple de 3
	*/

	printf("Voici le deuxieme exercice du TD3, Multiple\n\n");
	printf("Entre un nombre\n");
	int nombre;
	scanf_s("%d", &nombre);

	if(nombre%3 == 0)
	{
		printf("%d est divisible par 3\n", nombre);
	}
	else
	{
		printf("%d n'est pas divisible par 3\n", nombre);
	}

	return 0;
}

