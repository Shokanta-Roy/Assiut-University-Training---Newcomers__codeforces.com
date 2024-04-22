#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        // lowercase to uppercase
        ch -= 32;
    }
    else
    {
        //uppercase to lowercase
        ch += 32;
    }
    cout << ch << endl;

    return 0;
}

