#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int total_sum=0;
    for(int i=1;i<=n;i++)
    {
        int sum = sum_of_digits(i);
        if(sum>=a && sum<=b)
        {
            total_sum+=i;
        }
    }

    cout<<total_sum<<endl;

    return 0;
}
