/*
//Write a C++ program that takes two inputs from user; Weight in Kg and Height in meters and calculates
//and outputs Body Mass Index(BMI).Formula of BMI in given below.
//BMI = weight in Kg / (height in Meters) 2
#include<iostream>
using namespace std;
int main()
{   
    double weight, height, bmi;

    cout << "Enter Weight in KG : ";
    cin >> weight;
    cout << "Enter Height in meters : ";
    cin >> height;

    bmi = weight/(height*height);

    cout << "The Body Mass Index (BMI) is : " << bmi << endl;

    return 0;
}
*/