/*
//Write a C++ program to check whether a character is an alphabet, digit or special character.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character : ";
    cin >> ch;

    if ((ch >= 'a' & ch <= 'z') || (ch >= 'A' & ch <= 'Z'))
        cout << "It is an Alphabet : " << ch;

    else if (ch >= '0' & ch <= '9')
        cout << "It is a Digit : " << ch;
    else
        cout << "It is a Special Character : " << ch;

    return 0;
}
*/