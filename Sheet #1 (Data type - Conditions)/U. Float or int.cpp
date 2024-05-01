#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin >> n;

    if (floor(n) == n)
    {
        cout << "int " << static_cast<int>(n) << endl;
    }
    else
    {
        int integer_part = static_cast<int>(n);
        double decimal_part = n - integer_part;
        cout << "float " << integer_part << " " << fixed << setprecision(5) << decimal_part << endl;
    }

    return 0;
}
