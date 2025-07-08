#include <bits/stdc++.h>
using namespace std;

bool check(int index, int arr[], int size)
{ 

    if (index == size)
    {
        return 1;
    }
    return (arr[index] == arr[size - index - 1]) && check(index + 1, arr, size);
}
int main()
{
    int arr[100000];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    if (check(0, arr, size))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}