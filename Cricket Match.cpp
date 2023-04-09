#include "Bat.cpp"
#include "Ball.cpp"
#include "WK.cpp"
#include "AR.cpp"

int main(){
	Batsman B1;
	Bowler B2;
    WicketKeeper Wk;
	AllRounder Ar;
	
	int opt;
	char again;
	do{
	system("cls");
	cout << "Cricket Match Simulator" << endl;
	cout << "============================" << endl << endl;
	cout <<"1.Add Batsman Details"<<endl;
	cout<<"2.See Batting of Batsman"<<endl;
	cout<<"3.See Batsman Details"<<endl;
	cout<<"4.Add Bowler Details"<<endl;
	cout<<"5.See Bowler is Bowling"<<endl;
    cout<<"6.Display Bowler Details"<<endl; 
	cout<<"7.Add WicketKeeper Details"<<endl;
	cout<<"8.See WicketKeeper Playing"<<endl;
	cout <<"9.Display WicketKeeper Details"<<endl; 
	cout<<"10.Add All-Rounder Details"<<endl; 
	cout<<"11.See All-Rounder Playing "<<endl;
	cout <<"12.Display All-Rounder Details"<<endl;
	cout<<"13. Exit " <<endl;
	cout << "Select Option: ";
	cin >> opt;
	switch(opt){
		case 1:
		system("cls");			
			B1.Information_Of_Batsman();
			break;
		case 2:
			system("cls");
			B1.Batting();
			break;
		case 3:
		system("cls");			
			B1.Display_Data();
			break;
		case 4:
			system("cls");
			B2.Bowler_Info();
			break;
		case 5:
			system("cls");
			B2.Bowling();
			break;
		case 6:
			system("cls");
			B2.Display_Details();
			break;
		case 7:
			system("cls");
			Wk.WicketKeeper_Info();
			break;
		case 8:
			system("cls");
			Wk.Keeper();
			break;
		case 9:
			system("cls");
			Wk.DisplayData();
			break;
		case 10:
			system("cls");
			Ar.Info_Of_AllRounder();
			break;
		case 11:
			system("cls");
			Ar.Allrounder();
			break;
		case 12:
			system("cls");
			Ar.Details_of_AllRounder();
			break;
		case 13:
			system("cls");
			cout << "Thank You For Using!!!" << endl;
			break;
		default:
			system("cls");
			cout << "Invalid Entry!!!" << endl;
			break;
		}
	cout << "Want to use again (Y/N)?";
	cin >> again;
	}
	while(again == 'y' || again == 'Y');
		system("cls");
	
	return 0;
}
