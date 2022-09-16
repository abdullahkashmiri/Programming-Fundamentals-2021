/*Write a function that returns an integer and accepts a character array as an argument.
The function should count the number of characters in the character array and return that
number. Demonstrate the function in a simple program that asks the user to input a string,
passes it to the function, and then displays the function’s return value.*/

/*
#include<iostream>
using namespace std;

int countfunction(char line[], int size, int count)
{
	while (line[count] != '\0')
		count++;
	return count;
}
int main()
{
	const int size = 50;
	char line[size];
	int result;
	int count = 0;
	cout << " Enter a sentence of no more than " << (size - 1) << " characters  : " << endl;
	cin.getline(line, size);
	result = countfunction(line, size, count);
	cout << result << endl;
	system("pause");
	return 0;
}
*/