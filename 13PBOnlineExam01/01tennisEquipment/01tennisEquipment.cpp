#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    double racketPrice;
    int racketCount, sneakersCount;
    cin >> racketPrice >> racketCount >> sneakersCount;
    double sneakersPrice = racketPrice / 6;

    double racketTotal = racketPrice * racketCount;
    double sneakersTotal = sneakersPrice * sneakersCount;
    double rest = (racketTotal + sneakersTotal) * 0.2;
    double total = racketTotal + sneakersTotal + rest;

    int DjokovicShare = floor(total / 8);
    int sponsorsShare = ceil(total * 7 / 8);

    cout << "Price to be paid by Djokovic " << DjokovicShare << endl;
    cout << "Price to be paid by sponsors " << sponsorsShare << endl;

    return 0;
}