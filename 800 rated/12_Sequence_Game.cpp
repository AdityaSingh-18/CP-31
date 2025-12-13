// Problem Link https://codeforces.com/problemset/problem/1862/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i && a[i - 1] > a[i])    count++;
    }
    cout << n + count << endl;
    for (int i = 0; i < n; i++){
        if (i && a[i - 1] > a[i]){
            cout << a[i] << " ";
        }
        cout << a[i] << " \n"[i == n - 1];
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

She only write the numbers which are greater than or equal to previous number.So if there is a
sequence where previous number is greater than current number then there has to be a number less than
or equal to current number to make the condition true.
Time Complexity: O(n)
Space Complexity: O(n)

*/