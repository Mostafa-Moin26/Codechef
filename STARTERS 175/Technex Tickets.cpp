#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/START175C/problems/P2_175

int main() {
    // your code goes here
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        
        int ans = 0;
        int first = 1, second = 3;
        
        while (1) {
            ans++;
            if (first == n || second == n) {
                break;
            }
            first = second - 1;
            second += 2;
        }
        
        cout << ans << endl;
    }

}
