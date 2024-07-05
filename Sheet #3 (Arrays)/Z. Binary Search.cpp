#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(const vector<long long>& arr, size_t size, long long value)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }

        if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (q--)
    {
        long long int value;
        cin >> value;
        int finalResult = binarySearch(arr, n, value);
        if (finalResult != -1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
