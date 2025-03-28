// Problem link ----->
https://www.codechef.com/practice/course/zco-inoi-problems/ZCOPRAC/problems/ZCO14003?tab=statement

// Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long maxRev = 0;
    for (int i = 0; i < n; i++) {
        maxRev = max(maxRev, (long long)a[i] * (n - i));
    }

    cout << maxRev << endl;
}
