/*#include<iostream>
using namespace std;
int main()
{
	int start, end, t1 = 0, t2 = 1, nextterm = 1;
	cout << "Enter from Where you want to Start : ";
	cin >> start;
	cout << "Enter the Fibonacci Till Where you want to End : ";
	cin >> end;
	//for first two fibonacci
	if (start == 0)
		cout << t1 << "," << t2 << ",";
	for (int n = 1; n < end; n++)
	{
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		// Display all numbers between start and end
		if (nextterm > start && nextterm < end)
		{
			cout << nextterm << ",";
		}
	}
	return 0;
}*/