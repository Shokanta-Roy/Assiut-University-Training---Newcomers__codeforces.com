#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long a,b,q;
    cin>>a>>b>>q;
    long long res= q%3;

    if(res==1)
    {
        cout<<a<<endl;
    }
    else if(res==2)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<(a^b)<<endl;
    }


    return 0;
}
