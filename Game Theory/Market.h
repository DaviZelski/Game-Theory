#pragma once
#include <vector>
#include <iostream>
#include "GameParameters.h"

class Market
{
public:
	int numCompanies;
	
	Market();

	Market(int demand, int companies) : totalDemand(demand), numCompanies(companies) {
		std::cout << "Market initialized with " << totalDemand << " total demand and " << numCompanies << " companies" << std::endl;
	}
	//Distribute Demand: Calculates market shares for each company based on their prices.

	//Calculate Profits: Computes profits for each company using demand shares and their respective prices.

	// Update Market :Updates the market state for the next round, incorporating changes in prices or company strategies.

	//Get Market Data: Provides the current state of the market(e.g., demand shares, profits, and prices).

	//Print Market Summary: Outputs the current market state for debugging or analysis.
private:
	int totalDemand;
	std::vector<int> companyShares;
	std::vector<double> companyPrices;
};

