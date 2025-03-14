#include <iostream>
using namespace std;

int main()
{
	  int oldest, youngest;
	  const int SIZE = 10;
	  int age[] = {23, 19, 18, 21, 22, 17, 19, 24, 23, 20};
	  oldest = age[0];
	  youngest = age[0];
	  for (int i = 0; i < SIZE; i++)
	  {
			if (oldest < age[i])
				oldest = age[i];
		
					if (youngest > age[i])
						youngest = age[i];
		
	  }
	  cout<<"The oldest age in the list is = "<<oldest<<endl;
	  cout<<"The youngest age in the list is = "<<youngest<<endl;
	  
	  

	  
	  
	return 0;
}
