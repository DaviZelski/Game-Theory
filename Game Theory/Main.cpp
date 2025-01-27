#include "GameParameters.h"
#include "Market.h"
#include <stdexcept>
#include <iostream>
#include <string>



int main() {

	GameParameters params;

	std::cout << "Please input the amount of rounds and the initial product demand" << std::endl;


	try {
		params = GameParameters (100000, 10000);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	/*for (int i = 0; i < params.GetNumRounds(); i++) {
		std::cout << i << std::endl;
	}*/

	

	std::cout << "Please input the amount of companies competing in the market, or press ENTER to use the default minimum of 2 companies" << std::endl;
	std::string competition;
	int competitionSize;
	std::getline(std::cin, competition);
	
	if (!competition.empty()) {

		competitionSize = std::stoi(competition);
		Market market(params.GetMktDemand(), competitionSize);
	}
	else {
		competitionSize = 2;
		Market market(params.GetMktDemand(), competitionSize);
	}

	std::cout << "Initializing first company:\nType in the company's name, initial product price and initial product cost" << std::endl;

	


	return 0;
}