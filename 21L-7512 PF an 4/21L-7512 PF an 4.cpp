#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile;
	char inputFileName[] = "assign4.txt";
	inFile.open(inputFileName);
	ofstream outfile;
	char word1[21], word2[21];
	int count1, count2, check1, check2, check3, check4, check5, fin, add;
	//Condition if file not found
	if (!inFile)
	{
		cout << "Can't open input file named " << inputFileName << endl;
		exit(1);
	}
	//Taking Inputs from the file till its not ended
	while (!inFile.eof())
	{
		inFile >> word1 >> word2;
		if (!inFile.eof())
		{
			//Making all Checks zero for calculations
			count1 = 0, count2 = 0, check1 = 0, check2 = 0, check3 = 0, check4 = 0, check5 = 0, fin = 0, add = 0;
			//Calculating letters in the array basically letters of word
			while (word1[count1] != '\0')
			{
				count1++;
			}
			while (word2[count2] != '\0')
			{
				count2++;
			}
			//Condition for Imperfect Palindrome
			//Checking if words are not similar from forwad and reverse order check1++ for word 1 and check2++ for word 2
			//Word 1
			for (int i = 0; i < count1; i++)
			{
				if (word1[i] != word1[count1 - 1 - i])
				{
					check1++;
				}
			}
			//Word 2
			for (int i = 0; i < count2; i++)
			{
				if (word2[i] != word2[count2 - 1 - i])
				{
					check2++;
				}
			}
			//Printing yes and no for imperfect palindrome
			if (check1 == 1 || check1 == 2)
			{
				cout << "  yes  ";
			}
			else
			{
				cout << "  no  ";
			}
			if (check2 == 1 || check2 == 2)
			{
				cout << "  yes  ";
			}
			else
			{
				cout << "  no  ";
			}
			// Conditions for Super Anagrams
			//Checking letters count first to check if both words have more letters than allowed frequency for final output
			if (count1 > count2)
			{
				fin = count1;
				add = count1 - count2;
			}
			if (count2 > count1)
			{
				fin = count2;
				add = count2 - count1;
			}
			if (count2 == count1)
			{
				count1 = count1;
				count2 = count2;
				add = 0;
				fin = count1;
			}
			//Conditions for checking words taking one letter from word1 and comparing it for all letters of word 2
			for (int i = 0; i < count1; i++)
			{
				for (int j = 0; j < count2; j++)
				{
					if (word1[i] == word2[j])
					{
						//Check3 increases if same letter found
						check3++;
						//Check 4 to stop repetition in count for same letter again if already counted / found
						if (check4 == word2[j])
						{
							check3--;
						}
						check4 = word1[i];
					}
					//Making check 4 zero for next letter 
					if (j == count2 - 1)
					{
						check4 = 0;
					}
				}
			}
			//Printing yes and no according to calculations made above 
			if (add > 2 || fin - check3 != 0)
			{
				cout << " no  " << endl;
			}
			else
			{
				cout << "  yes  " << endl;
			}
		}
	}
	//Closing the file
	inFile.close();
	system("pause");
	return 0;
}