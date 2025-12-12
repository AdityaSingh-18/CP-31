// Problem Link https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, firstElement, k;
    cin >> n >> firstElement;
    int minElement = firstElement; 
    for (int i = 1; i < n; i++){
        cin >> k;
        minElement = min (minElement , k);
    }
    if (firstElement == minElement)   cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We can swap all elements from 1 to n-1 position but cannot swap the element at position 0 because the condition 
is if ai-1<ai and ai>ai+1 then swap ai with ai+1 but at position 0 there is no element at i-1 so condition not met.
So the element at position 0 should already be the smallest element in the array.
So we check the first element with the 1st element of sorted array and print result accordingly.
Time Complexity: O(nlogn)
Space Complexity: O(n)

*/