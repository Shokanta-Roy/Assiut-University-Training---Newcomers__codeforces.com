#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int count1 = 0, count2 = 0, count3 = 0;
    for (char c : s)
    {
        if (c == '1')
        {
            count1++;
        }
        else if (c == '2')
        {
            count2++;
        }
        else if (c == '3')
        {
            count3++;
        }
    }
    bool first = true;
    
    for (int i = 0; i < count1; ++i)
    {
        if (!first)
        {
            cout << "+";
        }
        cout << "1";
        first = false;
    }
    
    for (int i = 0; i < count2; ++i)
    {
        if (!first)
        {
            cout << "+";
        }
        cout << "2";
        first = false;
    }
    
    for (int i = 0; i < count3; ++i)
    {
        if (!first)
        {
            cout << "+";
        }
        cout << "3";
        first = false;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}