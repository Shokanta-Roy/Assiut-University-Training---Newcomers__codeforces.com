#include<bits/stdc++.h>
using namespace std;

int flag=0;
void print(int n)
{
    if(n==0)
    {
        return ;
    }
    if(flag)
    {
        cout<<" ";
    }
    cout<<n--;
    flag=1;
    return print(n);
}

int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}