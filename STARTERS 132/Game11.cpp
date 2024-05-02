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


bool comp(int a, int b) {
    return a > b;
}
int main() {

    Mostafa
    // https://codechef.com/problems/GAME_XI

    w(x) {
        int n, m; cin >> n >> m;

        vi a(n);
        vi b(m);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];

        sort(a.begin(), a.end(), comp);
        sort(b.begin(), b.end(), comp);

        ll ans = 0;

        if (n < 4 || m < 4 || n + m < 11) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < 4; ++i) {
                ans += a[i];
                ans += b[i];
            }

            int cnt = 0, i = 4, j = 4;

            while (cnt < 3) {

                if (i < n && j < m) {
                    if (a[i] > b[j]) {
                        ans += a[i];
                        i++;
                    } else {
                        ans += b[j];
                        j++;
                    }
                } else if (i < n) {
                    ans += a[i];
                    i++;
                } else {
                    ans += b[j];
                    j++;
                }
                cnt++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}