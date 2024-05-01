#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char ch,ee;
    cin>>a>>ch>>b>>ee>>c;
    if(ch=='+')
    {
        if((a+b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b<<endl;
        }
    }
    else if(ch=='-')
    {
        if((a-b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b<<endl;
        }
    }
    else if(ch=='*')
    {
        if((a*b)==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b<<endl;
        }
    }


    return 0;
}

