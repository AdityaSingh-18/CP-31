// Problem Link https://codeforces.com/problemset/problem/1312/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
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

We sort the array in descending order.
In this case for each pair of indexes i<j the condition j−aj≠i−ai holds.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/