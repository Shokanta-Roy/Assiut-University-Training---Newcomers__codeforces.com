#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int a, b;
    int flag1=0, flag2=0, flag3=0;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if (a!=b)
        {
            flag1=1;
            break;
        }
        
        if (temp<a && i!=0)
        {
            flag2=1;
        }
        temp=a;
        
        
    }
    if (flag1==1)
    {
        cout<<"rated"<<endl;
    }
    else if (flag2==1)
    {
        cout<<"unrated"<<endl;
    }
    else 
    {
        cout<<"maybe"<<endl;
    }

    
    
}

int main()
{
    solve();
    return 0;
}