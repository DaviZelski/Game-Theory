#pragma once
#include <iostream>
#include <string>
class Company
{
public:
	Company(std::string name, double initialPrice, double initialCost);

	void SetProductPrice(double price) {
		productPrice = price;
	}

	double GetProductPrice() {
		return productPrice;
	}

	void SetMarketShare(double share) {
		marketShare = share;
	}

	double GetMarketShare() {
		return marketShare;
	}

	//calculate profit

	void SetProductCost(double pCost) {
		cost = pCost;
	}

	double GetProductCost() {
		return cost;
	}
private:
	std::string companyName;
	double productPrice;
	double marketShare;
	double profit;
	double cost;
};

