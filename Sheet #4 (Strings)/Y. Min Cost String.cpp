#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string value;
    int cost[26];
    cin >> value;
    for (int i = 0; i < 26; i++)
    { 
        cin >> cost[i];
    }
    
    int size = value.size();
    int counter = 0;
    
    for (int i = 0; i < size; i++)
    {
        counter = 0;
        if (value[i] == '?')
        {
            for (int z = i; z < size; z++)
            { 
                if (value[z] == '?')
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
            if (counter == size)
            {
                cout << "0" << endl;
                for (int z = 0; z < size; z++)
                {
                    cout << "a";
                }
                return;
            }
            else
            {
                if (i == 0)
                {
                    int ma = INT_MAX, index;
                    for (int z = 0; z < value[counter] - 97 + 1; z++)
                    { 
                        int mycost = abs(cost[value[counter] - 97] - cost[z]);
                        if (mycost < ma)
                        {
                            ma = mycost;
                            index = z; 
                        }
                    }
                    char c = index + 97; 
                    for (int z = 0; z < counter; z++)
                    { 
                        value[z] = c;
                    }
                    i += counter; 
                }
                else
                {
                    int ma = INT_MAX, index;
                    for (int z = 0; z < 26; z++)
                    {
                        int mycost = abs(cost[value[i - 1] - 97] - cost[z]) +
                                     abs(cost[z] - cost[value[i + counter] - 97]);
                        if (mycost < ma)
                        {
                            ma = mycost;
                            index = z; 
                        }
                    }
                    char c = index + 97; 
                    for (int z = i; z < i + counter; z++)
                    { 
                        value[z] = c;
                    }
                    i += counter;
                }
            }
        }
    }

    long long finalCost = 0;
    
    for (int i = 0; i < size - 1; i++)
    { 
        finalCost += abs(cost[value[i] - 97] - cost[value[i + 1] - 97]);
    }
    cout << finalCost << endl;
    cout << value << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}