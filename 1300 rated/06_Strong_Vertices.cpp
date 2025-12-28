// Problem Link https://codeforces.com/problemset/problem/1857/D

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c;
    for (auto&i : a)    cin >> i;
    for (auto&i : b)    cin >> i;
    for (int i = 0; i < n; i++){
        a[i] -= b[i];
    }
    int maxDiff = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        if(a[i] == maxDiff)    c.push_back(i + 1);
    }
    int m = c.size();
    cout << m << "\n";
    for (int i = 0; i < m; i++){
        cout << c[i] << " \n"[i == m - 1];
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The equation au - av >= bu - bv can be written as au - bu >= av - bv.
Now the vertex with the path to all the other vertex will be the one with maximum
difference value of au - bu.
So we store the indices of vertex with maximum difference.
Time Complexity: O(n)
Space Complexity: O(n)

*/