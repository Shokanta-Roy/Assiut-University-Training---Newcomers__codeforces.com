#include<bits/stdc++.h>
using namespace std;

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

int shiftzeros(int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        if(value==0)
        {
            count++;
        }
        else
        {
            cout<<value<< " ";
        }
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    /*
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>n;
    }
        */
    //bubblesort(arr,n);
    int zeros=shiftzeros(n);
    for (int i = 0; i < zeros; i++)
    {
        cout<< 0 <<" ";
    }
    
    return 0;
}

