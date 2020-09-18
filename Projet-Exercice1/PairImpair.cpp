//FR : but : déterminer si le nombre netier donnée par l'utilisatuer est pair ou impair
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

	// KM : Le commentaire doit expliquer pourquoi tu as recours à %, puis 2, puis pourquoi le comparer à 0
	if (nombre1 % 2 == 0 ) // l'opération pour déterminer si le nombre est pair ou impair
	{
		std::cout << nombre1 << " est un nombre pair"; // FR : la réponce si le nombre est pair
	}
	else // si le nombre n'est pas pair
	{
		std::cout << nombre1 << " est un nombre impair"; // FR : la réponce si le nombre est impair
	}
}


//plan de tests
// KM : Excellent plan de tests. Il manque peut-être 0 comme valeur.
/*
nombre1					résultats escompté
2						est pair
5						est impair	
-1						est impair
-2						est pair
*/
