// Problem Link https://codeforces.com/problemset/problem/1676/G

#include <bits/stdc++.h>
using namespace std;
#define int long long

int dfs(string s, vector<vector<int>> &a, int r, int &ans){
    int count = (s[r - 1] == 'B') ? 1 : -1;
    for (int &i : a[r]){
        count += dfs(s, a, i, ans);
    }
    if(count == 0)  ans++;
    return count;
}

void solve(){
    int n, x;
    cin >> n;
    vector<vector<int>> a(n * 2);
    for (int i = 2; i <= n; i++){
        cin >> x;
        a[x].push_back(i);
    }
    string s;
    cin >> s;
    int ans = 0;
    dfs(s, a, 1, ans);
    cout << ans << "\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We store all the childs in a 2d-vector and traverse from root to all the childs using DFS and 
maintain the balance of black and white in count.
If the count value becomes zero the subtree is balanced and we increase the ans by 1 amd return the 
count to parent.
Time Complexity: O(n)
Space Complexity: O()

*/