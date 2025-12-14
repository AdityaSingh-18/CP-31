// Problem Link https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll min, max;
    if (n % 2 == 0 && n >= 4){
        max = n/4;
        min = n/6;
        if (n % 6 != 0)    min++;
        cout << min << " " << max << "\n";
    }
    else    cout << "-1\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can calculate the maximum and minimum buses by dividing them by 4 and 6.
For minimum if the total wheel is not completely divisible by 6 there are two cases both 
resulting in 1 extra bus.When modulous is 2 we have to remove 1 bus of 6 wheel and add 2 buses
of 4 wheels.And when modulous is 4 we add 1 bus of 4 wheels.
Time Complexity: O(1)
Space Complexity: O(1)

*/