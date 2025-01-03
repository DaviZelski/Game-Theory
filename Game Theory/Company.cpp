#include "Company.h"
#include <string>

using namespace std;


Company::Company(string name, double price)
	: Name(name), Price(price) {
	this->setProfit(0.0);
	this->setPrice(price);
}

void Company::setPrice(double price) {
	Price = price;
}

double Company::getPrice() const{
	return Price;
}

void Company::setProfit(double profit) {
	Profit = profit;
}

double Company::getProfit() const{
	return Profit;
}