#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    // https://www.codechef.com/START211D/problems/WOLFDOWN
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        int cnt = 0;
        
        int i = 0;
        while (s[i] == '0' && i < n) {
            cnt++, i++;
        }
        
        cout << cnt << endl;
    }

}
