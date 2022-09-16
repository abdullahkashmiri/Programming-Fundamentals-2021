/*
//Write a C++ program that takes three integer numbers from the user. Your program will first print the
//integers in ascending orderand then in descending order.You cannot use arrays to solve this problem.
//Assume all numbers are distinct.For example : if the integers given by the user are 67, -5, 3, then the
//ascending order printing will be : -5, 3, 67 and descending order printing will be 67, 3, -5.
#include<iostream>
using namespace std;
int main()
{
    {  int n1, n2, n3;

    cout << " Enter First Integer : ";
    cin >> n1;
    cout << " Enter Second Integer : ";
    cin >> n2;
    cout << " Enter Third Integer : ";
    cin >> n3;


    if (n1==n2 | n2==n3 | n3==n1)
        cout << " The Entered Numbers are Same : " << n1 << "," << n2 << "," << n3 << endl;

    else if (n1 > n2 & n2 > n3)
        cout << "The Ascending Order is : " << n3 << "," << n2 << "," << n1 << "\n" << "The Decending Order is : " << n1 << "," << n2 << "," << n3 << endl;

    else if (n2 > n1 & n1 > n3)
        cout << "The Ascending Order is : " << n3 << "," << n1 << "," << n2 << "\n" << "The Decending Order is : " << n2 << "," << n1 << "," << n3 << endl;

    else if (n2 > n3 & n3 > n1)
        cout << "The Ascending Order is : " << n1 << "," << n3 << "," << n2 << "\n" << "The Decending Order is : " << n2 << "," << n3 << "," << n1 << endl;

    else if (n3 > n1 & n1 > n2)
        cout << "The Ascending Order is : " << n2 << "," << n1 << "," << n3 << "\n" << "The Decending Order is : " << n3 << "," << n1 << "," << n2 << endl;

    else if (n1 > n3 & n3 > n2)
        cout << "The Ascending Order is : " << n2 << "," << n3 << "," << n1 << "\n" << "The Decending Order is : " << n1 << "," << n3 << "," << n2 << endl;

    else
        cout << "The Ascending Order is : " << n1 << "," << n2 << "," << n3 << "\n" << "The Decending Order is : " << n3 << "," << n2 << "," << n1 << endl;


    return 0; }
}
*/