// Problem Link https://codeforces.com/problemset/problem/1691/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &i : a)   cin >> i;
    for (int i = 0; i < n; ){
        int j = i;
        while (j < n && a[i] == a[j]){
            j++;
        }
        if (j - i < 2){
            cout << -1 << endl;
            return;
        }
        b[i] = j;
        while ((i + 1) < j){
            b[i + 1] = i + 1;
            i++;
        }
        i = j;
    }
    for (int i = 0; i < n; i++){
        cout << b[i] << " \n"[i == n - 1];
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

The students can only exchange shoes when each shoe size in the array have 2 or more frequencies.
So we check if any shoe size is unique in the array then shuffling is impossible and he cannot 
shuffle with anyone.
If the freq is more than 1 then we store the index by rotating index within that shoe size group by 1
to generate shuffled map so no one gets his own shoe.
Time Complexity: O(n)
Space Complexity: O(n)

*/