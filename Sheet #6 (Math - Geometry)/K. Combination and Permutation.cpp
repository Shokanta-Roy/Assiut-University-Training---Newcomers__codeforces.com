#include<bits/stdc++.h>
using namespace std;
long long factorial(int n)
{
    long long result=1;
    for(int i=1; i<=n; i++)
    {
        result*=i;
    }
    return result;
}

long long combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}

long long permutation(int n,int r)
{
    return factorial(n)/factorial(n-r);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r)<<" "<<permutation(n,r)<<endl;

    return 0;
}
