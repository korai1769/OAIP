#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double kapital = 1000;
    int x;

    cout << "vvedite procent ot 0 do 25." << endl;
    cin >> x;

    int mesyats = 0;

    while (kapital <= 1100)
    {
        kapital = kapital + (kapital / 100.0 * x);
        mesyats++;
    }

    cout << "mesyatsov: " << mesyats << endl;
    cout << "kapital: " << kapital << endl;

    return 0;
}