#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string target = "hello";
    int i = 0; // index for s
    int j = 0; // index for target  
    while (1)
    {
        if (i == s.size() || j == target.size())
        {
            break;
        }
        if (s[i] == target[j])
        {
            j++; 
        }
        i++; 

    }
    if (j == target.size())
    {
        cout << "YES" << endl;
    
    }
    else
    {
        cout << "NO" << endl; 
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