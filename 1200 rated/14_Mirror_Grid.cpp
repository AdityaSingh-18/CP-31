// Problem Link https://codeforces.com/problemset/problem/1703/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < (n + 1) / 2; i++){
        for (int j = 0; j < n / 2; j++){
            int countZero = 0;
            if(a[i][j] == '0')     countZero++;
            if(a[j][n - i - 1] == '0')    countZero++;
            if(a[n - i - 1][n - j - 1] == '0')    countZero++;
            if(a[n - j - 1][i] == '0')    countZero++;
            sum += min (countZero, 4 - countZero);
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

We calculate the number of 0 and 1 a element can be positioned at every rotation. We need to make 
either all element at those position 0 or 1 whichever is higher currently. So we add minimum of both 
these count.
Time Complexity: O(n ^ 2)
Space Complexity: O(n ^ 2)

*/