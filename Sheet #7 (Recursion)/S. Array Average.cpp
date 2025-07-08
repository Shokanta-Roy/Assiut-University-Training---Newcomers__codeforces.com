#include <bits/stdc++.h>
using namespace std;

double av(int index, double res, double arr[], int size)
{
    if (index == size)
    {
        return res / size;
    }
    return av(index + 1, res + arr[index], arr, size);
}
int main()
{
    int size;
    double arr[100];
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << fixed << setprecision(6) << av(0, 0, arr, size);
}