#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[26] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        arr[(int)c - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (arr[i] != 0)
        {
            cout << (char)(i + 97);
            arr[i]--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}