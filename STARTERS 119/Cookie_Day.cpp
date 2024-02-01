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

    // https://www.codechef.com/problems/ADVITIYA3

    w(x) {

        int n, k; cin >> n >> k;

        int ans = INT_MAX;

        for (int i = 0; i < n; ++i) {

            int num; cin >> num;

            if (num >= k) {
                ans = min(ans, num % k);
            }
        }

        if (ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}