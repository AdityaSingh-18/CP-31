// Problem Link https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int l = 0, r = n - 1, x = 1, y = n;
    while (l < r - 2){
        if(a[l] == x){
            l++;
            x++;
        }
        else if(a[l] == y){
            l++;
            y--;
        }
        else if(a[r] == x){
            r--;
            x++;
        }
        else if(a[r] == y){
            r--;
            y--;
        }
        else{
            break;
        }
    }
    if(l < r - 2)   cout << l + 1 << " " << r + 1 << "\n";
    else    cout << -1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We use two pointers l and r and check if both the extreme elements in the permutation are
max or min element or not. We need a permutation of atleast 4 elements to make this condition true.
So we only check for both these conditions until l < r - 2. If we find two index where the segment
satisfies the condition before l becomes r - 1 then we print those index otherwise we print -1.
Time Complexity: O(n)
Space Complexity: O(n)

*/