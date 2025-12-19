// Problem Link https://codeforces.com/problemset/problem/1487/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    if(n % 2 == 0)  cout << (k % n ? k % n : n) << "\n";
    else{
        ll y = n * (n - 1) / 2;
        k = (k % y ? k % y : y);
        ll x = (k - 1) / (n / 2);
        ll ans = (k + x) % n ? (k + x) % n : n;
        cout << ans << "\n"; 
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

If the number of spots are even then both the cats will never overlap any position and we
can simply do k % n to get the position.
If number of spots are odd then will overlap in some positions as they move forwars. The 
pattern repeats after every n * (n - 1) / 2 hours so we take the mod of k. Then we calculate 
the number of times they overlap in k hours. At each overlap cat B posiiton increases by 1 
from where it should have been without any overlap. Then we add it to k and do mod n to get
the current position of cat B.
Time Complexity: O(1)
Space Complexity: O(1)

*/