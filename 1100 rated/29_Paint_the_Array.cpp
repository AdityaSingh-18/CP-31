// Problem Link https://codeforces.com/problemset/problem/1618/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll oddGCD = 0, evenGCD = 0;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        if(i % 2){
            oddGCD = gcd(oddGCD, a[i]);
        }
        else{
            evenGCD = gcd(evenGCD, a[i]);
        }
    }
    int evenOK = 1, oddOK = 1;
    for (int i = 1; i <= n; i++){
        if(i & 1){
            evenOK = evenOK && (a[i] % evenGCD != 0);
        }
        else{
            oddOK = oddOK && (a[i] % oddGCD != 0);
        }
    }
    if(evenOK && oddOK)   cout << max(oddGCD, evenGCD) << "\n";
    else if(evenOK)    cout << evenGCD << "\n";
    else if(oddOK)    cout << oddGCD << "\n";
    else    cout << 0 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

As all the elements at odd or even position should be divisible by d so we first find
the GCD of all odd and even positions. Then we check for both the oddGCD and evenGCD if
they divide any of the even at opposite parity position in the array.
If both GCDs are valid we print the max one and if any one is valid we print that one.
If both are invalid GCD (i.e they both divide any element at opposite parity position)
then there no value for d to make array beautiful.
Time Complexity: O(n * log A)
Space Complexity: O(n)

*/