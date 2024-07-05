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
long double area_Of_The_Triangle(long double a, long double b, long double c)
{
    long double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
bool triangle_Checking(long long a, long long b, long long c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return true;
    }
    return false;
}
void solve(int a,int b,int c)
{
    if(triangle_Checking(a,b,c))
    {
        cout<<"Valid"<<endl;
        long double area=area_Of_The_Triangle(a,b,c);
        cout<<fixed<<setprecision(6);
        cout<<area<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    solve(a,b,c);
    return 0;
}
