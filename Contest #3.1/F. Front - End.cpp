#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (l == r)
        {
            cout << arr[l];
            break;
        }
        cout << arr[l++] << " " << arr[r--];
        if (l <= r)
            cout << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
