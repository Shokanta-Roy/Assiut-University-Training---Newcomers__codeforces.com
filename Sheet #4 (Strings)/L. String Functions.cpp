#include<bits/stdc++.h>
using namespace std;    

void solve()
{
    int n,q;
    cin >> n >> q; 
    string s;
    cin >> s;
    string query;
    while (q--)
    {
        cin >> query;
        if (query == "pop_back")
        {
            s.pop_back();
        }
        else if (query == "front")
        {
            cout << s.front() << endl;
        }
        else if (query == "back")
        {
            cout<< s.back() << endl;
        }
        else if( query == "sort")
        {
            int l,r;
            cin >> l >> r; 
            sort(s.begin() + min(l, r) - 1, s.begin() + max(l, r)); 
        }
        else if (query == "reverse")
        {
            int l, r;
            cin >> l >> r; 
            reverse(s.begin() + min(l, r) - 1, s.begin() + max(l, r));
        }
        else if (query == "print")
        {
            int pos;
            cin >> pos; 
            cout << s[pos - 1] << endl; 
        }
        else if (query == "substr")
        {
            int l, r;
            cin >> l >> r; 
            for (int i = min(l, r) - 1; i <= max(l, r) - 1; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
        else
        {
            char c;
            cin >> c; 
            s.push_back(c); 
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