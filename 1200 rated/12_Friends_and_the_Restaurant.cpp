// Problem Link https://codeforces.com/problemset/problem/1729/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int &i : a)    cin >> i;
    for (int &i : b)    cin >> i;
    for (int i = 0; i < n; i++){
        c[i] = b[i] - a[i];
    }
    sort(c.begin(), c.end());
    int i = 0, j = n - 1, count = 0;
    while(i < j){
        if(c[i] + c[j] >= 0){
            count++;
            j--;
        }
        i++;
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

We first find the difference between the burles he has and the burles he will spend and sort it.
As the number of groups matter and not the number of friends in the group it is never beneficial to
group more than two friends. So now we use two pointers and try to find pairs where the sum of their
difference between burles they have and burles they will spend is more than or equal to zero.
Time Complexity: O(n log n)
Space Complexity: O(n) 

*/