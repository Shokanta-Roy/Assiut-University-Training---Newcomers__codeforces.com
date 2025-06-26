#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int e=0, g=0, y=0, p=0, t=0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'e' || str[i] == 'E')
        {
            e++;
        }
        else if (str[i] == 'g' || str[i] == 'G')
        {
            g++;
        }
        else if (str[i] == 'y' || str[i] == 'Y')
        {
            y++;
        }
        else if (str[i] == 'p' || str[i] == 'P')
        {
            p++;
        }
        else if (str[i] == 't' || str[i] == 'T')
        {
            t++;
        }
    }

    int minCount = min({e, g, y, p, t});
    cout << minCount << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}