// Problem Link https://codeforces.com/problemset/problem/1904/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, xK, yK, xQ, yQ;
    cin >> a >> b >> xK >> yK >> xQ >> yQ;
    vector<pair<int,int>> K(8), Q(8);
    int x[] = {1, 1, -1, -1};
    int y[] = {1, -1, 1, -1};
    for (int i = 0; i < 4; i++){
        K[i] = {xK + a * x[i], yK + b * y[i]};
        Q[i] = {xQ + a * x[i], yQ + b * y[i]};
        K[i + 4] = {xK + b * x[i], yK + a * y[i]};
        Q[i + 4] = {xQ + b * x[i], yQ + a * y[i]};
    }
    if (a == b){
        sort(K.begin(), K.end());
        K.erase(unique(K.begin(), K.end()), K.end());
        sort(Q.begin(), Q.end());
        Q.erase(unique(Q.begin(), Q.end()), Q.end());
    }
    int count = 0;
    for (auto k : K){
        for (auto q : Q){
            if(k == q)  count++;
        }
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

We calculate all 8 positions of knight from King and Queen positions.There will be duplicate positions
when a and b are equal so we remove those duplicates using sorting and then erasing duplicates.
Then we calculate all the positions which are matching in both king and queen coordinates.
Time Complexity: O(1)
Space Complexity: O(1)

*/