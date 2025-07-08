#include<bits/stdc++.h>
using namespace std;

bool check(long long sum, long long index, long long arr[], long long n, long long x)
{
    if (index == n)
    {
        return sum == x;
    }
    bool route1 = check(sum + arr[index], index + 1, arr, n, x);
    bool route2 = check(sum - arr[index], index + 1, arr, n, x);
    return route1 || route2;
}

int main()
{
    long long n,x;
    cin >> n >> x;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (check(arr[0], 1, arr, n, x))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}