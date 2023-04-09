#include "Bat.h"

void Batsman::Information_Of_Batsman()
	{
		cout<<"ENTER JERSEY NUMBER: ";
		cin>>jerseyNumber;
		cout<<"ENTER NAME: ";
		cin>>Name;
		for(int i=0;i<3;i++){
		cout<<"ENTER RANKING: (ODI,T20,TESTS): ";
		cin>>Ranking[i];	
		}
		cout<<"BATTING STYLE:";
		cin>>BattingStyle;
		cout<<"TOTAL SCORE: ";
		cin>>Totalscore;
		cout<<"TOTAL AVERAGE: ";
		cin>>Average;
		cout<<"STRIKE RATE: ";
		cin>>Strike_rate;
	}
		void Batsman::Batting ()
	{
			cout<<"\n";
		cout<<"Batsman is Hitting the Ball "<<endl;
		cout<<"Batsman is Running and Taking Singles and Doubles "<<endl;
	}
	void Batsman::Display_Data(){
			cout<<"\n";
		cout<<"Jersey Number: "<<jerseyNumber<<endl;
		cout<<"Name of Player: "<<Name<<endl;
		for(int j=0;j<3;j++){
			cout<<"Ranking of Batsman: (ODI,T20,TESTS): "<<Ranking[j]<<endl;
		}
		cout<<"Batting Style: "<<BattingStyle<<endl;
		cout<<"Total Score: "<<Totalscore<<endl;
		cout<<"Total Average: "<<Average<<endl;
		cout<<"Total StrikeRate: "<<Strike_rate<<endl;
	}