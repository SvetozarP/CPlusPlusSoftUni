#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cakeLength, cakeWidth;
	cin >> cakeLength >> cakeWidth;

	int cakeArea = cakeLength * cakeWidth;

	while (true)
	{
		string command;
		cin >> command;
		if (command == "STOP")
		{
			break;
		}
		int pieces = stoi(command);
		cakeArea -= pieces;
		if (cakeArea < 0)
		{
			cout << "No more cake left! You need " << abs(cakeArea) << " pieces more." << endl;
			return 0;
		}
	}
	cout << cakeArea << " pieces are left." << endl;
	return 0;
}
