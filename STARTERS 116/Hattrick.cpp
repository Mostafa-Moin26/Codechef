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

// https://www.codechef.com/problems/HATTRICK

    w(x) {
        char a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

        int cnt = 0;
        bool flag = false;
        vector<char> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        arr.push_back(d);
        arr.push_back(e);
        arr.push_back(f);

        for (int i = 0; i < 6; ++i) {
            if (arr[i] == 'W') cnt++;
            else cnt = 0;

            if (cnt == 3) flag = true;
        }

        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}