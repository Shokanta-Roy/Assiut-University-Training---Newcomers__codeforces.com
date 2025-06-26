#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());

    int size= s.size();
    for (int i = 0; i < size; i++)
    {
        char ch=s[i];
        int counter=1;
        while (s[i]== s[++i])
        {
            counter++;
        }
        i--;
        cout<<ch<<" : "<<counter<<endl;
    }
    return 0;
}
