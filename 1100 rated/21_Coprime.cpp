// Problem Link https://codeforces.com/problemset/problem/1742/D

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    vector<int> a[1001];
    for (int i = 1; i <= n; i++){
        cin >> x;
        a[x].push_back(i);
    }
    vector<int> pairs[1001];
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(gcd(i, j) == 1) {
                pairs[i].push_back(j);
            }
        }
    }
    int maxSum = -1;
    for(int i = 1; i <= 1000; i++) {
        for(int j: pairs[i]) {
            if(!a[i].empty() && !a[j].empty()) {
                maxSum = max(maxSum, a[i].back() + a[j].back());
            }
        }
    }
    cout << maxSum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The array has at most 1000 distinct elements, since ai≤1000. For each value, store the largest index 
it is in. Then we brute force all pairs of values, and find the coprime pair with largest sum of indices.
Time Complexity: O(n + a ^ 2 * log a)(where a is 1000 for this problem, a ^ 2 for 
                                        iterations and log a for GCD)
Space Complexity: O(n + a ^ 2)

*/
