#ifndef BATSMEN_H
#define BATSMEN_H
#include "Player.h"

class Batsman : public Players {
	public :
	string BattingStyle;
	int Totalscore;
	float Average;
	float Strike_rate; 
	void Information_Of_Batsman();
	void Batting ();
	void Display_Data();
	
};

#endif