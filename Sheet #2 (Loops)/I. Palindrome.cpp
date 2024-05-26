#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string N;
    cin >> N;

    string reversed_N = N;
    reverse(reversed_N.begin(), reversed_N.end());
    reversed_N = to_string(stoi(reversed_N));

    cout << reversed_N << endl;

    if (N == reversed_N)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
