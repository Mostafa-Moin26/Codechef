#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    // https://www.codechef.com/problems/JOINSTATE

    int T; cin >> T;

    while (T--) {
        int n, m; cin >> n >> m;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];

        int cnt = 0;
        int ans = 0;

        for (int i = 0; i < n; ++i) {

            cnt += arr[i];

            if (cnt >= m) {
                cnt = 0;
                ans++;
            }

        }

        cout << ans << endl;
    }

}
