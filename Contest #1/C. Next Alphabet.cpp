#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch=='z')
    {
        cout<<"a"<<endl;
    }
    else
    {
        cout<<char(ch+1)<<endl;
    }

    return 0;
}

