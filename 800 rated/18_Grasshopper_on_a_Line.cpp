// Problem Link https://codeforces.com/problemset/problem/1837/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, k;
    cin >> x >> k;
    if (x % k)  cout << "1\n" << x << "\n";
    else    cout << "2" << "\n" << x - 1 << " 1\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can reach any point x by atmost 2 steps.If x is not divisible by k then we can reach x directly 
in one jump.And if it is divisible by k then we go x-1 steps in one jump as it will not be divisible
by k and 1 step in next jump since k is always greater than 2. 
Time Complexity: O(1)
Space Complexity: O(1)

*/