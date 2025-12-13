// Problem Link https://codeforces.com/problemset/problem/1859/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int maxValue = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        maxValue = max (maxValue, a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == maxValue)    count++;
    }
    if(count == n){
        cout << -1 << "\n";
        return;
    }
    cout << n - count << " " << count << "\n";
    for (int i = 0; i < n; i++){
        if(a[i] != maxValue)    cout << a[i] << " ";
    }
    cout << "\n";
    while(count--){
        cout << maxValue << " \n"[count == 0];
    }
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We know that a number is never divisible by numbers smaller than the number itself. So we find the 
max number in the array. If all the elements in the array are equal to maxElement then we cant make
two groups. Otherwise we make one group of elements less than maxElement and other group of elements
equal to maxElement.
Time Complexity: O(n)
Space Complexity: O(n)

*/