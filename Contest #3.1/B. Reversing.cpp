#include <iostream>
#include <algorithm>

using namespace std;

void processArray(int n, int arr[])
{
    int start = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0)
        {
            reverse(arr, arr + i);
            start = i + 1;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    processArray(n, arr);

    return 0;
}
