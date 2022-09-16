/*
#include<iostream>
using namespace std;
int main()
{
	//TASK 1
	// Initiling all variables used
	int curdate, birdate, curmon, birmon, curyear, biryear, ageyear, agemonth, agedate;
	bool flag = true;
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
			{
				cout << "Incorrect Date of Birth" << endl;
				flag = false;
			}
		}
		else
		{
			cout << "Incorrect Date of Birth" << endl;
			flag = false;
		}
	}
	else
	{
		cout << "Incorrect Date of Birth" << endl;
		flag = false;
	}
	
	
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
				{
					cout << "Incorrect Current Date " << endl;
					flag = false;
				}
			}
			else
			{
				cout << "Incorrect Current Date " << endl;
				flag = false;
			}
		}
		else
		{
			cout << "Incorrect Current Date " << endl;
			flag = false;
		}

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
		{
			cout << "Invalid Dates for Age Calculation" << endl;
			flag = false;
		}
		if (flag == true)
		{
			//TASK 2

				//date of birth is bigger then add pervious month days
			if (birdate > curdate)
			{
				//condiotion for months having 31 days in previous month
				if (birmon == 2 || birmon == 4 || birmon == 6 || birmon == 8 || birmon == 9 || birmon == 11 || birmon == 1)
				{
					agedate = (curdate + 31) - birdate;
					curmon = curmon - 1;
				}
				//condition for monthd having 30 days in previous month
				else if (birmon == 12 || birmon == 10 || birmon == 7 || birmon == 5)
				{
					agedate = (curdate + 30) - birdate;
					curmon = curmon - 1;

				}
				//special ciondition for february leap year
				else if (birmon == 3 && biryear % 4 == 0)
				{
					agedate = (curdate + 28) - birdate;
					curmon = curmon - 1;

				}
				else
					//condition for feb without leap year
				{
					agedate = (curdate + 29) - birdate;
					curmon = curmon - 1;

				}
			}
			//condition for birth date less current date
			if (birdate <= curdate)
			{
				agedate = curdate - birdate;
			}
			//condition for birth month high
			if (birmon > curmon)
			{
				agemonth = (curmon + 12) - birmon;
				ageyear = (curyear - 1) - biryear;
			}
			//condition for birth month less 
			else if (curmon > birmon)
			{
				agemonth = curmon - birmon;
				ageyear = curyear - biryear;
			}
			//exiting age
			cout << "Age is " << ageyear << " Years " << agemonth << " months and " << agedate << " Days.";
		}
	else 
	cout << endl;
	system("pause");
	return 0;
}*/