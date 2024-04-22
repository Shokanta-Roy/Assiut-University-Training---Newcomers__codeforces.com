#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool foundEven=false;
    for(int i=2; i<=n; i=i+2)
    {
        cout<<i<<endl;
        foundEven=true;
    }
    if(!foundEven)
    {
        cout<<"-1"<<endl;
    }

    return 0;
}
