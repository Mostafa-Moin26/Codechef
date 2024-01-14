#include<bits/stdc++.h>

using namespace std;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

// https://www.codechef.com/problems/SRTO3

    w(x) {
        int n, m; cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];

        int first = n - *max_element(b.begin(), b.end());

        sort(a.begin() + first, a.end());

        for (int i = 0; i < n; ++i) cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}