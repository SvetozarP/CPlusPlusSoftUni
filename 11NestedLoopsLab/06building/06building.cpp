#include <iostream>

using namespace std;

int main()
{
	int floors, roomsPerFloor;
	cin >> floors >> roomsPerFloor;

	for (int i = floors; i > 0; i--)
	{
		for (int j = 0; j < roomsPerFloor; j++)
		{
			if (i == floors)
			{
				cout << "L" << i << j << " ";
			}
			else if (i % 2 == 0)
			{
				cout << "O" << i << j << " ";
			}
			else
			{
				cout << "A" << i << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
