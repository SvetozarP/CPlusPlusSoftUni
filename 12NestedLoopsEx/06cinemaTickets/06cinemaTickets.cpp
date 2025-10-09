#include <iostream>
#include <string>

using namespace std;

int main()
{
	string movieName;
	int freeSeats;
	string ticketType;
	int totalTickets = 0;
	int studentTickets = 0;
	int standardTickets = 0;
	int kidTickets = 0;
	while (true)
	{
		getline(cin, movieName);
		if (movieName == "Finish")
		{
			break;
		}
		cin >> freeSeats;
		cin.ignore();
		int ticketsSoldForMovie = 0;
		while (ticketsSoldForMovie < freeSeats)
		{
			getline(cin, ticketType);
			if (ticketType == "End")
			{
				break;
			}
			ticketsSoldForMovie++;
			totalTickets++;
			if (ticketType == "student")
			{
				studentTickets++;
			}
			else if (ticketType == "standard")
			{
				standardTickets++;
			}
			else if (ticketType == "kid")
			{
				kidTickets++;
			}
		}
		double occupancy = (static_cast<double>(ticketsSoldForMovie) / freeSeats) * 100;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << movieName << " - " << occupancy << "% full." << endl;
	}
	cout << "Total tickets: " << totalTickets << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << (static_cast<double>(studentTickets) / totalTickets) * 100 << "% student tickets." << endl;
	cout << (static_cast<double>(standardTickets) / totalTickets) * 100 << "% standard tickets." << endl;
	cout << (static_cast<double>(kidTickets) / totalTickets) * 100 << "% kids tickets." << endl;
	return 0;

}
