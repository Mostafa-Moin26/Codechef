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
    // https://www.codechef.com/problems/MAXADJSUM

    w(x) {
        int n; cin >> n;

        vi a(n);
        ll sum = 0 ;
        REP(i, 0, n - 1) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());



        cout << 2 * sum - (a[0] + a[1]) << endl;
    }

    return 0;
}