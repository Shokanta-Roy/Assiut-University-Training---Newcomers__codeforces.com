#include <iostream>

using namespace std;

bool is_power_of_2(long long N)
{
    return N > 0 && (N & (N - 1)) == 0;
}

int main()
{
    long long N;
    cin >> N;

    if (is_power_of_2(N))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
