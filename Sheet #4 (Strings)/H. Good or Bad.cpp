//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin>>t;
//	int good=0;
//	while(t--)
//	{
//		string ch;
//		cin>>ch;
//		int good=0;
//		for (int i = 0; i < ch.length(); i++)
//		{
//			if((ch[i]=='1' && ch[i+1]=='0' && ch[i+2]=='1' ) || (ch[i]=='0' && ch[i+1]=='1' && ch[i+2]=='0' ))
//			{
//				good=1;
//			}
//
//		}
//		if(good==1)
//		{
//			cout<<"Good"<<endl;
//		}
//		else
//		{
//			cout<<"Bad"<<endl;
//		}
//	}
//
//
//
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string ch;
		cin>>ch;

		if(ch.find("010") != string::npos || ch.find("101") != string::npos)
		{
			cout<<"Good"<<endl;
		}
		else
		{
			cout<<"Bad"<<endl;
		}
	}




	return 0;
}
