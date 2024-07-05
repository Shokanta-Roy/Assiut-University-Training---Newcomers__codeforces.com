#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

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


void solve(long long  n)
{
    long long sum=0;
    for (int  i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            if(i != sqrt(n))
            {
                sum=sum+n/i;
            }
        }
    }
    cout<<sum<<endl;

}


int main()
{
    long long n;
    cin>>n;
    solve(n);
    return 0;
}

