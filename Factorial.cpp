#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
/*	int a;
	long fact = 1;
	cout<<"ENTER a";
	cin>>a;
	for(int x= a; a>1; a--)
	{
		fact = fact*a;
		cout<<"\nthe factorial of a number is = "<<fact;
	}*/
	
	
  /* int i, fact=1, number;    
  
  cout<<"Enter any Number: ";    
  
 cin>>number;
     
  for(i = 1; i <= number; i++)
  {    
      fact = fact * i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
 */
 
 //Factorial of a number using for loop.
 int i = 1;
 long fact = 1;
 long num;
 
 cout<<"Please input a number"<<endl;
 cin>>num;
 
 for(i = 1; i <= num; i++)
 {
 	fact = fact * i;
 }
 cout<<"The factorial of your number is:  "<<fact<<endl;
 
 
 /*int i = 1;                   //This solving the factorial of a users input with do-while loop.
 long fact;
 long num;
 
 cout<<"enter number"<<endl;
 cin>>num;
 do
 {
 	fact = fact * i++;
  } 
  while(i <= num);
  cout<<"The factorial is "<<fact<<endl;
 */
  return 0;  

	
}
