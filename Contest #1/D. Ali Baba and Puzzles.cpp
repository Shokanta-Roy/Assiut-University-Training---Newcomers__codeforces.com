#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main()
{
    long long int a,b,c;
    long long int d;
    cin>>a>>b>>c;
    cin>>d;
    if(a+b*c==d)
    {
        cout<<"YES"<<endl;
    }
    else if(a+b-c==d)
    {
        cout<<"YES"<<endl;
    }
    else if(a*b-c==d)
    {
        cout<<"YES"<<endl;
    }
    else if(a*b+c==d)
    {
        cout<<"YES"<<endl;
    }
    else if(a-b*c==d)
    {
        cout<<"YES"<<endl;
    }
    else if(a-b+c==d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
