// Problem Link https://codeforces.com/problemset/problem/1673/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    unordered_set<char> seen;
    int unique = 0;
    for (int i = 0; i < n; i++){
        if(seen.find(s[i]) == seen.end()){
            unique++;
            seen.insert(s[i]);
        }
        else    break;
    }
    for (int i = unique; i < n; i++){
        if(s[i] != s[i - unique]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first calculate the number of consecutive unique characters in the string.
For the string to be balanced it should repeat its pattern for every unique count length.
The count of consecutive unique characters also help in checking for consecutive same character check
as if there is any unique character left then it will not be matched in the pattern checking process.
Time Complexity: O(n)
Space Complexity: O(n)

*/