#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j<m ;j++)
        {
             cout<<"#";
             if (j<m)
             {
                continue;
             }
             cout<<".";
             
        }
        
    }
    
}

int main()
{
    solve();
    return 0;
}