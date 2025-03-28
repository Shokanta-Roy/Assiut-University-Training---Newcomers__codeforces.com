#include <bits/stdc++.h>
using namespace std;

int input;
void print(int n)
{
    if (n==0)
    {
        return;
    }
    print(n-1);
    for(int i=1; i<= input-n; i++)
    {
        cout<<" ";
    }
    for (int i = 1; i <= n*2 -1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    input=n;
    print(n);
}