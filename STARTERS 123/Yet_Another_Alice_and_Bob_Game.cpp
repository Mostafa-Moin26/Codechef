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
    // https://www.codechef.com/problems/YETALICEBOB

    w(x) {
        int n, A, B;
        cin >> n >> A >> B;
        if (A == B) {
            if (n > A) {
                if ((n - (A + 1)) % (A + 1) == 0) {
                    cout << "Bob" << endl;
                }
                else cout << "Alice" << endl;
            }
            else cout << "Alice" << endl;
        }
        else if (A < B) {
            if (n <= A) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else cout << "Alice" << endl;
    }

    return 0;
}