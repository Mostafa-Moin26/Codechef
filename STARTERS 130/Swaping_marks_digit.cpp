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

int reversNumber(int n) {

    int num = 0;

    while (n != 0) {
        int digit = n % 10;

        num = num * 10 + digit;

        n /= 10;
    }

    return num;
}
int main() {

    Mostafa
    // https://www.codechef.com/problems/SWMA

    w(x) {
        int a, b; cin >> a >> b;

        bool f = false;

        if (reversNumber(a) > b || a > reversNumber(b) ||
                reversNumber(a) > reversNumber(b) || a > b) {
            f = true;
        }

        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}