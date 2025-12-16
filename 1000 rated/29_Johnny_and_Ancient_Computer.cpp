// Problem Link https://codeforces.com/problemset/problem/1362/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getRatio(ll a){
    while(a % 2 == 0){
        a /= 2;
    }
    return a;
}

void solve(){
    ll a, b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << "\n";
        return;
    }
    if(a > b)   swap(a, b);
    if(getRatio(a) != getRatio(b)){
        cout << -1 << "\n";
        return;
    }
    int count = 0;
    while(a != b){
        if(a * 8 <= b)    a *= 8;
        else if(a * 4 <= b)    a *= 4;
        else    a *= 2;
        count++;
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

We can reprsent the two numbers a and b as r1.2^x and r2.2^y and since we can only multiply and
divide by 2,4 and 8 so r1 should be equal to r2 where both are odd. Otherwise we print -1 and return.
If they are equal then it is possible to make both numbers equal so we use the operations to make them
equal and count the number of operations needed.
Time Complexity: O(log max(a, b))
Space Complexity: O(1)

*/