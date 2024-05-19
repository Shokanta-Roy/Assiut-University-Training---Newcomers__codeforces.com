#include <iostream>
#include <algorithm>

using namespace std;

long long maxKatryoshkas(long long n, long long m, long long k)
{
    long long maxKatryoshkas = 0;

    // Case 1: Use as many as possible of type 3 (1 eye, 1 mouth, 1 body)
    long long x3 = min({n, m, k});
    maxKatryoshkas += x3;
    n -= x3;
    m -= x3;
    k -= x3;

    // Case 2: Use as many as possible of type 2 (2 eyes, 1 mouth, 1 body)
    long long x2 = min({n / 2, m, k});
    maxKatryoshkas += x2;
    n -= 2 * x2;
    m -= x2;
    k -= x2;

    // Case 3: Use as many as possible of type 1 (2 eyes, 1 body)
    long long x1 = min(n / 2, k);
    maxKatryoshkas += x1;

    return maxKatryoshkas;
}

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    cout << maxKatryoshkas(n, m, k) << endl;
    return 0;
}
