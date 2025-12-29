// Problem Link https://codeforces.com/problemset/problem/1775/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n;
    vector<vector<int>> a(n);
    map<int, int> b;
    for(int i = 0; i < n; i++){
        cin >> m;
        a[i].resize(m);
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            b[a[i][j]]++;        
        }
    }
    for (auto &i : a){
        int uniqueBit = 0;
        for (int &j : i){
            if(b[j] == 1){
                uniqueBit = 1;
                break;
            }
        }
        if(!uniqueBit){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We store the bits frequency for each sequence. We check for the unique bit in each sequence, 
if any sequence doesnt have a unique bit then it is possible. If all the sequence have atleast 
one unique but then its not possible.
Time Complexity: O(n * m)
Space Complexity: O(n * m)

*/