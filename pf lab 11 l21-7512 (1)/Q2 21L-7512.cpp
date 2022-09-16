/*#include<iostream>
using namespace std;
int main()
{
	char array[3][30];
	int rain1 = 0, rain2 = 0, rain3 = 0;
	int cloud1 = 0, cloud2 = 0, cloud3 = 0;
	int sun1 = 0, sun2 = 0, sun3 = 0;
	cout << "Enter Weather S = SUNNY , R = RAINY , C = CLOUDY " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << "Enter the Weather of the day " << j + 1 << " of Month " << i + 1 << " : ";
			cin >> array[i][j];
			if (array[i][j] != 's' && array[i][j] != 'S' && array[i][j] != 'C' && array[i][j] != 'c' && array[i][j] != 'R' && array[i][j] != 'r')
			{
				cout << "INALID INPUTS";
				return 79;
			}

			if (i == 0 && (array[i][j] == 'r' || array[i][j] == 'R'))
			{
				rain1++;
			}
			if (i == 1 & (array[i][j] == 'r' || array[i][j] == 'R'))
			{
				rain2++;
			}
			if (i == 2 && (array[i][j] == 'r' || array[i][j] == 'R'))
			{
				rain3++;
			}
			if (i == 0 && (array[i][j] == 'c' || array[i][j] == 'C'))
			{
				cloud1++;
			}
			if (i == 1 & (array[i][j] == 'c' || array[i][j] == 'C'))
			{
				cloud2++;
			}
			if (i == 2 && (array[i][j] == 'c' || array[i][j] == 'C'))
			{
				cloud3++;
			}

			if (i == 0 && (array[i][j] == 's' || array[i][j] == 'S'))
			{
				sun1++;
			}
			if (i == 1 & (array[i][j] == 's' || array[i][j] == 'S'))
			{
				sun2++;
			}
			if (i == 2 && (array[i][j] == 's' || array[i][j] == 'S'))
			{
				sun3++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << array[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "In First Month " << sun1 << " days Were Sunny , " << cloud1 << " days were Cloudy, " << rain1 << " days were Rainy " << endl;
	cout << "In Second Month " << sun2 << " days Were Sunny , " << cloud2 << " days were Cloudy, " << rain2 << " days were Rainy " << endl;
	cout << "In Third Month " << sun3 << " days Were Sunny , " << cloud3 << " days were Cloudy, " << rain3 << " days were Rainy " << endl;


	if (rain1 > rain2 && rain2 > rain3)
		cout << "The Greatest Rain is in 1 Month " << endl;
	if (rain2 > rain3 && rain3 > rain1)
		cout << "The Greatest Rain is in 2 Month " << endl;
	if (rain1 > rain3 && rain3 > rain2)
		cout << "The Greatest Rain is in 1 Month " << endl;
	if (rain2 > rain1 && rain1 > rain3)
		cout << "The Greatest Rain is in 2 Month " << endl;
	if (rain3 > rain1 && rain1 > rain2)
		cout << "The Greatest Rain is in 3 Month " << endl;
	if (rain3 > rain2 && rain2 > rain1)
		cout << "The Greatest Rain is in 3 Month " << endl;


system("pause");
return 0;
}

*/