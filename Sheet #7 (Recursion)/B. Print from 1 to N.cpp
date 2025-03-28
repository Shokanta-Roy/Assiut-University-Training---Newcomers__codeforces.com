#include<bits/stdc++.h>
using namespace std;

int counter=1;
void print(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<counter++<<endl;
    return print(n-1);
}

int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}