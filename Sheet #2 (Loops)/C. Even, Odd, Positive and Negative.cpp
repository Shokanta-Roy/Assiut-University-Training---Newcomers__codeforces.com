#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    int evencount=0,oddcount=0,positivecount=0,negativecount=0;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            evencount++;
        }
        else if(x%2!=0)
        {
            oddcount++;
        }
        if(x<0)
        {
            negativecount++;
        }
        else if(x>0)
        {
            positivecount++;
        }



    }
    cout<<"Even: "<<evencount<<endl;
    cout<<"Odd: "<<oddcount<<endl;
    cout<<"Positive: "<<positivecount<<endl;
    cout<<"Negative: "<<negativecount<<endl;

    return 0;
}
