#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long r,s;
    const double pi = 3.14159265358979323846;

    cin>>r>>s;
    if(s>= r*2)
    {
        cout<<"Square"<<endl;
    }
    else if(r*2> sqrt(pow(s,2)+pow(s,2)))
    {
        cout<<"Circle"<<endl;
    }
    else
    {
        cout<<"Complex"<<endl;
    }


    return 0;
}
