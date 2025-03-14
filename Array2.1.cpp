#include <iostream>
using namespace std;

int main()
{
	//How to allow the user to input the elements in the array.
	/*
	int age[3];
	
	
	cin>>age[0];
	cin>>age[1];
	cin>>age[2];
	
	cout<<"Your array is "<<age[0]<<", "<<age[1]<<", "<<age[2]<<". "<<endl;
	*/
	
	/*
	
	int oldest, youngest;
	int age[] = {20, 40, 10, 30, 50, 20, 18, 19};
	const int SIZE = 8;
	oldest = age[0];
	youngest = age[0];
	
	
	for (int i = 0; i < SIZE; i++)
	{
		if (age[i] > oldest)
			oldest = age[i];
			
		if (age[i] < youngest)
			youngest = age[i];
	}
	cout <<"The oldest in the group is --->  "<< oldest<<endl;
	cout <<"The youngest in the group is --->  "<<youngest<<endl;
	
	
	*/
	//This is a program to accept number from you and select the oldest or the smallest amongst those numbers.
	/* 
	
	int oldest, youngest;
	const int SIZE = 3;

	int age[3];
	cout<< "Please enter you age >> ";
	cin>>age[0];
	
	cout<< "Please enter you age >> ";
	cin>>age[1];
	
	cout<<"Please enter you age >> ";
	cin>>age[2];
	
	oldest = age[0];
	youngest = age[0];
	
	for (int i = 0; i < SIZE; i++)
	{
		if (oldest < age[i])
		oldest = age[i];
		
		if (youngest > age[i])
		youngest = age[i];
	}
	
	
	cout<<"The oldest person in the group is "<<oldest<<endl;
	
	cout<<"The youngest person in the group is "<<youngest<<endl;
	
	*/
	
	//USING LOOPING ALLOW INPUT INTO AN ARRAY.
	
	int age[5];
	int size = 5;
	
	for (int i = 0; i < size; i++){
		cout << "Enter number" <<endl;
		cin >> age[i];
	}
	cout << age[0] <<", "<< age[1] <<", "<< age[2]<<", " << age[3] <<", "<< age[4] <<", "<<endl;

	
	
	
	
	
	return 0;
}
