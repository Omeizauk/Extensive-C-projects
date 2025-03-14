#include <iostream>
using namespace std;

int main()
{


//To find the Average of an array.


	double sum;
	const int SIZE = 5;
	double score[5] = {score[0], score[1], score[2], score[3], score[4]};
	
	cout << "Enter your score: \n";
	cin >> score[0];
	
	cout << "Enter your score: \n";
	cin >> score[1];
	
	cout << "Enter your score: \n";
	cin >> score[2];
	
	cout << "Enter your score: \n";
	cin >> score[3];
	
	cout << "Enter your score: \n";
	cin >> score[4];
	
	for (int i = 0; i < SIZE; i++)
		{
			sum = sum + score[i];
		}
	
	cout << "The sum of the score is " << sum << endl;
	
	double avg = sum / SIZE;
	cout << "The average of the scores are:" << endl;
	cout << avg;	
	
	
	
	
	return 0;
}
