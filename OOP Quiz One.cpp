#include<iostream>
using namespace std;

void DurationCalculation(float mint)
{
      int days = mint / 1440;
	  int hours = mint / 60;
	  float min = mint - 60;
	  int sec = 60 - min;
	
	  cout<<"DAYS:"<<days<<endl;
	  cout<<"HOURS:"<<hours<<endl;
	  cout<<"MINT:"<<min<<endl;
	  cout<<"SECONDS:"<<sec<<endl;
	
}

int main()
{
	float mint=65.5;
	DurationCalculation(mint);	
}
