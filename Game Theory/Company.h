#pragma once
#include <string>

using namespace std;

class Company {
public:
	string Name;
	

	Company(string name, double price);

	double getPrice() const;
	void setPrice(double price);

	double getProfit() const;
	void setProfit(double profit);


private: 
	double Profit;
	double Price;
 };

