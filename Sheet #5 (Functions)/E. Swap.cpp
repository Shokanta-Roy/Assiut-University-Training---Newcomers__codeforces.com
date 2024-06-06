#include<bits/stdc++.h>
using namespace std;

void swaping(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swaping(a,b);
    return 0;
}
