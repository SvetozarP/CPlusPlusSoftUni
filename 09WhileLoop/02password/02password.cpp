#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username, password;
	cin >> username >> password;

	string userInput;
	cin >> userInput;

	while (true)
	{
		if (userInput == password)
		{
			cout << "Welcome " << username << "!" << endl;
			break;
		}
		else
		{
			cin >> userInput;
		}
	}
	return 0;
}
