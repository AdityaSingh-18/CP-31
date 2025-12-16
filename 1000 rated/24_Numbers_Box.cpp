// Problem Link https://codeforces.com/problemset/problem/1447/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int x, sum = 0, minAbsolute = 100, hasZero = 0, negative = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> x;
            sum += abs(x);
            if(x == 0)    hasZero = 1;
            if(x < 0)   negative++;
            minAbsolute = min (minAbsolute, abs(x));
        }
    }
    if(!hasZero){
        if (negative % 2){
            sum -= 2 * minAbsolute;
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

We first take all the input and calculate the absolute sum of the array.
As we can apply the operation as many times as we want, if there are an even number
of negative numbers in the array they can be swapped to positive no matter the position.
But if there is an odd number of negative numbers then there are two cases:
If there is no zero present then at least 1 negative will remain even after countless swaps. So
the best solution is to leave the element closest to 0 as negative.
If there is a zero present in the array then the odd-negative issue disappears,
because zero allows sign adjustments freely, so we can still make all elements non-negative.
Time Complexity: O(n * m)
Space Complexity: O(1)

*/