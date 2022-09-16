/*
#include<iostream>
using namespace std;
int main()
{
	// Initilizing variables
	int fab, t2 = 1, t1 = 0, nextterm = 0, upto, res;
	cout << "How many Fibonacci Numbers you want to ask : ";
	cin >> upto;
	cout << "Which Fibonacci : ";
	cin >> fab;
	//for first fibonacci
	{
		// for Finonacci of 1 and 2
		if (fab == 1 || fab == 2)
		{
			cout << "F" << fab << " : " << t2 << endl;
		}
		else
		{
			//again initilizing variables for reseting their values
			res = fab;
			for (int a = 1; a <= fab; a++)
			{
				t1 = t2;
				t2 = nextterm;
				nextterm = t1 + t2;
				//when desired finonacci is obtained exit the value
				if (a == res)
				{
					cout << "F" << fab << " : " << nextterm << endl;
				}
			}

		}
	}
	for (int n = 2; n < upto; n++)
	{
		cout << "Which Next Fibonacci :  ";
		cin >> fab;
		//again initilizing and resent the value
		int t1 = 0, t2 = 1, nextterm = 0;
		res = fab;
		//for fibonacci of 1 and 2
		if (fab == 1 || fab == 2)
			cout << "F" << fab << " : " << t2 << endl;
		else
		{
			for (int a = 1; a <= fab; a++)
			{
				t1 = t2;
				t2 = nextterm;
				nextterm = t1 + t2;
				//when desired value is obtained print value
				if (a == res)
				{
					cout << "F" << fab << " : " << nextterm << endl;
				}
			}
		}
	}
	{
		// for last fibonacci
		cout << "Which Last Fibonacci you want to ask :  ";
		cin >> fab;
		// again initilizing and reseting the values
		int t1 = 0, t2 = 1, nextterm = 0;
		res = fab;
		// for fibonacci of 1 and 2
		if (fab == 1 || fab == 2)
		{
			cout << "F" << fab << " : " << t2 << endl;
		}
		else
		{
			for (int a = 1; a <= fab; a++)
			{
				t1 = t2;
				t2 = nextterm;
				nextterm = t1 + t2;
				// exiting the desired values
				if (a == res)
				{
					cout << "F" << fab <<" : "<< nextterm << endl;
				}
			}
		}

	}
	return 0;
}
*/