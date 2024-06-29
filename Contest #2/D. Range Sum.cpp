//#include<bits/stdc++.h>
//using namespace std;
//
//long long sum(long long n)
//{
//    return n*(n+1)/2;
//}
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        long long l,r;
//        cin>>l>>r;
//        long long ans=sum(r)-sum(l-1);
//        cout<<ans<<endl;
//
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--){
		long long num1,num2;
		long long ma,mi;
		cin>>num1>>num2;
		ma = max(num1,num2);
		mi = min(num1,num2);
		mi--;
		long long result1 = mi*(mi+1) / 2;
		long long result2 = ma*(ma+1) / 2;
		cout<<result2 - result1<<endl;
	}
    return 0;
}
