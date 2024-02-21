#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/problems/MATCH_ALK

    int test; cin >> test;

    while (test--) {

        int ans, mxx = -1;

        for (int i = 1; i <= 22; ++i) {
            int a, b; cin >> a >> b;

            int mx = a + ( 20 * b);

            if (mx > mxx) {
                mxx = mx;
                ans = i;
            }
        }

        cout << ans << endl;
    }

}
