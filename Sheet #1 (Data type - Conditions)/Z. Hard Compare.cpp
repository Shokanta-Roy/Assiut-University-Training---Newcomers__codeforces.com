#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;

    //if b* log(a)>d * log(c) , than a^b> c^d;
    double log_ab = b * log(a);
    double log_cd = d * log(c);

    if (log_ab > log_cd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
