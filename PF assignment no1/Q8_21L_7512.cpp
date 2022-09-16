/*
//Write a C++ program to decide whether the given three numbers are pythagorean triple or not. This
//means you will take three numbers as input from the userand check if any order of the number holds
//the property c2 = a2 + b2.
#include<iostream>
using namespace std;
int main()
{
    int  a, b, c;
    cout << "Enter the First Number : ";
    cin >> a;
    cout << "Enter the Second Number : ";
    cin >> b;
    cout << "Enter the Third Number : ";
    cin >> c;

    if (a * a == b * b + c * c)
        cout << "Pythagoras Theorem Holds";
    else if (b * b == a * a + c * c)
        cout << "Pythagoras Theorem Holds";
    else  if (c * c == b * b + a * a)
        cout << "Pythagoras Theorem Holds";
    else
        cout << "Pythagoras Theorem does not Hold";

    return 0;
}
*/