#include<bits/stdc++.h>
using namespace std;    

void solve()
{
    string value, sub1 = "", sub2;
    cin >> value;
    string myValue = value;
    string smallString = value;
    for (int i = 0; i < value.length() - 1; i++)
    {
        sub1 += value[i];
        myValue.erase(0, 1);
        sub2 = myValue;
        sort(sub1.begin(), sub1.end());
        sort(sub2.begin(), sub2.end());
        smallString = min(smallString, sub1 + sub2);
    }
    cout << smallString << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}