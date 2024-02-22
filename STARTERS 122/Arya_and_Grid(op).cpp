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

        ll width = (y - 1) / l + (col - y) / l + 1;
        ll height = (x - 1) / l + (row - x) / l + 1;

        cout << width * height << endl;
    }



    return 0;
}