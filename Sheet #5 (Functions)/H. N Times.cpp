#include<bits/stdc++.h>
using namespace std;

void timesPrinting(int n, char ch)
{
    for (int  i = 0; i < n; i++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch;
        cin>>ch;
        timesPrinting(n, ch);
    }

    return 0;
}
