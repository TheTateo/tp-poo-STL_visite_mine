// tp-poo-STL_visite_mine.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>

using namespace std;

typedef enum
{
	AUCUN = 0,
	GAUCHE = 1,
	DROITE = 2,
	DROIT = 3,
	HAUT = 4,
	BAS = 5
} Deplacement;

// Pour réaliser une saisie d’un Deplacement avec cin
istream& operator>>(istream& is, Deplacement& d) {
	int tmp;
	if (is >> tmp)
		d = static_cast<Deplacement>(tmp);
	return is;
};

int main()
{
	// Exemple :
	Deplacement deplacement;

	// Un déplacement à gauche
	deplacement = GAUCHE;

	list<Deplacement> stockage_dep;

	while (deplacement != 0)
	{
		cout << "Entrez un deplacement (0: Aucun, 1: Gauche, 2: Droite, 3: Droit, 4: Haut, 5: Bas): ";
		cin >> deplacement;
		if (deplacement <= 5 && deplacement != 0)
		{
			stockage_dep.push_back(deplacement);
		}
	}

	stockage_dep.reverse();

	// Affichage des deplacements
	cout << "Deplacements: ";
	cout << endl;
	for (const auto& dep : stockage_dep) {
		cout << dep << " ";
		cout << endl;
	}
	return 0;
}