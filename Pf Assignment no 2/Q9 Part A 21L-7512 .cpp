/*#include<iostream>
using namespace std;
int main()
{
	// Initiling all variables used
	int curdate, birdate, curmon, birmon, curyear, biryear;
	//asking user for dates
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
	// checkin for Date of birth
	//check year
	if (biryear <= 2021)
	{
		// check month
		if (birmon > 0 && birmon < 12)
		{
			//check month with days 31
			if ((birmon == 1 || birmon == 3 || birmon == 5 || birmon == 7 || birmon == 8 || birmon == 10 || birmon == 12) && (birdate > 0 && birdate <= 31))
			{
				cout << "Date of Birth is Correct" << endl;
			}
			//check month with days 30
			else if ((birmon == 4 || birmon == 6 || birmon == 9 || birmon == 11) && (birdate > 0 && birdate <= 30))
			{
				cout << "Date of Birth is Correct" << endl;
			}//check february
			else if ((birmon == 2) && (birdate > 0 && birdate < 28))
			{
				cout << "Date of Birth is Correct" << endl;
			}//checking for leap year (feb 29)
			else if (((birmon == 2) && (birdate == 29)) && ((biryear % 4 == 0)))
			{
				cout << "Date of BIrth is Correct" << endl;
			}
			else
				cout << "Incorrect Date of Birth" << endl;
		}
		else
			cout << "Incorrect Date of Birth" << endl;
	}
	else
		cout << "Incorrect Date of Birth" << endl;

	// Checking for current year
	//check year
	if (curyear <= 2021)
	{
		//check month
		if (curmon > 0 && curmon < 12)
		{
			//check for month having days 31
			if ((curmon == 1 || curmon == 3 || curmon == 5 || curmon == 7 || curmon == 8 || curmon == 10 || curmon == 12) && (curdate > 0 && curdate <= 31))
			{
				cout << "Current Date is Correct" << endl;
			}
			//check for month having days 30
			else if ((curmon == 4 || curmon == 6 || curmon == 9 || curmon == 11) && (curdate > 0 && curdate <= 30))
			{
				cout << "Current Date is Correct" << endl;
			}
			//check for feburary
			else if ((curmon == 2) && (curdate > 0 && curdate < 28))
			{
				cout << "Current Date is Correct" << endl;
			}
			//check for leap year (feb 29)
			else if (((curmon == 2) && (curdate == 29)) && ((curyear % 4 == 0)))
			{
				cout << "Current Date is Correct" << endl;
			}
			else
				cout << "Incorrect Current Date " << endl;
		}
		else
			cout << "Incorrect Current Date " << endl;
	}
	else
		cout << "Incorrect Current Date " << endl;

	// Checking for Correctness for AGE Calculation
	if (biryear < curyear)
	{
		cout << "Both Dates are Correct for AGE Calculation" << endl;
	}
	else if (biryear == curyear)
	{
		if (curmon >= birmon)
			cout << "";
		{
			if (birdate > curdate)
			{
				cout << "Both Dates are Correct for AGE Calculation" << endl;
			}
		}

	}
	else
		cout << "Invalid Dates for Age Calculation" << endl;



	return 0;

}
*/