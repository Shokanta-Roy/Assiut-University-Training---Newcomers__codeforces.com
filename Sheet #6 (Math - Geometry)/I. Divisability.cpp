#include<iostream>
#include<algorithm>
using namespace std;
long long sum (long long n)
{
    return n * (n + 1) / 2;
}
int main()
{
    long long a,b,x;
    cin>>a>>b>>x;
    long long maximum = max(a,b);
    long long minimum = min(a,b);
    cout<<(sum(maximum/x) * x) - (sum((minimum-1) / x) * x);

    return 0;
}
