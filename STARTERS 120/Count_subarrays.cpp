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

    // https://www.codechef.com/problems/COUNTSUB343

    w(x) {

        int n; cin >> n;

        vi p(n);
        vi ans(n + 1, 0);

        REP(i, 0, n - 1) cin >> p[i];

        REP(i, 0, n - 1) {
            int s = 0;
            REP(j, i, n - 1) {

                s += p[j];

                if (s <= n) {
                    ans[s]++;
                } else {
                    break;
                }
            }
        }

        REP(i, 1, n) cout << ans[i] << " ";
        cout << endl;

    }

    return 0;
}