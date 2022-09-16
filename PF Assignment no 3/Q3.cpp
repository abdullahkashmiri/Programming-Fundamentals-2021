/*Write a program that takes upto 20 integers (Capacity) ........ with -99.
1. Further your program should be able to identify the distinct elements and store it in an array
named as DistinctArray and then using the print function it should display the DistinctArray.
Distinct elements of an array are such that if an element appears more than once, then it should
be printed once only.
2. Further your program should be able to identify the unique element and store it in an array named
as UniqueArray and then using the print function it should display the UniqueArray. Unique
elements of an array are the ones which occur only once in an array.
3. Now your program should make sure that the DistinctArray should be sorted in increasing order.

Sample Input:
20 11 12 20 16 15 12 16 8 12 -99
Sample Output:
Distinct Element in Sorted (Increasing order) are: 8 11 12 15 16 20
Unique Element in Sorted(Decreasing order ) are: 15 11 8*/

/*
#include<iostream>
using namespace std;
void arrange(int array[20],)
{

}
int main()
{
	int array[20] = { 0 };
	int distinct[20] = { 0 };
	int unique[20] = { 0 };

	for (int n = 0; n < 20; n++)
	{
		cout << "Enter the number or Enter -99 to exit : ";
		cin >> array[n];
		if (array[n] == -99)
			break;
	}
	for (int n = 0; n < 20; n++)
	{
		int m;
		for(int m=0;m<n;m++)
		
		{
			if (array[n] == array[m])
				break;
		}
		if (array[n] == -99)
		{
			break;
		}
		if (n == m)
		{
			distinct[n] = array[n];
		}
	}
	arrange(distinct, 20);


	return 0;
}
*/