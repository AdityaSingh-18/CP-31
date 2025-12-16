// Problem Link https://codeforces.com/problemset/problem/1506/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << "\n";
        return;
    }        
    int n = a.size();
    int m = b.size();
    int maxCommon = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a[i] == b[j]){
                int count = 0, x = i , y = j;
                while(x < n && y < m && a[x] == b[y]){
                    x++;
                    y++;
                    count++;
                }
                maxCommon = max (maxCommon, count);
            }
        }
    }
    cout << m + n - (2 * maxCommon) << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We have to find the longest common substring in both the strings.
So we iterate through both the strings and find same characters and then count the length of the 
substring.
Then finally we get the max length of substring.
The number of operation needed to get this substring is equal to m + n - 2 * maxCommon because we 
have to remove the remaining characters from both the strings.
Time Complexity: O(n * m)
Space Complexity: O(1)

*/