#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int countInput;
    cin >> countInput;

    int countBelow200 = 0;
    int count200To399 = 0;
    int count400To599 = 0;
    int count600To799 = 0;
    int count800AndAbove = 0;

    for (int i = 0; i < countInput; i++)
    {
        int currentNum;
        cin >> currentNum;

        if (currentNum < 200)
        {
            countBelow200++;
        }
        else if (currentNum <= 399) 
        {
            count200To399++;
        }
        else if (currentNum <= 599)
        {
            count400To599++;
        }
        else if (currentNum <= 799)
        {
            count600To799++;
        }
        else
        {
            count800AndAbove++;
        }
    }

    double percentBelow200 = (double)countBelow200 / countInput * 100;
    double percent200To399 = (double)count200To399 / countInput * 100;
    double percent400To599 = (double)count400To599 / countInput * 100;
    double percent600To799 = (double)count600To799 / countInput * 100;
    double percent800AndAbove = (double)count800AndAbove / countInput * 100;

    cout << fixed << setprecision(2);

    cout << percentBelow200 << "%" << endl;
    cout << percent200To399 << "%" << endl;
    cout << percent400To599 << "%" << endl;
    cout << percent600To799 << "%" << endl;
    cout << percent800AndAbove << "%" << endl;

    return 0;
}