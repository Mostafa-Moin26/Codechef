#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

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
    // https://www.codechef.com/problems/TRANCST

    w(x) {
        int n; cin >> n;

        int add, ans = 0;
        add = (1 << zrobits(n));

        int i = zrobits(n) + 1;
        n = n >> i;

        while (n) {
            if (!(n & 1)) {
                ans += add;
                add = (1 << i);
            }
            i++;
            n = n >> 1;
        }

        cout << ans << endl;
    }

    return 0;
}