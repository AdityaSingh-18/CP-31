// Problem Link https://codeforces.com/problemset/problem/1742/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> pref;
    pref.push_back(0);
    vector<ll> prefmax;
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        pref.push_back(pref.back() + x);
        if(i == 0)  prefmax.push_back(x);
        else    prefmax.push_back(max (prefmax.back(), x));
    }
    for (int i = 0; i < q; i++){
        ll x;
        cin >> x;
        int idx = upper_bound(prefmax.begin(), prefmax.end(), x) - prefmax.begin();                    
        cout << pref[idx] << " \n"[i == q - 1];
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

We precompute the height and the max sum for that height in a vector pair.
Then we find the upperbound of the questions and print the sum stored at b[idx].second.
Time Complexity: O(n + q log n)
Space Complexity: O(n)

*/