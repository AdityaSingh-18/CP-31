// Problem Link https://codeforces.com/problemset/problem/1511/C

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    while(q--){
        int x;
        cin >> x;
        int p = find(a.begin(), a.end(), x) - a.begin();
        cout << p + 1 << " \n"[q == 0];
        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    }
}

int main(){
    solve();
}


/*

We just find the card in the deck and print its position and then rotate the cards in
the range 0 to p + 1 so that the card at position p comes at front and rest shift right.
Time Complexity: O(n * q)
Space Complexity: O(n)

*/