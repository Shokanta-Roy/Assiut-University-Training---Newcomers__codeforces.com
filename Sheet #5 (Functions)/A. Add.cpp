#include<iostream>
using namespace std;

int adding(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<adding(a,b)<<endl;

    return 0;
}
