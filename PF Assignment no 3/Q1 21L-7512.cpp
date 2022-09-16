/*Write a C++ program that has an integer array of size N. The array contains N integers. You can
hardcode the elements of the array. Now the program will ask the user to enter an integer number. Your
program will tell whether the number given by the user is the summation of any three numbers in the
array. Also print the three numbers whose sum is equal to the given number.
For example, if the array is: 9, 4, 54, 23, 54, -23 0, 54, 5, 8 and the number entered by the user is 86,
then your program will print 9, 54 and 23. It is possible to have more than one triplet whose summation
equals the given number. In this case, print all triplets. Such as, if the user enters 85, then the program
willprint:
a) 54, 23, and 8
b) 54, 54, and -23*/

/*
#include<iostream>
using namespace std;
int main()
{
	int array[10] = { 9, 4, 54, 23, 54, -23 ,0, 54, 5, 8 }, number;
	//An array for Checking repeating Numbers.
	int check[3] = { 0,0,0 };
	cout << "Enter the Number : ";
	cin >> number;
	// Loops for Adding Numbers.
	for (int x = 0; x < 10; x++)

		for (int y = x + 1; y < 9; y++)
		{
			for (int z = y + 1; z < 10; z++)
			{
				if (array[x] + array[y] + array[z] == number)
				{
					//Condition for Not Repeating the same Numbers.
					if (array[x] != check[2] && array[y] != check[1] && array[z] != check[0])
					{
						cout << array[x] << "," << array[y] << "," << array[z] << endl;
						//Saving already printed Numbers.
						check[0] = array[y];
						check[1] = array[x];
						check[2] = array[z];
					}
				}
			}

		}
	return 0;
}
*/