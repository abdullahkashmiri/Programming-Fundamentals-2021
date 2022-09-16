/*
//Write a program which takes as input 3 points and tell whether these points are the coordinates of right angled or scalene triangle.
#include<iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3;
	cout << "Enter First Coordinate x1 : ";
	cin >> x1;
	cout << "Enter First Coordinate y1 : ";
	cin >> y1;  

    cout << "Enter Second Coordinate x2 : ";
	cin >> x2;
	cout << "Enter Second Coordinate y2 : ";
	cin >> y2;  

	cout << "Enter Third Coordinate x3 : ";
	cin >> x3;
	cout << "Enter Third Coordinate y3 : ";
	cin >> y3;  
  
	if ((x1 * x1) == (x2 * x2) + (x3 * x3))
		cout << "Right Angle Triangle";
	else if ((x2 * x2) == (x1 * x1) + (x3 * x3))
		cout << "Right Angle Triangle";
    else if ((x3 * x3) == (x1 * x1) + (x2 * x2))
		cout << "Right Angle Triangle";
	else
		cout << "Scalene Triangle";

	return 0;
}
*/