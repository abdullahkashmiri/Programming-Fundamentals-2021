//Write a program which adds all the natural numbers below 3000
//  and greater than 500 that are multiples of 3 or 5 but not both.
/* #include<iostream>
using namespace std;
int main()
{
	int tsum = 0,sum=0;
	for (int num = 501; num < 3000; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			tsum = tsum + num;

			if (num % 3 == 0 && num % 5 == 0)
			{
				sum = sum + num;
			}
		}
	}tsum = tsum - sum;
	cout << "Sum is : " << tsum;
	return 0;
}
*/