#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    int arr[n];
    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }

    int min_value=INT_MAX;
    int min_position=-1;
    for (int  i = 1; i < n; i++)
    {
        if(arr[i]<min_value)
        {
            min_value=arr[i];
            min_position=i;
        }

    }
    cout<<min_value<<" "<<min_position<<endl;



    return 0;
}
