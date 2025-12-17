// Problem Link https://codeforces.com/problemset/problem/1891/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll twoPower(ll a){
    ll k = 0;
    while(a % 2 == 0){
        a /= 2;
        k++;
    }
    return k;
}

ll power(ll b){
    ll k = 1;
    while(b--){
        k *= 2;
    }
    return k;
}

void solve(){
    int n, q;
    cin >> n >> q;
    vector<pair<ll,ll>> a(n); 
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = twoPower(a[i].first);
    }
    vector<ll> b;
    unordered_set<ll> seen;
    ll x;
    for (int i = 0; i < q; i++) {
        cin >> x;
        if (seen.find(x) == seen.end()){
            b.push_back(x);
            seen.insert(x);
        }
    }

    for (int i = 0; i < b.size(); i++){
        for (int  j = 0; j < n; j++){
            if(b[i] <= a[j].second){
                a[j].first += power(b[i] - 1);
            }
        }
        for (int k = 0; k < n; k++){
            a[k].second = min (a[k].second, (b[i] - 1));
        }
    }

    for (int i = 0; i < n; i++){
        cout << a[i].first << " \n"[i == n - 1];
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

We first store the array in vector pair with values element and its highest power of 2.
Then we store only unique values of queries using unordered set in another vector.
Then we check for the queries with the highest power of the elements and update the values accordingly.
After each loop we update the highest power values of element because if a element is updated for
a query x then the elements cannot be divisible more than or equal to x.
Time Complexity: O(n * q)
Space Complexity: O(n)

*/