// Problem Link https://codeforces.com/problemset/problem/1418/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    ll totalSticks = k * y + k;
    ll trades = ((totalSticks + x - 3) / (x - 1)) + k;
    cout << trades << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

As we know we need 1 stick and 1 coal to make a torch.
So total sticks needed to get k coals is equal to k * y and then we k sticks as well.
So we get the total sticks needed. As we already have a stick so we need totalSticks - 1 more.
We each trade we get x - 1 extra sticks so the total trades needed to get totalSticks needed
is equal to totalSticks - 1 + (x - 2)(for round up) / x - 1 and k trades to get the coals.
Time Complexity: O(1)
Space Complexity: O(1)

*/