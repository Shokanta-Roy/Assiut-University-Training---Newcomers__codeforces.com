#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isOdd(int n)
{
    return n % 2 == 1;
}

bool isBinaryPalindrome(int n)
{
    string binary_representation = "";
    while (n > 0)
    {
        binary_representation += (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    string reversed_binary = binary_representation;
    reverse(reversed_binary.begin(), reversed_binary.end());
    return binary_representation == reversed_binary;
}

bool isWonderful(int n)
{
    return isOdd(n) && isBinaryPalindrome(n);
}

int main()
{
    int N;
    cin >> N;

    if (isWonderful(N))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
