#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] > mx) {
                mx = a[i];
            }
        }
        
        int cnt1 = 0;
        int cnt2 = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == mx) {
                cnt1++;
            }
            if (a[i] == mx - 1) {
                cnt2++;
            }
        }

        if (cnt1 == 1 && cnt2 == n - 1) {
            cout << mx - 2 << endl;
        } else {
            cout << mx - 1 << endl;
        }
    }

}