#pragma once
class GameParameters
{
private:
	int mktDemand;
	int numRounds;

public:
	

	int GetMktDemand() {
		return mktDemand;
	}

	void SetMktDemand(int demand) {
		mktDemand = demand;
	}

	int GetNumRounds() {
		return numRounds;
	}

	void SetNumRounds(int rounds) {
		numRounds = rounds;
	}
};

