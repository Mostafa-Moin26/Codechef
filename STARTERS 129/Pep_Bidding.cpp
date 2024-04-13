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
    // https://www.codechef.com/problems/BID

    w(x) {
        int n; cin >> n;

        int AP, AD, PP, PD;
        AP = AD = PP = PD = 0;

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;
            AP += num;
        }

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;
            AD += num;
        }

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;
            PP += num;
        }

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;
            PD += num;
        }

        if (AP > PP && AD > PD) {
            cout << "A" << endl;
        } else if (PP > AP && PD > AD) {
            cout << "P" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}