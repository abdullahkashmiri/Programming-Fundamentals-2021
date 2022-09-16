/*#include<iostream>
using namespace std;
//Function for Prime Number
int checkprime (int num , bool flag ,int input)
{
	//Condition for Prime number
	for (int n = 2; n < num; n++)
	{
		if (num % n == 0)
		{
			flag = true;
		}
	}
	return flag;
}
int main()
{
	int result, num, input;
	bool flag;
	flag = false;
	//Taking Inputs From the user
	cout << "Enter the Number of Inputs : ";
	cin >> input;
	cout << "Enter the Number : ";
	cin >> num;
	//Asking Numbers from the user till he wants
	for (int a = 1; a <= input; a++)
	{
		//Applying the function for checking prime number
		result = checkprime(num, flag, input);

		if (result == false)
		{
			cout << "Its a Prime Number" << endl;
		}
		else
		{
			cout << "Its not Prime Number" << endl;
		}
		//Condition for again asking number from user
		if (a < input)
		{
			cout << "Enter the Number : ";
			cin >> num;
		}
	}
	return 0;
}
*/