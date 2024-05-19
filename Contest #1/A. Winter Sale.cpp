#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    double P;
    cin >> X >> P;

    double originalPrice = P / (1 - X / 100.0);
    originalPrice = ceil(originalPrice * 100) / 100;

    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
