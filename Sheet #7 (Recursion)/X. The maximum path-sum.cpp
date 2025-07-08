#include<bits/stdc++.h>
using namespace std;

int maxPath(int arr[][11], int n, int m, int start, int end)
{
    if (start == n - 1 && end == m - 1)
    {
        return arr[start][end];
    }
    else if (start >= n || end >= m)
    {
        return -1000000; 
    }
    
    int right = maxPath(arr, n, m, start, end + 1);
    int down = maxPath(arr, n, m, start + 1, end);
    
    return arr[start][end] + max(right, down);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[11][11];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << maxPath(arr, n, m, 0, 0) << endl;
    return 0;
}