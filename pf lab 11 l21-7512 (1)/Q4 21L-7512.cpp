/*#include<iostream>
using namespace std;
bool check(int data[][6], int pattern[][3]);
int main()
{
	bool res = false;
	int data[6][6];
	int pattern[3][3];
	cout << "Enter 6X6 matrix:" << endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> data[i][j];
		}
		cout << endl;
	}
	cout << "Enter 3X3 matrix:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> pattern[i][j];
		}
		cout << endl;
	}
	res = check(data, pattern);
	if (res == true)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}
bool check(int data[6][6], int pattern[3][3])
{
	bool nature = false;
	int sum1 = pattern[0][0] + pattern[1][0] + pattern[2][0];
	int sum2 = pattern[0][1] + pattern[1][1] + pattern[2][1];
	int sum3 = pattern[0][2] + pattern[1][2] + pattern[2][2];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (sum1 == data[i][j] + data[i + 1][j] + data[i + 2][j])
			{
				if (sum2 == data[i][j + 1] + data[i + 1][j + 1] + data[i + 2][j + 1])
				{
					if (sum3 == data[i][j + 2] + data[i + 1][j + 2] + data[i + 2][j + 2])
					{
						return true;
						break;
					}
				}
			}
		}
	}
	return false;
}
*/