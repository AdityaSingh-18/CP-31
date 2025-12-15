// Problem Link https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    string S = s + s;
    int maxLength = 0;
    for (int i = 0; i < 2 * n; i++){
        if (S[i] == c){
            int count = 0;
            while (S[i] != 'g' && i < 2 * n){
                i++;
                count++;
            }
            maxLength = max (maxLength, count);
        }
    }
    cout << maxLength << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to find the max distance between 'r' and 'g'.We append the string to itself as the pattern
of string is repeated.Then we find the current character and distance of r from g.
Time Complexity: O(n)
Space Complexity: O(n)

*/