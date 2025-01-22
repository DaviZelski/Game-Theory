#include "GameParameters.h"
#include <stdexcept>
#include <iostream>

GameParameters::GameParameters(int rounds, int demand) : numRounds(rounds), mktDemand(demand) {
		validate(rounds, demand);
		std::cout << "Parameters created successfully: \nRounds: " << rounds << "\nDemand: " << demand << std::endl;
	
}

GameParameters::GameParameters() {
	this->SetNumRounds(1);
	this->SetMktDemand(1);
}

void GameParameters::validate(int rounds, int demand) {
	if (rounds <= 0) {
		throw std::invalid_argument("Negative or null rounds are not allowed.");
	}

	if (demand <= 0) {
		throw std::invalid_argument("Negative or null demand is not allowed. ");
	}
}