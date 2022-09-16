/*Write a function that accepts a C-string as its argument. The function should count the number
of vowels appearing in the string and return that number.
Write another function that accepts a C-string as its argument. This function should count the
number of consonants appearing in the string and return that number.
Demonstrate these two functions in a program that performs the following steps:
1. The user is asked to enter a string.
2. The program displays the following menu:
A) Count the number of vowels in the string
B) Count the number of consonants in the string
C) Count both the vowels and consonants in the string
D) Enter another string
E) Exit the program
3. The program performs the operation selected by the user and repeats until the user selects E
to exit the program.*/
/*
#include<iostream>
using namespace std;

int count_vowels(char array[], int size, int count, int vowels)
{
	vowels = 0;
	int x = 0;
	while (array[count] != '\0' && x < size)
	{
		if (array[x] == 'a' || array[x] == 'A' || array[x] == 'e' || array[x] == 'E' || array[x] == 'i' || array[x] == 'I' || array[x] == 'o' || array[x] == 'O' || array[x] == 'u' || array[x] == 'U')
		{
			vowels = vowels + 1;
		}
		x++;
	}
	return vowels;
}

int count_consonent(char array[], int size, int count)
{
	while (array[count] != '\0')
	{
		count++;
	}
	return count;
}

int space_count(char array[], int size, int count, int sum)
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
	int vowels = 0, count = 0, total = 0, sum = 0, space = 0;
	int fvowels = 0;
	int fconsonent = 0;
	const int size = 30;
	char array[size];
	char input = 0;
top:
	cout << "Enter a Sentence of no more than " << (size - 1) << " Characters  : " << endl;
	cin.getline(array, size);

	fvowels = count_vowels(array, size, count, vowels);
	total = count_consonent(array, size, count);
	space = space_count(array, size, count, sum);
	total = total - space;
	fconsonent = total - fvowels;
	cout << "Select One : " << endl;
	cout << " (A) Count the number of vowels in the string" << endl;
	cout << " (B) Count the number of consonants in the string" << endl;
	cout << " (C) Count both the vowels and consonants in the string" << endl;
	cout << " (D) Enter another string" << endl;
	cout << " (E) Exit the program" << endl;
	cin >> input;

	if (input == 'a' || input == 'A' || input == 'b' || input == 'B' || input == 'c' || input == 'C' || input == 'd' || input == 'D' || input == 'e' || input == 'E')
	{
		while (input != 'e' && input != 'E')
		{
			if (input == 'a' || input == 'A')
			{
				cout << "The Number of Vowels in the String are : " << fvowels << endl;
			}
			else if (input == 'b' || input == 'B')
			{
				cout << "The Number of Consonents in the String are : " << fconsonent << endl;
			}
			else if (input == 'c' || input == 'C')
			{
				cout << "Both Vowels and Consonents in the String are : " << total << endl;
			}
			else if (input == 'd' || input == 'D')
			{
				cout << "Another String : " << endl;
				goto top;
			}
			else if (input == 'e' || input == 'E')
			{
				cout << "Program is Exited" << endl;
				return 0;
			}
			else
			{
				cout << "Invalid Inputs Enter Again" << endl;
			}
			cout << "Again Select : " << endl;
			cout << " (A) Count the number of vowels in the string" << endl;
			cout << " (B) Count the number of consonants in the string" << endl;
			cout << " (C) Count both the vowels and consonants in the string" << endl;
			cout << " (D) Enter another string" << endl;
			cout << " (E) Exit the program" << endl;
			cin >> input;
		}
	}
	return 0;
}
*/