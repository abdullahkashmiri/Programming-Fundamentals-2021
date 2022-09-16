/*
//Write and run a program that reads a six-digit integer and prints the sum of its six digits.
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter First Number  : ";
    cin >> num1;
    cout << "Enter Second Number  : ";
    cin >> num2;

    if ((num1 > num2) & (num1 % num2) == 0)
        cout << "Multiple" << endl;

    else if ((num2 % num1) == 0)
        cout << "Multiple" << endl;

    else cout << "Not Multiple" << endl;

    return 0;
}
*/