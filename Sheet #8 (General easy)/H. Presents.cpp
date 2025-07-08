#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;
        arr[value] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    solve();
    return 0;
}