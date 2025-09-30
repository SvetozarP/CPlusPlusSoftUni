#include <iostream>

using namespace std;

int main()
{
	int chain = 1;
	int userInput;
	cin >> userInput;

	while (chain <= userInput) 	{
		cout << chain << endl;
		chain = chain * 2 + 1;
	}

	return 0;
}
