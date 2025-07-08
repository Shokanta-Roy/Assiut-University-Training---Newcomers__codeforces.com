#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin>>a>>b;
    int i=1;
    while (a<b)
    {
        a=a*i*3;
        b=b*i*2;
        if (a>b)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    cout<<i<<endl;
    
}

int main()
{
    solve();
    return 0;
}