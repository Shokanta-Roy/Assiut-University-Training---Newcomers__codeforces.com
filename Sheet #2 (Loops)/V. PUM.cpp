#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=1;
    for(int i=1; i<=n; i++)
    {
        cout<<start<<" "<<start+1<<" "<<start+2<<" "<<"PUM"<<endl;
        start+=4;
    }
    return 0;
}
