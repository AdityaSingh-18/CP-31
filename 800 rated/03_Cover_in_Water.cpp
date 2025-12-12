// Problem Link https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n ; i++){
        int gap = 0;
        while (s[i] == '.' and i < n){
            gap++;
            i++;
        } 
        if (gap >= 3){
            count = 2;
            break;
        }
        count+=gap;
    }
    cout << count << "\n";
}
 
int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We will get infinite water source(minecraft reference) if we have 3 consecutive empty cell so we check for
max consecutive empty cell.
If there are no 3 consecutive empty cells we count the number of empty cells because then we have to fill
every empty cells. 
Time Complexity: O(n)
Space Complexity: O(1)

*/