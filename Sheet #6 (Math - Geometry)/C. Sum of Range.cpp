#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum=0;
    int oddsum=0;
    int evensum=0;

    if(a<b)
    {
        for(int i=a; i<=b; i++)
        {
            sum=sum+i;
            if(i%2==0)
            {
                evensum=evensum+i;
            }
            else
            {
                oddsum=oddsum+i;
            }
        }
    }
    else if(a>b)
    {
        for (int  i = b; i <= a; i++)
        {
            sum=sum+i;
            if(i%2==0)
            {
                evensum=evensum+i;
            }
            else
            {
                oddsum=oddsum+i;
            }
        }

    }
    cout<<sum<<endl;
    cout<<evensum<<endl;
    cout<<oddsum<<endl;


    return 0;
}
