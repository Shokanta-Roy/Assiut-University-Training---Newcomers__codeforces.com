#include <iostream>
using namespace std;

long long power(int base, int exp)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

long long calculateSum(int X, int N)
{
    long long S = 0;
    S += (power(X, 0) - 1);
    for (int i = 2; i <= N; i += 2)
    {
        S += power(X, i);
    }
    return S;
}

int main()
{
    int X, N;
    cin >> X >> N;
    cout << calculateSum(X, N) << endl;
    return 0;
}
