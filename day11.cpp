#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

double mypow(double num, int pow) {
    if (pow == 0)
        return 1.0;

    if (num == 0) {
        if (pow < 0) {
            cout << "Undefined!" << endl;
            return -1;
        }
        return 0.0;
    }

    long long p = pow;  // handles INT_MIN

    if (p < 0) {
        num = 1.0 / num;
        p = -p;
    }

    double ans = 1.0;

    while (p > 0) {
        if (p % 2 == 1)
            ans *= num;

        num *= num;
        p /= 2;
    }

    return ans;
}

int main() {
    cout << mypow(3, 5) << endl;     // 243
    cout << mypow(2, -3) << endl;    // 0.125
    cout << mypow(-2, 3) << endl;    // -8
    cout << mypow(-2, 4) << endl;    // 16
    cout << mypow(5, 0) << endl;     // 1
    cout << mypow(0, 5) << endl;     // 0

    return 0;
}

