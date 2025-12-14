// Problem Link https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)   cin >> i;
    int maxDifference = a[n - 1] - a[0];
    for (int i = 0; i < n - 1; i++){
        int d1 = a[i] - a[i + 1];
        int d2 = a[n - 1] - a[i];
        int d3 = a[i] - a[0];
        maxDifference = max ({maxDifference, d1 , d2 , d3});
    }
    cout << maxDifference << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

There are 3 cases for the max value of an-ai.They are:
Difference between ai - ai+1 (Difference between adjacent)
Difference between an-1 - ai (Difference between last and rest of arrays)
Difference between ai - a0 (Difference between first and rest of arrays)
We then find the maximum difference among these three cases and print the result accordingly.
Time Compplexity: O(n)
Space Complexity: O(n)

*/