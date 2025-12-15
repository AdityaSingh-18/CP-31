// Problem Link https://codeforces.com/problemset/problem/1791/D

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n; 
    string s;
    cin >> s;
    vector<int> prefix(n), suffix(n);
    vector<bool> isVisited(26, false);
    int count = 0;
    for (int i = 0; i < n; i++){
        if( !isVisited[s[i] - 'a'] ){
            isVisited[s[i] - 'a'] = true;
            count++;
        }
        prefix[i] = count;
    }
    fill(isVisited.begin(), isVisited.end(), false);
    count = 0;
    for (int i = n - 1; i >= 0; i--){
        if( !isVisited[s[i] - 'a'] ){
            isVisited[s[i] - 'a'] = true;
            count++;
        }
        suffix[i] = count;
    }
    int maxDistinct = 0;
    for (int i = 1; i < n; i++){
        maxDistinct = max (maxDistinct, prefix[i - 1] + suffix[i]);
    }
    cout << maxDistinct << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first precompute the distinct count in both prefix and suffix of the string.
Then we iterate the string and find the max sum of the prefix and suffix distinct count.
Time Complexity: O(n)
Space Complexity: O(n)

*/