#include <iostream>
#include <vector>

using namespace std;

void shift_array_right(int N, int X, vector<int>& A)
{
    X = X % N;
    vector<int> result(N);

    for (int i = 0; i < N; ++i)
    {
        result[(i + X) % N] = A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    shift_array_right(N, X, A);

    return 0;
}
