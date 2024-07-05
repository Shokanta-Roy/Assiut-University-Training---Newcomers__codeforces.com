#include<iostream>
using namespace std;

bool is_palindrome(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    if(is_palindrome(arr,n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}
