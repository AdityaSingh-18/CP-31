// Problem Link https://codeforces.com/problemset/problem/1879/C

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int sum = 1, steps = 0, count = 1;
    for (int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]){
            sum = (sum * count) % MOD;
            count = 1;
        }
        else{
            count++;
            steps++;
        }
    }
    sum = (sum * count) % MOD;
    int i = steps;
    while(i > 1){
        sum = (sum * i) % MOD;
        i--;
    }
    cout << steps << " " << (steps == 0 ? 1 : sum) << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We count the number of times when adjacent strings are same for the minimum deletion steps.
We also calculate the number of different sequences of continous equal adjacent strings. 
Since deletions can be performed in any order, we multiply by steps! to get the total number of ways.
Time Complexity: O(n)
Space Complexity: O(n)

*/