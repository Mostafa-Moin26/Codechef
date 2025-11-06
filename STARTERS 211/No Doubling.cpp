#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}
int main() {
    // your code goes here
    // https://www.codechef.com/START211D/problems/NODOUB?tab=statement
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end(), comp);
        
        if (n > 2 && a[0] == a[1]) {
            swap(a[1], a[n - 1]);
        }
        
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

}
