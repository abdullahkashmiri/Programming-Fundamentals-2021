#include<iostream>
using namespace std;
int main()
{
	float floor,room,occroom,toccroom=0,troom=0,percentage,unoccroom;
	cout << "How many Floors are in the Hotel : ";
	cin >> floor;
	if (floor != 13)
	{
		for (int n = 1; n <= floor; ++n)
		{
			cout << "Enter the number of rooms in " << n << " floor : ";
			cin >> room;
			cout << "Enter the number of Occupied rooms in " << n << " floor : ";
			cin >> occroom;
			troom = troom + room;
			toccroom = toccroom + occroom;
		}
	} else 
		for (int n = 1; n < floor; ++n)
		{
			cout << "Enter the number of rooms in " << n << " floor : ";
			cin >> room;
			cout << "Enter the number of Occupied rooms in " << n << "floor : ";
			cin >> occroom;
			troom = troom + room;
			toccroom = toccroom + occroom;
		}
	unoccroom = troom - toccroom;
	percentage = (toccroom / troom) * 100;

	cout << "Total Number of Floors : " << floor << endl;
	cout << "Total Number of Rooms : " << troom << endl;
	cout << "Total number of Occupied Rooms : " << toccroom << endl;
	cout << "Total number of Unoccupied Rooms : " << unoccroom << endl;
	cout << "Percentage of Occupancy : " << percentage << endl;
	system("pause");
	return 0;
}