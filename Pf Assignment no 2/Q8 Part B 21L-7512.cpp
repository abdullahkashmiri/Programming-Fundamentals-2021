/*#include<iostream>
using namespace std;
int main()
{
	// initilizing variables
	int upto, t1 = 0, t2 = 1, nextterm = 1;
	cout << "Enter the Number upto you want to calculate the series : ";
	cin >> upto;
	if (upto >= 1)
	{  // condition for first two fibonacci
		cout << t1 << "," << t2;
		// condition for fobinacci less than given limit by user
		for (int n = 1;n < upto;n++)
	    {
			t1 = t2;
			t2 = nextterm;
			nextterm = t1 + t2;
			// exiting valuse till its less than upper limit given by user
			if (upto > nextterm && nextterm > 0)
			{
				cout << "," << nextterm;
			}
		}
	}
	//for negative values by user
	else
		cout << "Invalid inputs";
	return 0;
}
*/