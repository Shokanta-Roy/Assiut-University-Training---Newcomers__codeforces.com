#include<bits/stdc++.h>
using namespace std;


int mx = -(1e9 + 2);
void maxNumber(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    mx = max(mx, arr[--size]);
    maxNumber(arr, size);
}
 
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    maxNumber(arr, size);
    cout << mx;
    return 0;
}