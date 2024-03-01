#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/problems/ROOMALLOC

    int test; cin >> test;

    while (test--) {
        int n; cin >> n;

        int ans = 0;

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;

            ans += (num + 1) / 2;
        }

        cout << ans << endl;
    }

}
