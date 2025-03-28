#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int size, int index)
{
    if (index > size - 1)
    {
        return;
    }
    print(arr, size, index + 2);
    cout << arr[index] << " ";
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
    print(arr, size, 0);
}