/*
//Write a program that takes two integers A and B from the user and swap their values using a third
//temporary variable.
#include<iostream>
using namespace std;

int main()

{
    int  a, b;
    cout << "Enter first integer A : ";
    cin >> a;
    cout << "Enter second integer B : ";
    cin >> b;

    cout << "Before Swaping" << "\n";
    cout << "First integer A : " << a << "\n";
    cout << "Second integer B : " << b<<"\n";
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After Swaping : \n";
    cout << "First integer A : " << a<<"\n";
    cout << "Second integer B : " << b;
    return 0;
}
*/