#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    char temp;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp = s[i];
            count++;
        }
        else
        {
            if (s[i] != temp)
            {
                count++;
                temp = s[i];
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}