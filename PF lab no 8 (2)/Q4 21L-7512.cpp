/*#include<iostream>
using namespace std;

void pairsum(int num, int array[])
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = x+1 ; y < 10;  y++)
		{
			if (array[x] + array[y] == num)
			{
				cout << "The Sum of Numbers " << array[x] << " + " << array[y] << " = " << num << endl;
			}
		}
	}
}
int main()
{
	int num;
	int aarray[10];
	for (int n = 0; n < 10; n++)
	{
		cout << "Enter the Value of index no " << n << " : ";
		cin >> aarray[n];
	}
	cout << "Enter the sum for two numbers : ";
	cin >> num;
	pairsum(num, aarray);
	system("pause");
	return 0;
}
*/