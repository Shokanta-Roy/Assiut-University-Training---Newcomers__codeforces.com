//#include<iostream>
//#include<cmath>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    if(n==2)
//    {
//        cout<<"YES"<<endl;
//    }
//    for(int i=2; i<n; i++)
//    {
//        if(n%i==0)
//        {
//            cout<<"YES"<<endl;
//        }
//        else
//        {
//            cout<<"NO"<<endl;
//        }
//    }
//
//
//    return 0;
//}
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1) return false;
    if (x <= 3) return true;

    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }

    return true;
}

int main()
{
    int x;
    cin >> x;

    if (isPrime(x))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
