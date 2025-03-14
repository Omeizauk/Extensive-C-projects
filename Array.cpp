#include <iostream>
using namespace std;

int max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	 /* int sum;
	  const int SIZE = 10;
	  int age[] = {23, 19, 18, 21, 22, 17, 19, 24, 23, 20};
	  
	  for (int i = SIZE - 1; i >= 0; i--)
	  {
		//cout<< age[i]<<", ";
		sum = sum + age[i];
	  }
	  double Average = sum / SIZE;
	  cout<<"The average of their age is = "<<Average;
	  */
	  /*
	  
	   int maximum = age[0]; // Initialize maximum with the first element of the array
	   int minimum = age[3];

    for (int i = 1; i < SIZE; ++i)
    {
        if (age[i] > maximum)
        {
            maximum = age[i]; // Update maximum if a larger value is found
        }
        else if (age[i] < minimum)
        {
        	minimum = age[i];
		}
        
    
    }
    

    cout << "The oldest age in the array is: " << maximum << endl;
    cout <<"The youngest age in the array is: "<< minimum <<endl;


	  
	*/  
	
	double sum;
	const double SIZE = 5;
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
	cout << " " << endl;
	
	double Average = sum / SIZE;
	cout << "The average score of the 5 students is : " << Average << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
