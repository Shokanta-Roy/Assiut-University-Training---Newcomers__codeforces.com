#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
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
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=10)
        {
            cout<<"A["<<i<<"] = "<<arr[i]<<endl;
        }

    }

    return 0;
}