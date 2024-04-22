#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,temp=0;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>temp)
        {
            temp=a;
        }
    }
    cout<<temp<<endl;

}
