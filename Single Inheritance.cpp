
// Single Inheritance

#include<iostream>
using namespace std;


class one {
	
	public :
	string name;
	void getname(){
		cout<<"ENTER NAME : ";
		cin>>name;
	}
	private : 
	string department;
	void getdepartment(){
		cout<<"ENTER DEPARTMENT: ";
		cin>>department;
	}
	protected :
	int salary;
		void getsalary(){
		cout<<"ENTER SALARY: ";
		cin>>salary;
	}
public:
	// constructor 
	one ()
	{
		name = "\0";
		department = "\0";
		salary = 0;
		cout<<"Constructor is running !"<<endl;
	}
	
		one (string n,string d,int s)
	{
		name = n;
		department = d;
		salary = s;
	}
	
	
	
	// destructor
	~ one (){
		
	}
	
};

class Two : public one {
	private :
	string name;
	void Getname(){
		cout<<"ENTER NAME : ";
		cin>>name;
	}
	public : 
	string department;
	void getdepartment(){
		cout<<"ENTER DEPARTMENT: ";
		cin>>department;
	}
	protected :
	int salary;
		void getsalary(){
		cout<<"ENTER SALARY: ";
		cin>>salary;
	}

};



int main()
{
	Two T2;
	T2.getdepartment();
	T2.getname();
}
