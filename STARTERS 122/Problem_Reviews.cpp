#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    int test; cin >> test;

    while (test--) {
        int n; cin >> n;

        bool flag = true;

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;

            if (num <= 4) flag = false;

        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
