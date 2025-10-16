#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}
int main() {
    // your code goes here
    int t; cin >> t;
    while (t--) {
        int n, x, k;  cin >> n >> x >> k;
        
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end(), comp);
        
        for (int i = 0; i < k && i < n; i++) {
            a[i] = 0;
            x += 100;
        }
        
        int cnt = 0;
        
        for (int it : a) if (it > x) cnt++;
        
        cout << cnt + 1 << endl;
    }

}