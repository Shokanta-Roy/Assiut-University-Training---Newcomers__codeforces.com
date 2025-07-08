#include<bits/stdc++.h>
using namespace std;

int ways(int start, int end)
{
    if (start >= end)
    {
        return start == end;
    }
    return ways(start + 1, end) + ways(start + 2, end) + ways(start + 3, end);
}

int main()
{
    int start, end;
    cin >> start >> end;
    cout << ways(start, end);
    return 0;
}