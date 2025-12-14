// Problem Link https://codeforces.com/problemset/problem/1675/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int &i : a)   cin >> i;
    for (int i = n - 1; i > 0; i--){
        if (a[i] == 0){
            cout << "-1\n";
            return;
        }
        while (a[i] <= a[i - 1]){
            a[i - 1] /= 2;
            count++;
        }    
    }
    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}


/*

We simply iterate the array from back and check if ai <= ai-1 then we divide the element at
ai-1 until it becomes strictly smaller than element at ai.
If any element except the last element becomes 0 then be cannot make the array strictly increasing
because we cannot decrease 0 any further by dividing by 2.
Time Complexity: O(n)
Space Complexity: O(n)

*/