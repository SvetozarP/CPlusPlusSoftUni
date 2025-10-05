#include <iostream>
#include <string>

using namespace std;

int main()
{
	string bookTitle;
	getline(cin, bookTitle);

	int bookCount = 0;

	string currentBook;
	while (currentBook != bookTitle)
	{
		getline(cin, currentBook);
		if (currentBook == "No More Books")
		{
			cout << "The book you search is not here!" << endl;
			cout << "You checked " << bookCount << " books." << endl;
			return 0;
		}
		bookCount++;
	}
	cout << "You checked " << bookCount - 1 << " books and found it." << endl;
	return 0;
}
