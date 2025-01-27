#include "Company.h"

Company::Company(std::string name, double initialPrice, double initialCost) {
	companyName = name;
	SetProductPrice(initialPrice);
	SetProductCost(initialCost);
}

