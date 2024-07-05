#include<bits/stdc++.h>
using namespace std;
double avg(int n)
{
    double sum;
    for(int i=0; i<n; i++)
    {
        double value;
        cin>>value;
        sum+= value;
    }
    return sum;
}
int main()
{
    int size;
    cin>>size;
    cout<<setprecision(8)<<avg(size)/size<<endl;
}
