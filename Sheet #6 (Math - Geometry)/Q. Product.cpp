#include<bits/stdc++.h>
using namespace std;    

void solve()
{
    long long l, r, m;
    cin >> l >> r >> m;
    long long ma = max(l, r);
    long long mi = min(l, r);
    long long ans = 1;
    for (int  i = mi; i <= ma; i++)
    {
        ans *= i;
        ans %= m;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();
    
    return 0;
}