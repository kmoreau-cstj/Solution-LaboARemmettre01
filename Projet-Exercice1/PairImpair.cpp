//but : d�terminer si le nombre netier donn�e par l'utilisatuer est pair ou impair
//auteur : Patrice Dinelle
//date:  2020-09-11

#include <iostream>		// pour communiquer avec l'utilisateur 


void main()
{
	setlocale(LC_ALL, "");         // pour afficher les accents dans la console (pas de besoin pour ce projet)


	//variable
	int nombre1; 
	
	// pour avoir le nombre de l'utilisateur
	std::cout << "Veuillez entrer un nombre entier : ";
	std::cin >> nombre1; // enregistrer le nombre


	if (nombre1 % 2 == 0 ) // l'op�ration pour d�terminer si le nombre est pair ou impair
	{
		std::cout << nombre1 << " est un nombre pair"; // la r�ponce si le nombre est pair
	}
	else // si le nombre n'est pas pair
	{
		std::cout << nombre1 << " est un nombre impair"; // la r�ponce si le nombre est impair
	}
}


//plan de tests
/*
nombre1					r�sultats escompt�
2						est pair
5						est impair	
-1						est impair
-2						est pair
*/
