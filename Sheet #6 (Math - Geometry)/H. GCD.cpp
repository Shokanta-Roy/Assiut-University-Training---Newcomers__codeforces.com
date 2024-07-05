#include<bits/stdc++.h>
using namespace std;


long long gcd(long long  a, long long b)
{
    while (b !=0)
    {
        long long  temp=b;
        b = a%b;
        a = temp;
    }
    return a;
}


long long lcm(long long  a,long long  b)
{
    long long gcd_value=gcd(a,b);
    //cout<<gcd_value<<endl;
    return (a*b)/gcd(a,b);
}


void solve(long long  a,long long b)
{
    cout<<gcd(a,b)<<" "<<lcm(a,b);
}


int main()
{
    long long a,b;
    cin>>a>>b;
    solve(a,b);
    return 0;
}
