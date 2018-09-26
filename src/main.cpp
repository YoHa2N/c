#include <iostream>
#include "li.h"
#include "ecole.h"
//#include <stdlib.h>
using namespace std;

int main() {

	calcul a;

	cout << "somme: " << a.somme(5,10) << endl;
	cout << "multiplication: " << a.multiplication(10,10) << std::endl;
	cout << "division: " << a.division(10,2) << endl;
	cout << "soustraction: " << a.soustraction(50,15) << endl;

	//ecole date;
	//std::cout << "L'année de création est " << date.annee(1950) << std::endl;

	return 0;


}
