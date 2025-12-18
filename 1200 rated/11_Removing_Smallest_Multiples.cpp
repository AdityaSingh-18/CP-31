// Problem Link https://codeforces.com/problemset/problem/1734/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> visited(n, false);
    ll sum = 0;
    for (int i = 1; i <= n; i++){
        int j = 1;
        while (((i * j) - 1) < n && s[(i * j) - 1] == '0'){
            if(!visited[(i * j) - 1])   sum += i;
            visited[(i * j) - 1] = true;
            j++;
        }
    }
    cout << sum << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We start from 1 and try to visit as many continous multiple of i which have '1' in the string. 
If the index is not visited yet then add the number to the sum and mark the index as visited as 
well each time.
Time Complexity: O(n)
Space Complexity: O(n)

*/