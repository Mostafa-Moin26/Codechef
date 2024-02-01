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

    // https://www.codechef.com/problems/ADVITIYA4


    w(x) {

        int n, q; cin >> n >> q;

        string s; cin >> s;

        int initial_max = 0;
        int cnt = 1;

        for (int i = 1; i < s.size(); ++i) {

            if (s[i] == s[i - 1]) {
                cnt++;
                initial_max = max(initial_max, cnt);
            }
            else cnt = 1;
        }

        initial_max = max(initial_max, cnt);

        cout << initial_max << " ";
        char ch;

        int ans = max(cnt, initial_max);

        while (q--) {
            cin >> ch;

            if (s.back() == ch) {
                cnt++;
                ans = max(ans, cnt);
            } else {
                cnt = 1;
            }

            s += ch;

            cout << ans << " ";
        }

        cout << endl;

    }
    return 0;
}