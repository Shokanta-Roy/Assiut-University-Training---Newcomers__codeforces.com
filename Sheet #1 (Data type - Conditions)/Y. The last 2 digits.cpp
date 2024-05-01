#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    long long int a,b,c,d,result;
    cin>>a>>b>>c>>d;
    result = ((a % 100) * (b % 100) * (c% 100) * (d% 100)) % 100;
    if(result==0)
    {
        cout<<"00"<<endl;
    }
    else if(result>=1 && result<=9){
        cout<<"0"<<result<<endl;
    }
    else{
        cout<<result<<endl;
    }



    return 0;
}
