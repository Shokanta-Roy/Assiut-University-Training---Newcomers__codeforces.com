#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int flag = 0;
    while (cin >> s) 
    {
        reverse(s.begin(), s.end()); 
        if (flag) 
        {
            cout << " ";
        }
        flag = 1;
        cout << s;
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