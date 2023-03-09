#include<iostream>
#include<fstream>
using namespace std;
struct student{
	string name;
	int rollnumber;
	string department;
	float cgpa;
};
   student S1;

void Adddetails()
{	
	cout<<"ENTER THE NAME: ";
	getline(cin,S1.name);
	cout<<"ENTER THE ROLLNUMBER: ";
	cin>>S1.rollnumber;
	cout<<"ENTER THE DEPARTMENT: "; 
	cin>>S1.department;     
	cout<<"ENTER THE CGPA: ";  
	cin>>S1.cgpa; 
	fstream studentdetails;
	studentdetails.open("studentdetails.txt",ios :: app);
	if (!studentdetails) {                            
      cout<<" Error while creating the file ";          
    }
    else
	{  
         	 studentdetails<<"NAME: "<<S1.name<<endl;
         	 studentdetails<<"ROLL NUMBER: "<<S1.rollnumber<<endl;
         	 studentdetails<<"DEPARTMENT: "<<S1.department<<endl;
	         studentdetails<<"CGPA: "<<S1.cgpa<<endl;
	         studentdetails.close(); 
	}
}

void displayingdata ()
{
	system("cls");
	fstream studentdetails;
	studentdetails.open("studentdetails.txt", ios::in );
    string line;
    while(getline(studentdetails,line)) {
    cout <<line<<endl; 
}  
    studentdetails.close(); 
}
int main()
{
	cout<<"ADD DETAIL TO SEE WHETHER THE DATA IS STORED IN THE FILE! "<<endl;	
	Adddetails();
	displayingdata();
}
