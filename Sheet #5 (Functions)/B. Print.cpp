#include<iostream>
using namespace std;

int printing(int n)
{
    for (int  i = 1; i <= n; i++)
    {
        cout<<i;
        if(i<n)
        {
            cout<<" ";
        }

    }
    cout<<endl;

}

int main()
{
    int a ;
    cin>>a;
    printing(a);

    return 0;
}
