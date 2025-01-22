#pragma once
class GameParameters
{
public:

	GameParameters();

	GameParameters(int, int);

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

private:
	int mktDemand;
	int numRounds;
	void validate(int rounds , int demand);
};

