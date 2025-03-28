// Problem link ----->
https://www.codechef.com/practice/course/zco-inoi-problems/IARCSJUD/problems/BOOKLIST

// Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    
    int n; cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int q; cin >> q;
    
    while (q--) {
        int idx; cin >> idx;
        idx--;
        cout << a[idx] << endl;
        a.erase(a.begin() + idx);
    }

}
