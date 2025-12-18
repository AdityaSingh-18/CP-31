// Problem Link https://codeforces.com/problemset/problem/1631/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    reverse(a.begin(), a.end());
    int count = 0;
    for (int i = 1; i < n; ){
        if(a[i] == a[0]){
            i++;
            continue;
        }
        count++;
        i *= 2;
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

We first store the array and reverse it for easy process and calculations.
With the rules of the operation we can only make the whole array equal to the last element
in the original array.
So we start comparing the last element with all his previous element and value of i in the
loop determines the number of elements we can convert to last element in 1 operation.
So if we find a element which is not equal to last element of original array then we increase
count for the operations and also do i * 2 because we can cover the next i elements whether
they are equal to last element or not so we dont need to check fot them.
Time Complexity: O(n)
Space Complexity: O(n)

*/