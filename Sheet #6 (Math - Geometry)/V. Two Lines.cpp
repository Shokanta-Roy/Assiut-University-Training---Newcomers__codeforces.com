#include<bits/stdc++.h>
#include<iostream>
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

long double slope_Of_Points(long double x1, long double y1, long double x2, long double y2)
{
    if (x2 == x1)
    {
        return std::numeric_limits<long double>::infinity(); // Vertical line
    }
    return (y2 - y1) / (x2 - x1);
}

bool triangle_Checking(long long a, long long b, long long c)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        return true;
    }
    return false;
}

bool are_Parallel_Two_Line_By_Points(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    long double m1= slope_Of_Points(x1,y1,x2,y2);
    long double m2= slope_Of_Points(x3,y3,x4,y4);
    if(m1==m2)
    {
        return true;
    }
    return false;
}

bool are_Parallel_By_Slopes(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    long double m1 = slope_Of_Points(x1, y1, x2, y2);
    long double m2 = slope_Of_Points(x3, y3, x4, y4);
    return m1 == m2;
}
void solve(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4)
{
    if (are_Parallel_By_Slopes(x1, y1, x2, y2, x3, y3, x4, y4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    long long x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    solve(x1,y1,x2,y2,x3,y3,x4,y4);
    return 0;
}
