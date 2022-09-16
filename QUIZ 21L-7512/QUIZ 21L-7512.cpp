#include<iostream>
using namespace std;
int main()
{
	int day, month;
	cout << "Enter your Birthdate for Horoscope : ";
	cout << "Day : ";
	cin >> day;
	cout << "Month : ";
	cin >> month;
	if (month == 1)
	{
		if (day >= 20 && day <= 31)
			cout << "Aquarious";
		else if (day >= 1 && day <= 19)
			cout << "Caprocon";
	}
	else if (month == 2)
	{
		if (day >= 20 && day <= 31)
			cout << "Pisces";
		else if (day >= 1 && day <= 19)
			cout << "Aquarious";
	}
	else if (month == 3)
	{
		if (day >= 20 && day <= 31)
			cout << "Aries";
		else if (day >= 1 && day <= 19)
			cout << "Pisces";
	}
	else if (month == 4)
	{
		if (day >= 1 && day <= 22)
			cout << "aries";
		else if (day >= 23 && day <= 31)
			cout << "Taurus";

	}

	else if (month == 5)
	{
		if (day >= 1 && day <= 22)
			cout << "Taurus";
		else if (day >= 23 && day <= 31)
			cout << "Gemini";

	}
	else if (month == 6)
	{
		if (day >= 1 && day <= 22)
			cout << "Gemini";
		else if (day >= 23 && day <= 31)
			cout << "Cancer";

	}
	else if (month == 7)
	{
		if (day >= 1 && day <= 22)
			cout << "cancer";
		else if (day >= 23 && day <= 31)
			cout << "leo";

	}
	else if (month == 8)
	{
		if (day >= 1 && day <= 22)
			cout << "leo";
		else if (day >= 23 && day <= 31)
			cout << "virgo";

	}
	else if (month == 9)
	{
		if (day >= 1 && day <= 22)
			cout << "virgp";
		else if (day >= 23 && day <= 31)
			cout << "scorpio";
	}
	else if (month == 10)
	{
		if (day >= 1 && day <= 21)
			cout << "libra";
		else if (day >= 22 && day <= 31)
			cout << "scorpio";
	}
	else if (month == 11)
	{
		if (day >= 1 && day <= 22)
			cout << "scorpio";
		else if (day >= 23 && day <= 31)
			cout << "saggittarius";

	}
	else if (month == 12)
	{
		if (day >= 1 && day <= 22)
			cout << "saggittarius";
		else if (day >= 23 && day <= 31)
			cout << "capricon";

	}
	else
		cout << "Invalid inputs ";
	return 0;
}