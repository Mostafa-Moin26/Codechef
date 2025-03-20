#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here

    // https://www.codechef.com/START178C/problems/PLACE0110
    
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y; cin >> X >> Y;
        
        
        int ans = min(X, Y) * 2;
        int add = abs(X - Y) * 2 - 1;
        
        cout << ans + (add > 0 ? add : 0) << endl;
        

    }

}