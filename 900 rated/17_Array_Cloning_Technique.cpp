// Problem Link https://codeforces.com/problemset/problem/1665/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    int x, maxFreq = 1;
    for (int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
        maxFreq = max (maxFreq ,freq[x]);
    }
    cout << n- maxFreq + (ceil)(log2((double)n/maxFreq)) << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

To fill the array with same elements we first find the max freq of a element in array because
that element will fill the array fastest.
If there are x elements of max freq then we have to fill rest n-x positions each taking 1 operation.
Also we need to clone the array atleast to the size of array so we calculate that using formula:
Minimum clone operations needed= (ceil)log2((double)n/maxFreq).
Space Complexity: O(n)
Time Complexity: O(n)

*/