// Problem Link https://codeforces.com/problemset/problem/1520/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i] -= i;
    }
    unordered_map<ll, ll> freq;
    for (int i = 0; i < n; i++){
        freq[a[i]]++;
    }
    ll count = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        count += (it->second * (it->second - 1)) / 2;
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We convert the element into element minus index. Then we count the freq of each element.
Then finally count the number of pairs can be formed using formula f * (f - 1) / 2.
Time Complexity: O(n)
Space Complexity: O(n)

*/