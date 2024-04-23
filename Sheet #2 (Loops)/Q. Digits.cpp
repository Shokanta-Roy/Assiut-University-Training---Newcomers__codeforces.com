#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        do {
            cout << n % 10 << " ";
            n = n / 10;
        } while (n != 0);
        cout << endl;
    }
    return 0;
}
