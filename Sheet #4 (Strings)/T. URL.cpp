#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string url;
    cin >> url;
    int n = url.size();
    for (int i = 0; i < n; i++)
    {
        if (url[i] == '?')
        {
            i++;
            for (int j = i; j < n; j++)
            {
                if (url[j] == '=')
                {
                    cout << ": ";
                    continue;
                }
                if (url[j] == '&')
                {
                    cout << endl;
                    continue;
                }
                cout << url[j];
            }
            break;
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
