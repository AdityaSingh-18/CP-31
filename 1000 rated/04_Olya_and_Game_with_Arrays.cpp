//Problem Link https://codeforces.com/problemset/problem/1859/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll sum = 0, firstMin = 1e18, secondMin = 1e18;
    while (n--){
        int m;
        cin >> m;
        ll x, smallest = 1e18, secondSmallest = 1e18; 
        for (int i = 0; i < m; i++){
            cin >> x;
            if (x < smallest){
                secondSmallest = smallest;
                smallest = x;
            }
            else if (x < secondSmallest)    secondSmallest = x;
        }
        firstMin = min (firstMin, smallest);
        sum += secondSmallest;
        secondMin = min (secondMin, secondSmallest);
    }
    cout << sum - secondMin + firstMin << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

The most optimal way to hace the max beauty is to move the least element from each array except one to the 
array with the smallest 2nd least element.
The least element among the entire arrays will always gonna be added in the beauty so it is best to move
that element along with least element of other arrays to the array with smallest 2nd least element to 
increase the overall sum of least elements.
Time Complexity: O(m)
Space Complexity: O(1)

*/