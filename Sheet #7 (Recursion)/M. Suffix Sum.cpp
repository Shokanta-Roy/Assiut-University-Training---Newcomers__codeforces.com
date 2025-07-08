#include <bits/stdc++.h>
using namespace std;

long long sum(long long arr[],int index, int m)
{
    if (m == 0)
        return 0;
    return arr[index] + sum(arr, index-1 ,m - 1);
}

int main()
{
    int n,m;
    cin >> n >> m;
    long long arr[n];
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n - 1, m) << endl;
    return 0;
}
