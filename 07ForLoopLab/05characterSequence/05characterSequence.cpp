#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
	getline(cin, input);

	for (char c : input) {
		cout << c << endl;
	}

	return 0;
}
