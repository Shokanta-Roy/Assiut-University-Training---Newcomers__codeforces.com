#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (value % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (even == odd)
    {
        cout << "0" << endl;
    }
    else if (n % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << abs(even - odd) / 2 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}