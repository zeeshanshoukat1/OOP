#include "WK.h"

	void WicketKeeper::WicketKeeper_Info(){
	    cout<<"\n";
		cout<<"Jersey Number: ";
		cin>>jerseyNumber;
		cout<<"Name of Bowler: ";
		cin>>Name;
		for(int j=0;j<3;j++){
			cout<<"Ranking of WicketKeeper : (ODI,T20,TESTS)"<<Ranking[j];
		}
		cout<<"ENTER BATTING STYLE: ";
		cin>>Battingstyle;
		cout<<"ENTER TOTAL NUMBER OF CATCHES: ";
		cin>>Total_catches;
		cout<<"ENTER TOTAL NUMBER OF  STUMPS: ";
		cin>>Total_stumps;
	}
	
	void WicketKeeper::Keeper(){
			cout<<"\n";
		cout<<"Keeper Collects The Ball And its Stumps!!!"<<endl;
		cout<<"Keeper Taken The Catch!!!"<<endl;
	}
		void WicketKeeper::DisplayData(){
			
			cout<<"\n";
		cout<<"Jersey Number: "<<jerseyNumber<<endl;
		cout<<"Name Of Bowler: "<<Name<<endl;
		for(int n=0;n<3;n++){
			cout<<"Ranking of Bowler : (ODI,T20,TESTS)"<<Ranking[n]<<endl;
		}
		cout<<"Batting Style: "<<Battingstyle<<endl;
		cout<<"Total Catches: "<<Total_catches<<endl;
		cout<<"Total Stumping: "<<Total_stumps<<endl;	
			
		}	
