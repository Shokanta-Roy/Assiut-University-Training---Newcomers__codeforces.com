#include<bits/stdc++.h>
using namespace std;

void solve()
{
    double num, result = 0;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        result += log10(i);
    }
    cout << "Number of digits of " << num << "! is " << (int)result + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();
    
    return 0;
}