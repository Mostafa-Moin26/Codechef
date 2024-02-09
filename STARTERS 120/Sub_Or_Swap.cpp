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

    // https://www.codechef.com/problems/ASM120

    w(x) {
        int x, y; cin >> x >> y;

        while (x > 0) {
            if (x > y) {
                swap(x, y);
            }

            int temp = x;
            x = y % x;
            y = temp;
        }

        cout << y << endl;
    }

    return 0;
}