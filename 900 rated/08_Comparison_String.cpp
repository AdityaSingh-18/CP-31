// Problem Link https://codeforces.com/problemset/problem/1837/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxLength = 1,count = 1;
    for (int i = 0; i < n - 1; i++){
        if (s[i] == s[i + 1])   count++;
        else   count = 1;
        maxLength = max(maxLength, count);
    }
    cout << maxLength + 1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We have to find the most consecutive < or > sign in the string.The length of array needed
to satisfy the string will be of maxLength + 1 because we need 2 numbers for a single sign
Ex: 2 > 1
Also we need new numbers only when there are consecutive same signs and we can use same numbers
again and again if there are different adjacent signs.
Ex: 10 < 11 < 12 > 11 > 10 < 11
So in above example even though there are many signs we can satify it with only 3 elements.
i.e most consecutive same sign(2) + 1.
Time Complexity: O(n)
Space Complexity: O(1)

*/