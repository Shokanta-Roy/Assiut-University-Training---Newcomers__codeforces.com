#include<iostream>
using namespace std;

int main()
{
    long long int n,sum=0;
    cin>>n;
//    for(int i=1; i<=n; i++){
//        sum= sum+i;
//    }
    sum=  (n * (n + 1)) / 2;
    cout<<sum<<endl;
    return 0;
}
