#ifndef WK_H
#define WK_H
#include "Player.h"

class WicketKeeper : public Players {
	   public : 
	    string Battingstyle;
	    int Total_catches;
	    int Total_stumps;
	    void WicketKeeper_Info();
	
		void Keeper();
		void DisplayData();
		
};

#endif