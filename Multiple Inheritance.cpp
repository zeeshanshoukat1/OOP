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
	void gEtdepartment(){
		cout<<"ENTER DEPARTMENT: ";
		cin>>department;
	}
	protected :
	int salary;
		void getsaLary(){
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

class Two {
	
	private :
	string name;
	void getname(){
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
		void getSalary(){
		cout<<"ENTER SALARY: ";
		cin>>salary;
	}
public:
	// constructor 
	 Two ()
	{
		name = "\0";
		department = "\0";
		salary = 0;
		cout<<"Constructor is running !"<<endl;
	}
	
		Two (string n,string d,int s)
	{
		name = n;
		department = d;
		salary = s;
	}
	// destructor
	~ Two (){
		
			}
			
};

class Three {
	
	protected :
	string name;
	void getName(){
		cout<<"ENTER NAME : ";
		cin>>name;
	}
	private : 
	string department;
	void getDepartment(){
		cout<<"ENTER DEPARTMENT: ";
		cin>>department;
	}
	public :
	int salary;
		void getsalary(){
		cout<<"ENTER SALARY: ";
		cin>>salary;
	}
public:
	// constructor 
	Three ()
	{
//		name = "\0";
//		department = "\0";
//		salary = 0;
		cout<<"Constructor is running !"<<endl;
	}
	
		Three (string n,string d,int s)
	{
		name = n;
		department = d;
		salary = s;
	}
	// destructor
	~ Three (){
		
	}
};

class Four : public one, public Two , public Three {
		public :
	string name;
	void getname(){
		cout<<"ENTER NAME : ";
		cin>>name;
	}
		private : 
	string department;
	void Getdepartment(){
		cout<<"ENTER DEPARTMENT: ";
		cin>>department;
	}
		protected :
	int salary;
		void GEtsalary(){
		cout<<"ENTER SALARY: ";
		cin>>salary;
	}	
};

int main(){
	Four F4;
	F4.getname();
	F4.getdepartment();
	F4.getsalary();
}	
