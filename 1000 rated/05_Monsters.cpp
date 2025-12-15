// Problem Link https://codeforces.com/problemset/problem/1849/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair <int, int>> a(n + 1);
    int x;
    for (int i = 1; i <= n; i++){
        cin >> x;
        x %= k;
        if(x == 0)    x = k;
        a[i] = {x, i};    
    }
    sort(a.begin() + 1, a.end(), [](pair<int ,int> &p1,pair<int, int> &p2){
        if (p1.first == p2.first)   return p1.second < p2.second;
        return p1.first > p2.first;
    });
    for (int i = 1; i <= n; i++){
        cout << a[i].second << " \n"[i == n];
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We store the health of the mosters in a vector pair having the health % k if its greater than k and as it
is otherwise along with the index value of the healths.We then sort the array in descending order as the
mosters with higher health are killed first.So we sort the vector pair on the basis of their health and 
keep the order if the healths are equal.Then we print the index stored in vector pair at a.second.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/