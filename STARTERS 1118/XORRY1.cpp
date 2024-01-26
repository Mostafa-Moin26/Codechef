
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

    // https://www.codechef.com/problems/XORRY1

    w(x) {
        int n; cin >> n;

        for (int p = 30; p >= 0; --p) {

            if (((1 << p) & n) > 0) {
                cout << n - (1 << p) << " " << (1 << p)  << endl;
                break;
            }
        }
    }

    return 0;
}