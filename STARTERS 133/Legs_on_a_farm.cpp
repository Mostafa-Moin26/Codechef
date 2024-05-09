#include <bits/stdc++.h>
using namespace std;

int main() {

   // https://www.codechef.com/problems/FARMLEGS
   // your code goes here
   int test; cin >> test;
   
   while (test--) {
       
       int n; cin >> n;
       
       if (n % 4 == 0) {
           cout << n / 4 << endl;
       } else {
           cout << n / 4 + 1 << endl;
       }
   }

}
