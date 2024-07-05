#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch;
        cin>>ch;
        int n=ch.length();
        int count=0;
        if(n<=10)
        {
            cout<<ch<<endl;
        }
        else if(n>10)
        {
            cout<<ch[0]<<n-2<<ch[n-1]<<endl;
        }
    }



    return 0;
}
