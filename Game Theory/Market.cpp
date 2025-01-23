#include "Market.h"



Market::Market(int demand, int companies){
	setTotalDemand(demand);
	setCompanies(companies);
	std::cout << "Market initialized with " << totalDemand << " total demand and " << numCompanies << " companies" << std::endl;
}