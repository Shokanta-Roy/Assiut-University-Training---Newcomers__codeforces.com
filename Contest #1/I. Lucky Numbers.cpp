#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp1=n%10;
    int temp2=n/10;
    if((temp1%temp2==0) ||(temp2%temp1==0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
//    cout<<temp1<<endl;
//    cout<<temp2<<endl;


    return 0;
}

