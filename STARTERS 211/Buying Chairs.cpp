#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    // https://www.codechef.com/START211D/problems/CHRBUY
    int t; cin >> t;
    
    while (t--) {
        int w, p, k; cin >> w >> p >> k;
        
        int res = 0;

        if (k <= w) {
            
            cout << k * 2 << endl;
        } else {
            res += (w * 2);
            k -= w;
            
            cout << res + k << endl;
        }
    }

}
