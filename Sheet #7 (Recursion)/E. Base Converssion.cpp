#include<bits/stdc++.h>
using namespace std;

void conversition(int n)
{
    if (n==0)
    {
        return;
    }
    conversition(n/2);
    cout<<n%2;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        conversition(n);
        cout<<endl;
    }

    return 0;
}