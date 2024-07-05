#include<iostream>
using namespace std;

int main()
{
    string ch;
    getline(cin,ch);
    int n = ch.length();
    for (int  i = 0; i < n; i++)
    {
        if(ch[i]==',')
        {
            ch[i]=' ';
        }
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }

    }
    cout<<ch<<endl;


    return 0;
}
