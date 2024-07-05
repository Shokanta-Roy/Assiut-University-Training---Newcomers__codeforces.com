#include<iostream>
#include<string>
using namespace std;

int main()
{
    string ch;
    cin>>ch;
    int n = ch.length();
    bool isPalindrome= true;
    for(int i=0; i<n/2; i++)
    {
        if(ch[i]!=ch[n-i-1])
        {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
