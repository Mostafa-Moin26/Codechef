#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    
    while (t--) {
        
        int n, c; cin >> n >> c;
        
        vector<long long> b(n), d(n);
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        
        vector<vector<long long>> minB(n, vector<long long> (n + 1, LLONG_MAX));
        
        for (int i = 0; i < n; i++) {
            minB[i][1] = b[i];
            for (int j = 2; j <= n; j++) {
                int pos = (i + j - 1) % n;
                minB[i][j] = min(minB[i][j - 1], b[pos]);
            }
        }
        
        long long ans = LLONG_MAX;
        
        for (int i = 0; i < n; i++) {
            
            long long cost = 1LL * i * c;
            
            for (int j = 0; j < n; j++) {
                int start = (j - i + n) % n;
                long long min_val = minB[start][i + 1];
                cost += d[j] * min_val;
            }
            ans = min(ans, cost);
        }
        
        cout << ans << endl;
    }

}