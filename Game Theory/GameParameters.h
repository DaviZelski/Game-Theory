#pragma once


void startGame();

class GameParameters {
public: 

	GameParameters(int rounds, double demand) {
		numRounds = rounds;
		mktDemand = demand;
}


private: 
	int numRounds;
	double mktDemand;

};

