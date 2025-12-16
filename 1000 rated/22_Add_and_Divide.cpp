// Problem Link https://codeforces.com/problemset/problem/1485/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int minCount = a + b;
    for (int i = (b == 1 ? 1 : 0); i <= 10; i++){
        int count = i, A = a, B = b + i;
        while (A){
            A /= B;
            count++;
        }
        minCount = min (minCount, count); 
    }
    cout << minCount << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use brute force to calculate minimum operation needed.
Let x be the number of operation of type 2 so try all values of y and check how many moves of
type 1 needed.
Note:It is never good to increase the value of b over 6.
Time Complexity: O(1)
Space Complexity: O(1) 

*/