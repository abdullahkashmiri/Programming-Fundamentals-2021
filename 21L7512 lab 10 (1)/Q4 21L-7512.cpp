/*Modify the program you wrote for Question#3 (Word Counter), so it also displays the average
number of letters in each word.*/

/*
#include<iostream>
using namespace std;

int countfunction(char array[], int size, int count)
{
	while (array[count] != '\0')
		count++;
	return count;
}
int space(char array[], int size, int count, int sum)
{
	sum = 0;
	int x = 0;
	while (array[count] != '\0' && x < size)
	{
		if (array[x] == ' ')
		{
			sum = sum + 1;
		}
		x++;
	}
	return sum;

}

int main()
{
	const int size = 20;
	char array[size];
	int count = 0;
	float result;
	int sum = 0;
	float total = 0, tletters;
	float average;
	cout << "Enter the Sentence of no more than " << size - 1 << " Characters : " << endl;
	cin.getline(array, size);

	result = space(array, size, count, sum);
	total = countfunction(array, size, count);
	tletters = total - result;
	result = result + 1;
	average = tletters / result;
	cout << average<<endl;
	system("pause");
	return 0;
}
*/