/*
#include<iostream>
using namespace std;
int findprime(int count)
{
	bool flag = true;
	if (count == 1)
		flag = false;
	else
		for (int n = 0; n < count; n++)
		{
			if (count % n == 0)
				flag = false;
		}
	return flag;
}
int main()
{
	int size = -1, array[10], start = 0, end = 0, count, result;
	for (int i = 0; array[i - 1] != -1; i++)
	{
		cout << "Enter the Number or press -1 to END : ";
		cin >> array[i];
		size++;
	}
	cout << "Enter the Starting Index Range : ";
	cin >> start;
	cout << "Enter the Ending Index Range : ";
	cin >> end;
	if (start<0 || end >size - 1)
	{
		start = 0;
		end = size;
	}
	int check[end] = { 0 };
	for (int i = start; i < end; i++)
	{
		count = 0;
		if (check[i] != 1)
		{
			for (int j = start; j < end; j++)
			{
				if (array[i] == array[j])
				{
					count++;
				}
			}
			result = findprime(count);
			if (result == true)
			{
				cout << "Frequency of " << array[i] << " is prime frequency which is " << count << endl;
			}
		}
	}
	return 0;
}
*/