// Problem Link https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    if (s.front() != s.back())     s.back() = (s.back()== 'a' ? 'b' : 'a');     //flip the character
    cout << s << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    } 
}


/*

The pattern for this problem is that it doesnt matter what the sequence of A,B inbetween the string
it will not cause much difference because both pattern are dependent on each other but the boundary
characters should be same.
Time Complexity: O(1)
Space Complexity: O(1)

*/