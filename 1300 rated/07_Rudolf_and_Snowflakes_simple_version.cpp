// Problem Link https://codeforces.com/contest/1846/problem/E1

#include <bits/stdc++.h>
using namespace std;
#define int long long
set<int> a;

void solve(){
    int n;
    cin >> n;
    if(a.count(n))     cout << "YES\n";
    else     cout << "NO\n";
}

signed main(){
    for (int i = 2; i <= 1000; i++){
        int sum = i + 1;
        for (int j = i * i; sum <= 1e6; j *= i){
            sum += j;
            if(sum >= 1e6)      break;
            a.insert(sum);
        }
    }
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

The pattern of all the possible number of vertex are like 1 + k + k ^ 2 + k ^ 3 with adding of new vertex 
happening atleast 2 times.
So we precompute all the possible vertex in a set and check if n is present in the set or not. 
Time Complexity: O(sqrt(n) * p * log n)
Space Complexity: O(p)

*/