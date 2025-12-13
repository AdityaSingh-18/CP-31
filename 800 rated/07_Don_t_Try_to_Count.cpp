// Problem Link https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int count = 0;
    while (n <= (2 * m) || count <= 2){
        for (int i = 0; i < n; i++){
            int j = 0;
            while (i < n && j < m && x[i + j] == s[j])    j++;
            if(j == m){
                cout << count << "\n";
                return;
            }
        }
        x += x;
        n *= 2;
        count++;
    }
    cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We use brute force to check if the substring s can be obtained from the string x.
We append minimum 2 times to get the substring or till the length of x is less than 2 times the length of s.
Time Complexity: o(n * m)
Space Complexity: o(1)

*/