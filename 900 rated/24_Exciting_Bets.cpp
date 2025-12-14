// Problem Link https://codeforces.com/problemset/problem/1543/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b;
    cin >> a >> b;
    if (a == b){
        cout << 0 << " " << 0 << "\n";
        return; 
    }
    ll maxExcitement = abs(a - b);
    ll minSteps = min (maxExcitement - a % maxExcitement, a % maxExcitement);
    cout << maxExcitement << " " << minSteps << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

The Max excitement between two bets will always be the difference between two bets and if the 
bets are equal we will have infinite excitement.Then we calculate the minSteps required for
Max Excitement by calculating the least steps required to change the bet to the multiple of
Max Excitement.
Time Complexity: O(1)
Space Complexity: O(1)

*/