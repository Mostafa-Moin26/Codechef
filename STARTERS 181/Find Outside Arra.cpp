#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/problems/FINDOUT
    
    int test; cin >> test;
    
    while (test--) {
        
        int n; cin >> n;
        vector<int> a(n);
        
        int zeros = 0;
        bool pos = false;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            
            if (a[i] == 0) zeros++;
            if (a[i] > 0) pos = true;
        }
        
        sort(a.begin(), a.end());
        
        if (zeros == n) {
            cout << -1 << endl;
        } else if (pos) {
            cout << a[n - 1] << " " << a[n - 1] << endl;
        } else {
            cout << a[0] << " " << a[0] << endl;
        }
        
        
    }

}
