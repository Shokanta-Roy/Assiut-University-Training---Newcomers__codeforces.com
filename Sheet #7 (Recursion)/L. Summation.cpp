#include <bits/stdc++.h>
using namespace std;

long long sum(long long arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int size;
    cin >> size;
    long long arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, size);
}
