// Problem Link https://codeforces.com/problemset/problem/1155/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++){
        if(s[i] < s[i - 1]){
            cout << "YES\n";
            cout << i << " " << i + 1 << "\n";
            return;
        }
    }
    cout << "NO\n";
}

int main(){
    solve();
}


/*

As the lexicographic comparison of strings is implemented by operator <​​, we compare the adjacent 
characters in the string and check if there is a character which is less lexicographical than the 
current character. If found we print the index of the characters.
If no less lexicographical character found in the entire string then it is already in the
least lexicographical order.
Time Complexity: O(n)
Space Complexity: O(1)

*/