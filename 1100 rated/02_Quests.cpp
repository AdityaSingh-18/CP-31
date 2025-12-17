// Problem Link https://codeforces.com/problemset/problem/1914/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), sum(n), b(n), bMax(n);
    for (int &i : a)    cin >> i;
    sum[0] = a[0];
    for (int i = 1; i < n; i++){
        sum[i] = a[i] + sum[i - 1];
    }

    for (int i = 0; i < n ; i++){
        cin >> b[i];
    }

    bMax[0] = b[0];
    for (int i = 1; i < n; i++) {
        bMax[i] = max(bMax[i-1], b[i]);
    }
    
    int maxTotal = 0, totalSum = 0;
    for (int i = 0; i < min(n ,k); i++){
        totalSum = sum[i] + (k - i - 1) * bMax[i];
        maxTotal = max (maxTotal, totalSum);
    }

    cout << maxTotal << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We store both the arrays in vector and precompute both the sum of elements at each
position in 1st vector and the max element at each position in 2nd vector.
Then we calculate the sum of experience for all the combinations and store the max sum.
Time Complexity: O(n)
Space Complexity: O(n)

*/