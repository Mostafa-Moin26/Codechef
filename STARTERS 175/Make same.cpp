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

    // https://www.codechef.com/START175C/problems/P3_175
    
    w(x) {
            int n;
            cin >> n;
            vector<string> s(3);
            cin >> s[0] >> s[1] >> s[2];

            vector<int> cnt(3);
            int zero = 0;
    
            for (int i = 0; i < 3; i++) {
                cnt[i] = count(s[i].begin(), s[i].end(), '0');
                zero += cnt[i];
            }

            if (zero % n != 0) {
                cout << -1 << endl;
                continue;
            }

            int k = zero / n; 
            if (k == 0 || k == 3) {
                cout << 0 << endl;  
                continue;
            }

            sort(cnt.rbegin(), cnt.rend());

            int ans = k * n - accumulate(cnt.begin(), cnt.begin() + k, 0LL);
    
            cout << ans << endl;
    }
    return 0;
}