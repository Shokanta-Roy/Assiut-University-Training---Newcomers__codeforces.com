#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int numbers[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int results[N / K + 1];
    int resultIndex = 0;

    for (int i = 0; i < N; i += K)
    {
        int min_in_chunk = INT_MAX;
        for (int j = i; j < i + K && j < N; ++j)
        {
            if (numbers[j] < min_in_chunk)
            {
                min_in_chunk = numbers[j];
            }
        }
        results[resultIndex++] = min_in_chunk;
    }

    for (int i = 0; i < resultIndex; ++i)
    {
        if (i > 0) cout << " ";
        cout << results[i];
    }
    cout << endl;

    return 0;
}
