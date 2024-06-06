#include<bits/stdc++.h>
using namespace std;

void max_min(int arr[], int n, int& minVal, int&maxVal)
{
    minVal = arr[0];
    maxVal = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
        }
        if(arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int minVal, maxVal;
    max_min(arr, n, minVal, maxVal);
    cout<<minVal<< " " << maxVal << endl;


    return 0;
}
