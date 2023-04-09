#include "Ball.h"

	void Bowler::Bowler_Info(){
		cout<<"\n";
		cout<<"Jersey Number: ";
		cin>>jerseyNumber;
		cout<<"Name of Bowler: ";
		cin>>Name;
		for(int j=0;j<3;j++){
			cout<<"Ranking: (ODI,T20,TESTS): "<<Ranking[j];
		}
		cout<<"BOWLING STYLE:";
		cin>>BowlingStyle;
		cout<<"TOTAL BOWLING AVERAGE: ";
		cin>>BowlingAverage;
		cout<<"BOWLING SPEED: ";
		cin>>BowlingSpeed;
		cout<<"TOTAL WICKETS: ";
		cin>>TotalWickets;			
	}
	void Bowler::Display_Details(){
			cout<<"\n";
		cout<<"Jersey Number: "<<jerseyNumber<<endl;
		cout<<"Name: "<<Name<<endl;
		for(int j=0;j<3;j++){
			cout<<"Ranking of Bowler : (ODI,T20,TESTS): "<<Ranking[j]<<endl;
		}
		cout<<"Bowling Style: "<<BowlingStyle<<endl;
		cout<<"Bowling Average: "<<BowlingAverage;
		cout<<"Bowling Speed: "<<BowlingSpeed;
		cout<<"Total Wickets: "<<TotalWickets;
	}
	
	void Bowler::Bowling(){
			cout<<"\n";
		cout<<"Bowler is Running and Bowled On a Good Length ! "<<endl;
		cout<<"Bowler is Getting Wickets !";
		
	}