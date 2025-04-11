#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/problems/FLIPPRE
    
    int test; cin >> test;
    
    while (test--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int zeros = 0, ones = 0;
        int ans = 1;
        
        for (int i = 0; i < n; i++) {
            
            if (s[i] == '0') zeros++;
            if (s[i] == '1') ones++;
            
            if (zeros == ones) ans *= 2;
        }
        
        cout << ans << endl;
    }

}
