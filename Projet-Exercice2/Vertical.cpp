// but : déterminer si le nombre a bien 5 chiffres si oui, l'écrir en colone vertical
// auteur : Patrice Dinelle
// date : 2020-09-11


#include <iostream>

void main()
{

	setlocale(LC_ALL, "");         // pour afficher les accents dans la console

	//variable
	int nombre;
	int chiffre1;  //	>
	int chiffre2;  //		>
	int chiffre3;  //			>  les variables pour afficher les chiffres en colone 
	int chiffre4;  //		>
	int chiffre5;  //	>

	// avoir le nombre a 5 chiffres de l'utilisateur 
	std::cout << "Veuillez entrer un nombre a 5 chiffres ";
	std::cin >> nombre; // enregistrer le nombre


	if ( nombre > 9999 )
	{
		chiffre1 = nombre / 10000;
		chiffre2 = nombre / 1000 % 10;
		chiffre3 = nombre / 100 % 10;
		chiffre4 = nombre / 10 % 10;
		chiffre5 = nombre / 1 % 10;
		std::cout << chiffre1 << std::endl;
		std::cout << chiffre2 << std::endl;
		std::cout << chiffre3 << std::endl;
		std::cout << chiffre4 << std::endl;
		std::cout << chiffre5 << std::endl;
	}
	else
	{
		std::cout << "ce nombre ne contient pas 5 chiffres";
	}

}
//plans test
/*
nombre			 résultats escompté
12345			1
				2
				3
				4
				5

63521			6
				3
				5
				2
				1

52				"ce nombre ne contient pas 5 chiffres"


*/
