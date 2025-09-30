#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userIn;
	cin >> userIn;

	while (userIn != "Stop") {
		cout << userIn << endl;
		cin >> userIn;
	}
	return 0;
}
