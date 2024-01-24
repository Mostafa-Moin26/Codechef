#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    // https://www.codechef.com/START118D/problems/LITRATE
    int T;
    cin >> T;

    while (T--) {
        int P, L;
        cin >> P >> L;

        double literacyRate = (static_cast<double>(L) / P) * 100;

        if (literacyRate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
