#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
        {
            i += 4;
            cout << " ";
        }
        else
        {
            cout << str[i];
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}