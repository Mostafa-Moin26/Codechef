#include <bits/stdc++.h>
using namespace std;

int main() {

   // https://www.codechef.com/problems/MXALT
   // your code goes here
   
   int test; cin >> test; 
   
   while (test--) {
       
       int n; cin >> n;
       
       vector<int> a(n);
       
       for (int i = 0; i < n; ++i) cin >> a[i];
       
       sort(a.begin(), a.end());
       
       int sum1 = 0;
       
       for (int i = 0; i < n / 2; ++i) {
           sum1 += a[i];
       }
       int sum2 = 0;
       for (int i = n / 2; i < n; ++i) {
           sum2  += a[i];
       }
       
       cout << sum2 - sum1 << endl;
   }

}
