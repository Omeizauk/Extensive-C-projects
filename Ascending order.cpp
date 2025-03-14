#include <iostream>
using namespace std;

int main()
{
	 
	int a, b, c, t;
	cout<<"Enter a value for a"<<endl;
	cin>>a;
	
	cout<<"Enter a value for b"<<endl;
	cin>>b;
	
	cout<<"Enter a value for c"<<endl;
	cin>>c;
	
	
	for (int i = 0; i < 3; i++)
	{
	
		if(a > b)
			{
				t = a;
				a = b;
				b = t;
			}
		else if(b > c)
			{
				t = b;
				b = c;
				c = t;
			}
	}
	
	cout<<"a, b and c in ascending order are \n";
	cout<<a<<", "<<b<<", "<<c;
	
	
	return 0;
}
