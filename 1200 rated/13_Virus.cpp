// Problem Link https://codeforces.com/problemset/problem/1704/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; 
    cin >> n >> m;
    vector<ll> a(m + 1,0);
    vector<ll> b;
    for (int i = 1; i <= m; i++)   cin >> a[i];
    sort(a.begin() + 1, a.end());
    for(int i = 1; i <= m; i++){
        b.push_back(a[i] - a[i - 1] - 1);
    }
    ll last = n - a[m] - 1 + a[1];
    if(last > 0)    b.push_back(last);
    sort(b.begin() + 1, b.end(), greater<>());
    ll ans = 0, count = 0;
    for (int i = 1; i < b.size(); i++){
        if(b[i] - count * 2 > 0){
            ans += max (1LL, b[i] - count * 2 - 1);
        }
        count += 2;
    }
    cout << n - ans << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first sort the index of the infected houses and then calculate the number of
uninfected houses between the infected ones. As our priority will be to save those
segments which have higher number of uninfected houses we sort it in decreasing order.
As for each passing days two adjacent houses will be infected we maintain a count which we
will increase by two each time and also calculate the number of uninfected houses using count.
Time Complexity: O(n log n)
Space Complexity: O(n) 

*/