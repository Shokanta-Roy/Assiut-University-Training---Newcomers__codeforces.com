#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int res1 = (y3 - y2) * (x2 - x1);
    int res2 = (y2 - y1) * (x3 - x2);
    if (res1 == res2)
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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();
    
    return 0;
}