/*
#include<iostream>
using namespace std;
int main()
{
int array[3][5];
int day1=0,day2=0,day3=0;
int least=1000;
int greatest=0;
int mnol=0,mnog=0;

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 5; j++)
    {
        cout << "Enter the food Eaten by Monkey " << i + 1 << " on day " << j + 1 << "  :  ";
        cin >> array[i][j];
        if (array[i][j] < 0)
        {
            cout << "INVALID INPUTS";
            system("pause");
            return 0;
        }
        if (array[i][j] < least)
        {
            least = array[i][j];
            mnol = i;
        }

        if (array[i][j] > greatest)
        {
            greatest = array[i][j];
            mnog = i;
        }

        if (i == 0)
        {
            day1 = day1 + array[i][j];

        }
        if (i == 1)
        {
            day2 = day2 + array[i][j];

        }
        if (i == 2)
        {
            day3 = day3 + array[i][j];

        }
    }
}
cout<<"The Food Eaten by Whole Famly per Day : "<<(day1+day2+day3)/15<<endl;
cout<<"The Least amount of food eaten during week is by monkey no "<<mnol+1<<" and is  : "<<least<<endl;
cout<<"The Greatest amount of food eaten during week is by monkey no "<<mnog+1<<" and is : "<<greatest<<endl;

system("pause");
    return 0;
}

*/