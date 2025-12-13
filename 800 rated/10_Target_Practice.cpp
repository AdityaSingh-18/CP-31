// Problem Link https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int sum = 0;
    string s;
    for(int i = 0; i < 10; i++){
        cin >> s;
        for(int j = 0; j < 10; j++){
            if(s[j] == 'X'){
                sum += 1 + min({i, 9 - i, j, 9 - j});
            }
        }
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We find the postion of X in the string and calculate the closest edge of X and add the score to the sum.
Time Complexity: O(1)
Space Complexity: O(1)

*/