/*#include<iostream>
using namespace std;
void lookupfunction(char name[5][20], char check[20])
{
    int checkkk = 0;
    int count = 0, counta[5], numi = 0, checknum = 0, count1 = 0;
    char num[5][10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name of " << i + 1 << " person : ";

        cin.getline(name[i], 20);

        cout << "Enter Phone number of " << i + 1 << " person : ";
        cin.getline(num[i], 10);
    }
    cout << "Enter the Name for finding number : ";
    cin.getline(check, 20);
    while (check[count1] != '\0')
    {
        count1++;
    }

    for (int i = 0; i < 5; i++)
    {
        int k = 0;
        count = 0;
        while (name[i][k] != '\0')
        {
            count++;
            k++;
        }
        counta[i] = count;
    }
    for (int i = 0; i < 5; i++)
    {
        checkkk = 0;

        if (counta[i] == count1)
        {
            for (int j = 0; j < 20; j++)
            {

                if (name[i][j] != '\0' && check[j] != '\0')
                {
                    if (name[i][j] == check[j])
                    {
                        checkkk = checkkk + 1;
                    }
                }
            }
        }
        if (counta[i] == checkkk)
        {
            cout << "The Number is : ";
            for (int h = 0; h < 8; h++)
            {
                if (num[i][h] != '\0')
                {
                    cout << num[i][h];
                }
            }
        }
    }
}
int main()
{
    char name[5][20];
    char check[20];
    lookupfunction(name, check);
    cout << endl;
    system("pause");
    return 0;
}
*?