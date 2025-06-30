#include<bits/stdc++.h>
using namespace std;

string addBigNumber(const string &big, int small)
{
    string result = "";
    int carry = small;
    int i = big.length() - 1;

    while (i >= 0 || carry > 0)
    {
        if (i >= 0)
            carry += big[i--] - '0';
        result += (carry % 10) + '0';
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

string multiplyBigNumber(const string &big, int small)
{
    string result = "";
    int carry = 0;

    for (int i = big.length() - 1; i >= 0; --i)
    {
        int digit = big[i] - '0';
        long long product = (long long)digit * small + carry;
        result += (product % 10) + '0';
        carry = product / 10;
    }

    while (carry > 0)
    {
        result += (carry % 10) + '0';
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string N;
    cin >> N;

    cout << addBigNumber(N, 9999) << endl;
    cout << multiplyBigNumber(N, 9999) << endl;

    return 0;
}