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

    // https://www.codechef.com/problems/VAL142

    w(x) {
        int x; cin >> x;

        int i = 7;

        int sum = 1;

        while (i--) {

            x -= sum;
            sum *= 2;
        }

        if (x < 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}