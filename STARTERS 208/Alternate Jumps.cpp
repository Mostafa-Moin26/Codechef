#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        int pos = n;
        
        for (int i = 1; i < n; i++) {
            
            if (i & 1) {
                pos -= (n - i);
            } else {
                pos += (n - i);
            }
        }
        
        cout << pos << endl;
    }

}