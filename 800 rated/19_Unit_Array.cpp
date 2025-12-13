// Problem Link https://codeforces.com/problemset/problem/1834/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x, positive = 0, negative = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 1)     positive++;
        else    negative++;
    }
    int diff = max (0, (negative - positive + 1) / 2);
    negative -= diff;
    if (negative % 2)    diff++;
    cout << diff << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We calculate the count of 1 and -1 in the array.Then we calculate the number of operation needed to
make the sum of array positive.Then we check the parity of negative count remaining after the operations,
as it should be even to make the product positive and print the result accordingly.
Time Complexity: O(n)
Space Complexity: O(1)

*/
