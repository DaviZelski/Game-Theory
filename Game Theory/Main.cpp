#include "GameParameters.h"
#include "Market.h"
#include <stdexcept>
#include <iostream>
#include <string>



int main() {

	GameParameters params;
	Market market;

	try {
		params = GameParameters (10000, 10000);
	}
	catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	for (int i = 0; i <= params.GetNumRounds(); i++) {
		std::cout << i << std::endl;
	}

	std::cout << "Please input the amount of companies competing in the market, or press ENTER to use the default of 2 companies" << std::endl;
	std::string competition;
	int competitionSize;
	std::getline(std::cin, competition);
	
	if (!competition.empty()) {
		competitionSize = std::stoi(competition);
	}
	else {
		competitionSize = 2;
	}

	 market = Market(params.GetMktDemand(), competitionSize);

	


	return 0;
}