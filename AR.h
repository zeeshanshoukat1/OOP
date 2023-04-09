#ifndef AR_H
#define AR_H
#include "Bat.h"
#include "Ball.h"


class AllRounder : public Bowler, public Batsman{
	public:
	string battingStyle;
	int totalscore;
	float average;
	float strike_rate; 
	string bowlingStyle;
	float bowlingAverage;
	float bowlingSpeed;
	int totalWickets;
	
	void Info_Of_AllRounder();
	void Allrounder();
	void Details_of_AllRounder();
};

#endif