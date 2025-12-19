// Problem Link https://codeforces.com/problemset/problem/1541/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int count = 0;
    for (int i = 1; i < n; i++){
        for (int j = (a[i] * 1) - i; j <= n ; j += a[i]){
            if(i < j && a[i] * a[j] == (i + j))    count++;
        }
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

Instead of checking for every pair we can check for only specific positions according
to the value if a[i]. We can calculate the the initial value of the index for the second
element and then jump a[i] positions for next valid index which are less than equal to n.
Time Complexity: O(n log n)
Space Complexity: O(n)

*/