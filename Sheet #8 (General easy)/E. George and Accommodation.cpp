#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int p,q;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>p>>q;
        if ((q-p)>=2)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
}

int main()
{
    solve();
    return 0;
}