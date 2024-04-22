#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long temp=1;
        for(int i=1; i<=n; i++)
        {
            temp=temp*i;
        }
        cout<<temp<<endl;
    }

    return 0;
}
