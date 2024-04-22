#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(pow(a,b)>pow(c,d)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
