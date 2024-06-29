#include<bits/stdc++.h>
using namespace std;
int res[1000005];

int main()
{
    int t;
    cin>>t;
    unsigned long long count=0;
    while(t--)
    {
        unsigned long long n,s;
        cin>>n>>s;
        if(n*(n+1) / 2 < s)
        {
            cout<<-1;
        }
        else
        {
            unsigned long long sum = 0;
            for(int i=n; i>=1; i--)
            {
                if(sum+i <= s)
                {
                    sum+=i;
                    res[count]=i;
                    count++;
                }
                if(sum == s)
                {
                    break;
                }
            }
        }
        for(int i=0; i<count; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        count=0;
    }
    return 0;
}
