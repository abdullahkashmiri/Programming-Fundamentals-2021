/*#include<iostream>
using namespace std;
int unique_element( int num , int array[] )
{
	int i = 0;
	for (int n = 0; n < 10; n++)
	{
		if (array[n] == num)
			i+=1;
	}
	if (i == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int aarray[10];

	for (int y = 0; y < 10; y++)
	{
		cout << "Enter the Number in index "<<y<<" : ";
		cin >> aarray[y];
	}
	cout << "The Unique Elements are : ";
	for (int j=0; j<10; j++)
	{
		if (unique_element(aarray[j], aarray) == 1)
		{
			cout << aarray[j] << ",";
		}
	}
	cout << endl;
	return 0;
}*/