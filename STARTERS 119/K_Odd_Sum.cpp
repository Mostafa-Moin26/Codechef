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

    // https://www.codechef.com/problems/ADVITIYA5

    w(x) {
        int n, k; cin >> n >> k;

        int i;
        for (i = 1; i <= k; ++i) {

            cout << i << " ";
        }
        for (int j = i + 1; j <= n; j += 2) cout << j << " ";
        for (int j = i; j <= n; j += 2) cout << j << " ";

        cout << endl;

    }

    return 0;
}
