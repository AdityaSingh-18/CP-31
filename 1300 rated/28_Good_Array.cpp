// Problem Link https://codeforces.com/problemset/problem/1077/C

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> b;
    int j = 0, k = 0;
    int sum = 0, maxElement = 0, secondMax = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        if(maxElement <= a[i]){
            secondMax = maxElement;
            maxElement = a[i];
            k = j;
            j = i;
        }
        else if(secondMax < a[i]){
            secondMax = a[i];
            k = i;
        }
    }
    for (int i = 0; i < n; i++){
        if(a[i] == sum - (2 * maxElement) && i != j){
            b.insert(i + 1);
        }
        if(a[i] == sum - (2 * secondMax) && i != k){
            b.insert(i + 1);
        }
    }
    cout << b.size() << "\n";
    for (auto &i : b)     cout << i << " ";
    cout << "\n";
}

signed main(){
    solve();
}