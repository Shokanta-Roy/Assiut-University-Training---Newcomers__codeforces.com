#include <iostream>
using namespace std;

void concatenate_arrays(int N, int A[], int B[], int C[])
{
    for(int i = 0; i < N; i++)
    {
        C[i] = B[i];
    }
    for(int i = 0; i < N; i++)
    {
        C[N + i] = A[i];
    }
}

int main()
{
    int N;
    cin >> N;

    int A[N], B[N], C[2 * N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    concatenate_arrays(N, A, B, C);

    for(int i = 0; i < 2 * N; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
