/*
//Write and run a program that reads a six-digit integer and prints the sum of its six digits.
#include<iostream>
using namespace std;
int main()
{
    int integer, a, b, c, d, e, f, sum, number;
    cout << "Enter a Six Digit Integer  :";
    cin >> integer;
    if (integer < 100000)
    {
        cout << "The Entered Number is Less than 6 Digits" << endl;
    }
    else if (integer > 999999)
    {
        cout << "The Entered Number is Greater than 6 Digits" << endl;
    }
    else
    {
        a = integer % 10;

        integer = integer / 10;
        b = integer % 10;

        integer = integer / 10;
        c = integer % 10;

        integer = integer / 10;
        d = integer % 10;

        integer = integer / 10;
        e = integer % 10;

        f = integer / 10;

        sum = a + b + c + d + e + f;

        cout << "The SUM of Six Digit Integer is :  " << sum;
    }
    return 0;
}
*/