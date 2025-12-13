// Problem Link https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    for (i = 0; i < n / 2; i++){
        if (s[i] == s[n - 1 - i])    break;
    }
    cout << (n - i * 2) << "\n"; 
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We compare the characters from both the ends and if they are equal to break out of the for loop.
And print the length of the maximum string we can initial start with,
Time Complexity: O(n)
Space Complexity: O(n)

*/