#include <bits/stdc++.h>
using namespace std;
int main()
{
	string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int flag;
	cin >> flag;
	string value;
	cin >> value;
	int size = value.size();
	int z = 0;
	
	if (flag == 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (z = 0; z < Original.size(); z++)
			{
				if (value[i] == Original[z])
				{ 
					break;
				}
			}
			cout << Key[z];
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			for (z = 0; z < Key.size(); z++)
			{
				if (value[i] == Key[z])
				{ 
					break;
				}
			}
			cout << Original[z];
		}
	}
}