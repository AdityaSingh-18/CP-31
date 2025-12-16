// Problem Link https://codeforces.com/problemset/problem/1690/D

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < k; i++){
        if(S[i] == 'W')    count++;
    }
    if (count == 0){
        cout << 0 << "\n";
        return;
    }
    int minCount = count;
    for (int i = k; i < n; i++){
        if (S[i - k] == 'W')    count--;
        if (S[i] == 'W')    count++;
        minCount = min (minCount, count);
        if (minCount == 0)   break;
    }
    cout << minCount << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We first count thr number of 'W' at the starting k places of the string S.If its zero we simply
dont need to paint any stripe.Otherwise we use a sliding window and update the count of 'W' in the
group of k and store the minimum count of 'W' in a variable.
Atlast we print the minimum number of stripes to be painted.
Time Complexity: O(n)
Space Complexity: O(1)

*/