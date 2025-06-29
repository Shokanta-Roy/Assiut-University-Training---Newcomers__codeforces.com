#include<bits/stdc++.h>
using namespace std;

int counting(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            count++;
        }
    }
    return count;
}
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int arr[n+1];
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<counting(arr,n)<<endl;
    return 0;
}

