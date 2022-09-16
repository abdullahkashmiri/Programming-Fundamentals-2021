/*Write a program which displays the prime frequency of each element within a given range. If the given
range index is not within the array boundary (Starting Index of an array or Ending Index of an array),
select the nearest boundary index.

Sample Input: Enter the Array. Enter -1 to exit: 4 3 9 1 51 4 4 7 7 3 7 9
Enter Starting Range Index: 2
Enter Ending Range Index: 7
Sample Output:
Frequency of 4 is prime frequency which is 2
Note: Prime frequency of an element means the number of occurrences of that element should be a prime number.

#include<iostream>
using namespace std;
int main()
{
	int size = 0, array[10];
	for (int i = 0; array[i-1] != -1 ; i++)
	{
		cout << "Enter the Number or press -1 to END : ";
		cin >> array[i];
	//	if (array[i] != -1)
		{
			size++;
		}
	}

	for (int i = 0; i < size; i++) 
	{
		cout << array[i];
	}


	return 0;
}
*/