/*#include<iostream>
using namespace std;
int main()
{
	int curdate, birdate, curmon, birmon, curyear, biryear, agedate, agemonth, ageyear;
	cout << "Enter the Date of Birth  " << endl;
	cout << "Day : ";
	cin >> birdate;
	cout << "Month : ";
	cin >> birmon;
	cout << "Year : ";
	cin >> biryear;
	cout << "Enter the Current Year : " << endl;
	cout << "Date : ";
	cin >> curdate;
	cout << "Month : ";
	cin >> curmon;
	cout << "Year : ";
	cin >> curyear;
	{
		if (birdate > curdate)
		{
			if (birmon == 2 || birmon == 4 || birmon == 6 || birmon == 8 || birmon == 9 || birmon == 11 || birmon == 1)
			{
				agedate = (curdate + 31) - birdate;
			}
			else if (birmon == 12 || birmon == 10 || birmon == 7 || birmon == 5)
			{
				agedate = (curdate + 3) - birdate;
			}
			else if (birmon == 3 && biryear % 4 == 0)
			{
				agedate = (curdate + 28) - birdate;
			}
			else
			{
				agedate = (curdate + 29) - birdate;
			}
		}
		if (birdate <= curdate)
		{
			agedate = curdate - birdate;
		}
		if (birmon > curmon)
		{
			agemonth = (curmon + 12) - birmon;
			ageyear = (curmon - 1) - birmon;
		}
		else if (curmon > birmon)
		{
			agemonth = curmon - birmon;
			ageyear = curyear - biryear;
		}
		cout << "Age is " << ageyear << " Years " << agemonth << " months and " << agedate << " Days.";
	}
	return 0;
}
*/