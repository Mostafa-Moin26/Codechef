#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define all(x) (x).begin(), (x).end()
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
bool comp(int a, int b) {return a > b;}
signed main() {
    Mostafa

    // https://www.codechef.com/START175C/problems/MXFREQ

    w(x) {
        int n;
        int x;
        cin >> n >> x;

        vector<int > a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        unordered_map<int, vector<int>> pos;

        freq.reserve(n * 2);
        pos.reserve(n * 2);

        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
            pos[a[i]].push_back(i);
        }

        int ans = 0;
        for (auto it : freq) {
            ans = max(ans, it.second);
        }

        if (x == 1) {
            cout << ans << endl;
            continue;
        }

        for (auto it : pos) {
            int  v = it.first;
            int  y = v * x;
            int oy = 0;

            if (freq.find(y) != freq.end()) {
                oy = freq[y];
            }

            vector<pair<int, int>> b;
            b.reserve(it.second.size() + (pos.count(y) ? pos[y].size() : 0));

            for (int idx : it.second) {
                b.push_back({idx, 1});
            }
            if (pos.find(y) != pos.end()) {
                for (int idx : pos[y]) {
                    b.push_back({idx, -1});
                }
            }

            sort(b.begin(), b.end(), [](auto a, auto b)
                 { return a.first < b.first; });

            int sum = INT_MIN, currSum = 0;
            
            for (auto it : b) {
                currSum = max((int)it.second, currSum + it.second);
                sum = max(sum, currSum);
            }
            if (sum < 0)
                sum = 0;

            ans = max(ans, oy + sum);
        }

        cout << ans << endl;
    }
    return 0;
}