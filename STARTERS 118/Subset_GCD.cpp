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

    // https://www.codechef.com/problems/GCDPERM

    w(x) {
        int n, k; cin >> n >> k;

        int poss = 1;

        for (int i = 1; i <= n; ++i) {

            if (i * k <= n) poss = i;
            else {break;}
        }

        for (int i = 1; i <= k; ++i) {
            cout << i * poss << " ";
        }

        cout << endl;
    }

    return 0;
}