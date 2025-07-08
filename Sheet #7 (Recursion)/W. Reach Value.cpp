#include<bits/stdc++.h>
using namespace std;    

bool reachValue(long long num, long long input)
{
    if (input < num)
    {
        return false;
    }
    else if (input == num)
    {
        return true;
    }
    else
    {
        return reachValue(num * 10, input) || reachValue(num * 20, input);
    }
}
int main()
{
    long long t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (reachValue(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}