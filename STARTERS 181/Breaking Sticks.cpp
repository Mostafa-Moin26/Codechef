#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/problems/BRKSTICK
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        
        int res = 0;
        
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            
            res += (num - 1);
        }
        
        cout << res << endl;
    }

}
