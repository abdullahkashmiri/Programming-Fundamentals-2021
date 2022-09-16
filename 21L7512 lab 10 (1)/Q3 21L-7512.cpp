/*Write a function that accepts a C-string as an argument and returns the number of words
contained in the string. For instance, if the string argument is “Four score and seven years ago”
the function should return the number 6. Demonstrate the function in a program that asks the
user to input a string and then passes it to the function. The number of words in the string should
be displayed on the screen.*/

/*
#include<iostream>
using namespace std;
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
	int result, sum = 0;
	cout << "Enter the Sentence of no more than " << size - 1 << " Characters : " << endl;
	cin.getline(array, size);

	result = space(array, size, count, sum);
	cout << result << endl;

	system("pause");
	return 0;
}
*/