#include "AR.h"

	void AllRounder::Info_Of_AllRounder()
	{
		cout<<"\n";
		cout<<"BATTING STYLE:";
		cin>>battingStyle;
		cout<<"TOTAL SCORE: ";
		cin>>totalscore;
		cout<<"TOTAL AVERAGE: ";
		cin>>average;
		cout<<"STRIKE RATE: ";
		cin>>strike_rate;
		cout<<"BOWLING STYLE:";
		cin>>bowlingStyle;
		cout<<"TOTAL BOWLING AVERAGE: ";
		cin>>bowlingAverage;
		cout<<"BOWLING SPEED: ";
		cin>>bowlingSpeed;
		cout<<"TOTAL WICKETS: ";
		cin>>totalWickets;	
	}
	
	void AllRounder::Allrounder(){
			cout<<"\n";
		cout<<"Allrounder is on Batting!!"<<endl;
		cout<<"Allrounder is On Bowling!!!"<<endl;
	}
	
	void AllRounder::Details_of_AllRounder(){
			cout<<"\n";
		cout<<"Batting Style: "<<battingStyle<<endl;
		cout<<"Total Score: "<<totalscore<<endl;
		cout<<"Total Average: "<<average<<endl;
		cout<<"Total StrikeRate: "<<strike_rate<<endl;
		cout<<"Bowling Style: "<<bowlingStyle<<endl;
		cout<<"Bowling Average: "<<bowlingAverage;
		cout<<"Bowling Speed: "<<bowlingSpeed;
		cout<<"Total Wickets: "<<totalWickets;
	}