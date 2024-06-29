#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    unsigned long long result=0;

    while(t--)
    {
        unsigned long long counter=0;
        unsigned long long n;
        cin>>n;
        if(n%2 !=0)
        {
            counter=0;
        }
        else
        {
            while(n> 0)
            {
                if(n%2 !=0)
                {
                    break;
                }
                else
                {
                    counter++;
                    n = n/2;
                }
            }
            //cout<<n/2<<endl;
        }
        if(counter>result)
        {
            result = counter;
        }
    }
    cout<<result<<endl;

    return 0;
}
