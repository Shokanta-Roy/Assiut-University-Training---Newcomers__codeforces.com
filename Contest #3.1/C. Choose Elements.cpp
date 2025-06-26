#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for(long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    reverse(arr,arr+n);

    long long sum = 0;
    for(int i = 0; i < k; ++i)
    {
        if (arr[i]<0)
        {
            break;
        }

        sum += arr[i];
    }

    cout << sum << endl;
}

int main()
{
    solve();
    return 0;
}
