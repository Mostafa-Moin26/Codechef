// Problem link ----->
https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO14001?tab=statement

// Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    
    int n, h; cin >> n >> h;
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int commands, idx = 0, box = 0;
    
    while (cin >> commands && commands != 0) {
        
        if (idx > 0 && commands == 1) {
            idx--;
        } else if (idx < n - 1 && commands == 2) {
            idx++;
        } else if (box == 0 && commands == 3) {
            if (a[idx] > 0) {
                a[idx]--;
                box = 1;
            }
        } else if (box == 1 && commands == 4) {
            
            if (a[idx] < h) {
                a[idx]++;
                box = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

}