#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string sen, res;
    int counter = 0;
    getline(cin, sen);
    for (int i = 0; i < sen.size(); i++)
    {
        if (sen[i] != ' ' && sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ',')
        {
            res += sen[i];
        }
        if ((sen[i] == ' ' || sen[i] == '!' || sen[i] == '.' || sen[i] == '?' || sen[i] == ',' || i == sen.size() - 1) && res.size() != 0)
        {
            counter++;
            res = "";
        }
    }
    cout << counter << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}