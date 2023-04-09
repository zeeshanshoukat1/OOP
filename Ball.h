#ifndef BOWLER_H
#define BOWLER_H
#include "Player.h"

class Bowler : public Players {
	public : 
	string BowlingStyle;
	float BowlingAverage;
	float BowlingSpeed;
	int TotalWickets;
	void Bowler_Info();
	void Display_Details();
	
	void Bowling();
};

#endif