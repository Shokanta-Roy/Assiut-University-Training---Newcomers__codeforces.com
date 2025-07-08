#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; 
    string s;
    cin>>n >> s;
    // int n=s.size();
    string result="";
    int i=0;
    while (n)
    {
        if (n%2==0)
        {
            result=s[i]+result;
        }
        else
        {
            result=result+s[i];
        }
        
        i++;
        n--;
    }
    cout << result << endl;
    
}

int main()
{
    solve();
    return 0;
}