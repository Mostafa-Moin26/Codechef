#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    if (K == N) {
        cout << "-1\n";
        return;
    }

    vector<int> groups[K], P(N + 1);

    for (int i = 1; i <= N; i++)
        groups[i % K].push_back(i);

    for (int i = 0; i < K; i++) {
        if (groups[i].size() == 1) {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 0; i < K; i++) {
        int sz = groups[i].size();
        for (int j = 0; j < sz; j++) {
            P[groups[i][j]] = groups[i][(j + 1) % sz];
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << P[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // https://www.codechef.com/START178C/problems/PERMCON

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}