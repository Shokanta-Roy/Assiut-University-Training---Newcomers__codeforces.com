#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ulli unsigned long long int
#define endl "\n"
int lcm(int n,int m){return (n*m)/__gcd(n,m);}
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL)

int main()
{

    ll n;
    cin>>n;

    vector<ll> a(n+1, 0);
    a[1]=1;

    for(int i=2; i<=n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    cout<<a[n-1]<<endl;

    return 0;
}
