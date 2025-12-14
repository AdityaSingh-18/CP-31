// Problem Link https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll x, maxTime = b;
    for (int i = 0; i < n; i++){
        cin >> x;
        maxTime += min (x, a - 1); 
    }
    cout << maxTime << "\n"; 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the maxTime by adding initial time and minimum between a-1 and x.We minus 1 from a because 
two actions happens simultaneously i.e we add ai to initial timer and decrease the timer by 1.
So it may appear the timer can go max to a seconds but actually we get max to a-1 seconds because of
immediate decrement. 
Time Complexity: O(n)
Space Complexity: O(1)

*/