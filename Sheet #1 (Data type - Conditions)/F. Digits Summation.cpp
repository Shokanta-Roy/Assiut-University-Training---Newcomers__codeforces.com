#include <iostream>

using namespace std;

int main() {
    long long N, M;

    cin >> N >> M;

    int lastdigitofN = N % 10;
    int lastdigitofM = M % 10;

    // Summing up the last digits
    int sum = lastdigitofN + lastdigitofM;

    cout << sum << endl;

    return 0;
}
