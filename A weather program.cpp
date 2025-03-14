#include <iostream>
#include <string>
using namespace std;

int main()
{
	string weather, raining, snowing;
	double temp;
	 
	//Try and make an if statement for what to wear in cirtain temperature
	cout<<"Is it raining or snowing"<<endl;
	cin>>weather;
	
	
	
	if(weather == "raining")
	{
		cout<<"The temperature is: ";
		cin>>temp;
		if(temp <= 45)
		{
		cout<<"You should wear a thick rain coat"<<endl;
		}
		else
		{
			cout<<"Wear a thin rain coat"<<endl;
		}
	}
	else if(weather == "snowing")
	{
		cout<<"What is the temperature: ";
		cin>>temp;
		
		if (temp <= 45 && temp >= 30)
		{
			cout<<"It is a really cold day go and wear a light sweater"<<endl;
		}
		else if (temp < 30 && temp > 10)
		{
			cout<<"The weather is way to cold wear a very thick sweater"<<endl;
		}
		else
		{
			cout<<"Do not come outside"<<endl;
		}
	}
	else
	{
		cout<<"The weather is amazing"<<endl;
	}
				
	
	
	
	
	return 0;
}
