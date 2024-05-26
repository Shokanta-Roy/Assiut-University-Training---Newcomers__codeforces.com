#include <iostream>
#include <string>
using namespace std;

bool isLucky(int num)
{
    string strNum = to_string(num);
    for (char digit : strNum)
    {
        if (digit != '4' && digit != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;

    bool foundLucky = false;
    for (int i = A; i <= B; ++i)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            foundLucky = true;
        }
    }

    if (!foundLucky)
    {
        cout << -1;
    }

    return 0;
}
