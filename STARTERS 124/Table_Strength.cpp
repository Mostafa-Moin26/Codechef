#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> weights(n);
        for (int i = 0; i < n; ++i) {
            cin >> weights[i];
        }

        sort(weights.begin(), weights.end());

        ll maxWeight = 0;
        for (int i = 0; i < n; ++i) {
            maxWeight = max(maxWeight, weights[i] * (n - i));
        }

        cout << maxWeight << endl;
    }

    return 0;
}
