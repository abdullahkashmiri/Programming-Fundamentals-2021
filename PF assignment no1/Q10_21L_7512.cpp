/*
//Write a simple C++ Calculator.
//You will take two numbers from the user as input.
//Then the user will be asked to enter the operator. (Operator will be a single character.)
//For now operator can only be one of these{ ‘ + ’,’ - ’,’ * ’,’ / ’,’ % ’ }.
//After taking that operator you will compute the resultand output.
#include<iostream>
using namespace std;
int main()
{
    char oper;
    int num1,num2, result;
    
    cout << "CALCULATOR \nEnter the First Number : " << endl;
    cin >> num1;
    cout << "Enter the Second Number : "<<endl;
    cin >> num2;
    cout << "Enter the Operator [+,-,/,*,%] : "<<endl;
    cin >> oper;

    if (oper == '+')
    {
        result = (num1 + num2);
        cout << "Result : " << result << endl;
    }
    
    else if  (oper == '-')
    {
        result=(num1 - num2);
        cout << "Result : " << result << endl;
    }
  
    else if (oper == '/')
    {
      result = num1 / num2;
      cout << "Result : " << result << endl;
    }

    else if (oper == '*')
    {
     result = num1 * num2;
     cout << "Result : " << result << endl;
    }

    else if (oper == '%')
    {
        result = num1 % num2;
        cout << "Result : " << result << endl;
    }
    else
        cout << "Entered Incorrect Inputs !!"<<endl;
    return 0;
}
*/