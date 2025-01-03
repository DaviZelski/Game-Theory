#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "Company.h"
#include <iostream>
#include "GameParameters.h"

using namespace std;


int main() {

	startGame();

	string name;
	double price;
	
	cout << "2 Empresas competindo no mercado. Digite o nome da primeira empresa: " << endl;
	cin >> name;
	
	cout << "Digite o preço do produto: " << endl;
	cin >> price;
	
	Company c1(name, price);

	cout << c1.Name << "\n" << c1.getPrice() << endl;

	

	cin.get();
	return 0;
}
