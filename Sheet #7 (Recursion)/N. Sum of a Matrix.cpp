#include<bits/stdc++.h>
using namespace std;    

void sum(int r1, int c1, int row, int col, int arr1[100][100], int arr2[100][100], int result[100][100])
{
    if (r1 == row || c1 == col)
    {
        return;
    }
    if (c1 < col - 1)
    {
        sum(r1, c1 + 1, row, col, arr1, arr2, result);
    }
    else
    {
        sum(r1 + 1, 0, row, col, arr1, arr2, result);
    }
    result[r1][c1] = arr1[r1][c1] + arr2[r1][c1];
}
void solve()
{
    int row, col;
    cin >> row >> col;
    int arr1[100][100], arr2[100][100], result[100][100];
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            cin >> arr1[i][z];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            cin >> arr2[i][z];
        }
    }
    sum(0, 0, row, col, arr1, arr2, result);
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < col; z++)
        {
            cout << result[i][z] << " ";
        }
        cout << endl;
    }
    

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}