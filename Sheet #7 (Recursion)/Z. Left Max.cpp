#include<bits/stdc++.h>
using namespace std;    

void print(int arr[], int n, int counter, int MaxNum)
{
    if (counter == n)
    {
        return;
    }
    if (counter == 0)
    {
        cout << arr[counter] << " ";
        MaxNum = arr[counter];
    }
    else
    {
        if (MaxNum < arr[counter])
        {
            cout << arr[counter] << " ";
            MaxNum = arr[counter];
        }
        else
        {
            cout << MaxNum << " ";
        }
    }
    return print(arr, n, counter + 1, MaxNum);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n, 0, INT_MIN);
    
    
    return 0;
}