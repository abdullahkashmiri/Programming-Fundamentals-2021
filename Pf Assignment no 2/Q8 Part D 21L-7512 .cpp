/*#include<iostream>
using namespace std;
int main()
{
	int t1 = 0, t2 = 1, nextterm = 1,sum=0;
	//condition for less than 4 million
	while (nextterm <= 4000000)
	{
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		// condition for checking even numbers
		if (nextterm % 2 == 0)
		{
			// adding all into sum
			sum = sum + nextterm;
		}
	}
	cout << "The Sum of All the Even Fibonacci upto 4 million is : "<<sum;

	return 0;
}
*/