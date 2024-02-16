#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

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

    // https://www.codechef.com/problems/ANADSW

    w(x) {

        int n; cin >> n;

        int arr[n];
        REP(i, 0, n - 1) cin >> arr[i];

        bool flag = true;

        if (n == 2) {

            if (arr[0] > arr[1]) flag = false;
        }
        if (n == 3) {
            if ((arr[1] > arr[0] && arr[1] > arr[2]) || (arr[1] < arr[0] && arr[1] < arr[2]))
                flag = false;
        }

        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}