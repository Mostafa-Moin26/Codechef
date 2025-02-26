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

bool alternate(const string &s) {
    
    int n = s.size();

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            return false;
    }
    return true;
}

int func(const string &s) {
    int n = s.size();

    if (alternate(s))
        return 0;

    int cnt0 = 0;

    for (char c : s) {
        if (c == '0')
            cnt0++;
    }

    if (n % 2 == 0) {
        int target = n / 2;

        if (cnt0 == target) {
            return 1;
        } else if (abs(cnt0 - target) == 1) {
            return 2;
        } else {
            return 3;
        }
    } else {
        int a = n / 2;
        int b = n - a;
        if (cnt0 == a || cnt0 == b) {
            return 1;
        } else if (abs(cnt0 - a) == 1 || abs(cnt0 - b) == 1) {
            return 2;
        } else {
            return 3;
        }
    }
}
signed main() {
    Mostafa

    // https://www.codechef.com/START175C/problems/P4_175

    vector<int> results;

    w(x) {
        string s;
        cin >> s;
        results.push_back(func(s));
    }

    for (int res : results){
        cout << res << endl;
    }
    return 0;
}