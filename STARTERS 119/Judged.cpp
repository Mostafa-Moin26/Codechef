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

    // https://www.codechef.com/problems/ADVITIYA2

    w(x) {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            int num; cin >> num;

            sum += num;
        }

        if (sum < 4) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}