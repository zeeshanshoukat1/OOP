#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Players{
	public : 
	int jerseyNumber;
	string Name;
	int Ranking[3];
	
	Players(){
		jerseyNumber=0;
		Name=" ";
		Ranking[3]=0;
	}
	~ Players (){	}
};

#endif