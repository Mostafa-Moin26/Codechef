#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://www.codechef.com/problems/ARYAGRID

    w(x) {
        ll row, col, x, y, l; cin >> row >> col >> x >> y >> l;

        ll up, down, right, left;

        up = (x - 1) / l;
        down = (row - x) / l;
        right = (col - y) / l;
        left = (y - 1) / l;

        if (right > 0) {

            right = right + (right * (up + down));
        }
        if (left > 0) {
            left = left + (left * (up + down));
        }

        cout << up + down + right + left + 1 << endl;
    }

    return 0;
}