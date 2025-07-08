#include<bits/stdc++.h>
using namespace std;

long long factorial(long long num)
{
    if(num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);

}

int main()
{
    long long num;
    cin >> num;
    cout << factorial(num);
}