#include <iostream>
#include <cmath>

using namespace std;

long long max_distinct_numbers_sum(long long N)
{
    long long k = (-1 + sqrt(1 + 8 * N)) / 2;

    while (k * (k + 1) / 2 > N)
    {
        k--;
    }

    return k;
}

int main()
{
    long long N;
    cin >> N;
    cout << max_distinct_numbers_sum(N) << endl;
    return 0;
}
