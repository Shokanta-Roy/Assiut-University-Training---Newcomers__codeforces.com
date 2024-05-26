#include<iostream>
using namespace std;
int main()
{
    int t=1;
    while(t--)
    {
        while(true)
        {
            int n,m;
            cin>>n>>m;
            if(n<=0 || m<=0)
            {
                break;
            }
            int sum=0;
            for(int i= min(n,m); i<=max(n,m); i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
    }

    return 0;
}