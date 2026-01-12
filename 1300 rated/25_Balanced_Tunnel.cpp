// Problem Link https://codeforces.com/problemset/problem/1237/B

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), visited(n + 1, 0);
    for (auto &i : a)   cin >> i;
    for (auto &i : b)   cin >> i;
    int j = 0, count = 0;
    for (int i = 0; i < n; i++){
        if(visited[a[i]])     continue;
        while(j < n && a[i] != b[j]){
            visited[b[j]] = 1;
            j++;
            count++;
        }
        j++;
    }
    cout << count << "\n";
}

signed main(){
    solve();
}