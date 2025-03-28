// Problem link ----->
https://www.codechef.com/practice/course/zco-inoi-problems/IARCSJUD/problems/LEADGAME

// Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    
    int n; cin >> n;
    
    int p1 = 0, p2 = 0;
    int winner, maxLed = 0;
    
    while (n--) {
        int n1, n2; cin >> n1 >> n2;
        
        p1 += n1;
        p2 += n2;
        
        int lead = abs(p1 - p2);
        
        if (lead > maxLed) {
            maxLed = lead;
            winner = (p1 > p2) ? 1 : 2;
        }
    }
    
    cout << winner << " " << maxLed << endl;

}
