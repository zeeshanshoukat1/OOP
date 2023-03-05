#include <iostream>
using namespace std;
class duration {
public:
    int days; 
	int hours; 
	int minutes; 
	int seconds;
    duration() {
        days = 0;
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    duration(int d, int h, int m, int s) {
        days = d;
        hours = h;
        minutes = m;
        seconds = s;
    }
    duration(int sec) {
        days = sec / (24 * 3600);
        sec = sec % (24 * 3600);
        hours = sec / 3600;
        sec %= 3600;
        minutes = sec / 60 ;
        sec %= 60;
        seconds = sec;
    }
    void display() {
        cout<<"\nDays: "<<days<<endl;
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
        cout<<"Seconds: "<<seconds<<endl;
        cout<<"\n.............................\n";
        
    }
        void Seconds(int sec) {
        cout << "\nTotal duration in seconds: " << sec << " seconds" << endl;
    }
};

int main() {
    int sec;
    cout<<"Enter Your Duration: ";
    cin>>sec;
    duration D1(sec);
    D1.display();
    D1.Seconds(sec);
    return 0;
}
