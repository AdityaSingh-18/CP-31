// Problem Link https://codeforces.com/problemset/problem/1876/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    for (ll &i : a)    cin >> i;
    for (ll &i : b)    cin >> i;

    vector<pair <ll, ll>>  c(n);
    for (int i = 0; i < n; i++)    c[i] = {b[i], a[i]}; 
    sort(c.begin(), c.end());

    ll cost = p, remaining = n - 1;
    for (int i = 0; i < n && remaining; i++){
        if (c[i].first >= p)    break;
        ll sent = min (remaining, c[i].second);
        remaining -= sent;
        cost += c[i].first * sent;
    }
    cost += remaining * p; 
    cout << cost << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first store the max announcement a resident can share and cost in a vector pair.
Then we sort the vector pair on the basis of cost.
As he have to share the announcement to atleast one resident we take the initial cost as p and remaining
residents as n - 1.
Then we iterate the sorted vector pair and calculate the minimum cost to share through residents.
If any residents are still left then he share the announcement to remaining residents at the cost of p.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/