#include<iostream>
using namespace std;
class students
{
    public :
	int sapId;
	string name;
	int semester;
	float cgpa;
	    students()
	    {
	       sapId=0;
	       name='0';
	       semester=0;
	       cgpa=0;
		}
		~students()
		{
			cout<<"DESTRUCTOR EXECUTES JUST FOR CHECKING!"<<endl;
		 	  sapId;
		 	  name;
		 	  semester;
		 	  cgpa;
		}
		students (students &s4)
		{
			sapId = s4.sapId;
			name = s4.name;
			semester = s4.semester;
			cgpa = s4.cgpa;
		}
		students(int s1,string n)
		{
			sapId=s1;
			name=n;
		}
	    students(int id, string n,int s2,float c)
	    {
	    	sapId=id;
	    	name=n;
	    	semester=s2;
	    	cgpa=c;
		}
		students(string n2,float c2)
		{
			name=n2;
			cgpa=c2;
		}
		void show1()
		{
			cout<<"The SAD ID IS: "<<sapId<<endl;
			cout<<"Name is: "<<name<<endl;
			cout<<".............................."<<endl;
		}
		void show2()
		{
			cout<<"The Sap Id is: "<<sapId<<endl;
			cout<<"The name is: "<<name<<endl;
			cout<<"Semester is:"<<semester<<endl;
			cout<<"Cgpa is: "<<cgpa<<endl;
			cout<<".............................."<<endl;
		}
		void show3()
		{
			cout<<"The Name is: "<<name<<endl;
			cout<<"The Cgpa is: "<<cgpa<<endl;
		}
	
};

int main()
{
	students s3(47170,"ZEESHAN");
	s3.show1();
	students s4(43567,"REHMAN",2,3.1);
	s4.show2();
	students s5("TAUHEED",3.2);
	s5.show3();
}
