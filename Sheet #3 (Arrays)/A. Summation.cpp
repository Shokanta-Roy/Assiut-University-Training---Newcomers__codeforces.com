#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int long long sum=0;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum<0){
        sum=sum*(-1);
    }
    cout<<sum<<endl;


    return 0;
}
