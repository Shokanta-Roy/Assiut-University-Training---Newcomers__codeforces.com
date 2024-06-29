#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long id;
    cin>>id;
    unsigned long long row=id/4;
    unsigned long long col;
    if(row%2==0)
    {
        col=id%4;
    }
    else
    {
        col=3-(id%4);
    }

    cout<<row<<" "<<col<<endl;
    return 0;
}
