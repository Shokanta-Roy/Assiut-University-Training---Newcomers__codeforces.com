#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int position=-1;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==x)
        {
            position=i;
            break;
        }

    }
    cout<<position<<endl;


    return 0;
}
