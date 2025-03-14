#include <iostream>
using namespace std;

int main()
{
	double csc211, csc212, csc213, total, avrg;
	long mnum;

	
	cout<<"Please enter your name: "<<endl;
	cout<<"Enter your matric number: ";
	cin>>mnum;
	
	cout<<"What was your score in CSC 211 = "<<endl;
	cin>>csc211;
	cout<<"What was your score in CSC 212 = "<<endl;
	cin>>csc212;
	cout<<"What was your score in CSC 213 = "<<endl;
	cin>>csc213;
	
	total = csc211 + csc212 + csc213;
	avrg = total / 3;
	
	if (avrg < 45){
		cout<<"You failed."<<endl;
	}
	else{
		cout<<"You passed."<<endl;
	}
	
	
	
	
	return 0;
}
