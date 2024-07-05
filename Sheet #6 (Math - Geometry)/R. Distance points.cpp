#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<iomanip> //For setprecision; cout<<fixed<<setprecision(xx);
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
    return (a*b)/gcd(a,b);
}
long long factorial(int n)
{
    long long result=1;
    for(int i=1; i<=n; i++)
    {
        result*=i;
    }
    return result;
}
long long multipliction_of_N_to_M(long long n, long long m)
{
    if(n>m)
    {
        return 0;
    }
    long long product=1;
    for(long long i=n; i<=m; i++)
    {
        product*=i;
    }
    return product;
}
long double distance_Between_two_points(long double x1, long double x2, long double y1, long double y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
void solve(long double x1, long double x2, long double y1, long double y2)
{
    cout<<fixed<<setprecision(9);
    cout<<distance_Between_two_points(x1,x2,y1,y2)<<endl;
}
int main()
{
    long long x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;
    solve(x1,x2,y1,y2);
    return 0;
}
