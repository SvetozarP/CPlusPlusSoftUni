#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1111; i <= 9999; ++i)
	{
		int d1 = i / 1000;
		int d2 = (i / 100) % 10;
		int d3 = (i / 10) % 10;
		int d4 = i % 10;
		if (d1 != 0 && n % d1 == 0 &&
			d2 != 0 && n % d2 == 0 &&
			d3 != 0 && n % d3 == 0 &&
			d4 != 0 && n % d4 == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}
