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
    // https://www.codechef.com/problems/CHECKADJSUM

    w(x) {
        int n, q;
        cin >> n >> q;
        long long s = 0;
        int arr[n];
        vector<int> v(1000007, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            v[arr[i]]++;
            s += arr[i];
        }
        sort(arr, arr + n);
        long long a = arr[0];
        long long b = arr[1];
        long long m = 1ll * 2 * s - (a + b);
        while (q--) {
            int x;
            cin >> x;
            if (x > m) {
                cout << -1 << endl;
            } else if (x == m) {
                for (int i = 1; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << arr[0] << endl;
            } else {
                bool f = false;
                long long ss = 2 * s;
                for (int i = 0; i < n && !f; i++) {
                    long long k = ss - x;
                    for (int j = 0; j < n; j++) {
                        if (j == i)continue;
                        if ((arr[i] + arr[j]) == k) {
                            a = arr[i];
                            b = arr[j];
                            f = true;
                        }
                    }
                }
                if (!f) {
                    cout << -1 << endl;
                } else {
                    bool f1 = false, f2 = false;
                    cout << a << " ";
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == a) {
                            if (f1) {
                                cout << arr[i] << " ";
                            } else {
                                f1 = true;
                            }
                        } else if (arr[i] == b) {
                            if (f2) {
                                cout << arr[i] << " ";
                            } else {
                                f2 = true;
                            }
                        } else {
                            cout << arr[i] << " ";
                        }
                    }
                    cout << b << endl;
                }
            }
        }
    }

    return 0;
}