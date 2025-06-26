#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int temp = 0;
    int result = 0;
    int counter = 0;
    for(int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            temp = arr[i];
            result = 1;
        }
        else
        {
            if (temp == arr[i])
            {
                result++;
            }
            else if (temp + 1 == arr[i])
            {
                counter += result;
                temp = arr[i];
                result = 1;
            }
            else
            {
                result = 1;
                temp = arr[i];
            }
        }
    }
    cout << counter << endl;

}

int main()
{
    solve();
    return 0;
}