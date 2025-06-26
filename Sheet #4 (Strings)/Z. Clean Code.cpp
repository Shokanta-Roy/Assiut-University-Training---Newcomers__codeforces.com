#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string line;
    int open=1;
    while (getline(cin, line)) {
        bool flag = false;

        if (line.size() == 0 || line == " ") {
            continue;
        }
        for (int i=0; i<line.length(); i++)
        {
            if (line[i] == '/' && line[i+1] == '/' && open) {
                break;
            }
            else if (line[i]== '/' && line[i+1] == '*')
            {
                i++;
                open = 0;
            }
            else if (line[i] == '*' && line[i+1] == '/' && !open)
            {
                i++;
                open = 1;
            }
            else if (open==1)
            {
                cout << line[i];
                flag = true;
            }
            
        }
        if (flag && open == 1)
        {
            cout << endl;
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}