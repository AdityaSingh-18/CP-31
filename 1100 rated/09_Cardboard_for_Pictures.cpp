// Problem Link https://codeforces.com/problemset/problem/1850/E

#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

void solve(){
    ull n, c;
    cin >> n >> c;
    vector<ull> a(n);
    for (auto &i : a)    cin >> i;
    ull high = sqrt(c), low = 1;
    while(low < high){
        ull mid = low + (high - low + 1) / 2;
        ull totalSum = 0;
        int i = 0;
        while(i < n){
            totalSum += (((mid * 2) + a[i]) * ((mid * 2) + a[i]));
            if(totalSum > c){
                break;
            }
            i++;
        }
        if(totalSum <= c){
            low = mid;
        }
        else{
            high = mid - 1;
        }
    }
    cout << low << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use binary search to calculate the value of w to have the exactly same amount of
cardboard used as c.
Time Complexity: O(n log c)
Space Complexity: O(n)

*/