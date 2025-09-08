#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int numberPages;
	int pagesPerHour;
	int daysToReadABook;

	double totalHoursPerBook;
	double hoursPerDay;

	cin >> numberPages;
	cin >> pagesPerHour;
	cin >> daysToReadABook;

	totalHoursPerBook = numberPages / pagesPerHour;
	hoursPerDay = totalHoursPerBook / daysToReadABook;

	cout << floor(hoursPerDay) << endl;
	return 0;

}