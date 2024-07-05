#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    for(char c: s)
    {
        sum=sum+c- '0';
    }
    cout<<sum<<endl;

    return 0;
}


