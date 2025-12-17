// Problem Link https://codeforces.com/problemset/problem/1797/B

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n)); 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < (n + 1)/ 2; i++){
        for (int j = 0 ; j < n; j++){
            if((n - i - 1) == i && j > n / 2){
                break;
            }
            if(a[i][j] != a[n - i - 1][n - j - 1]){
                count++;
            }
            if(count > k){
                cout << "NO\n";
                return;
            }
        }
    }
    if((k - count) % 2 == 0 || n % 2 == 1)    cout << "YES\n";
    else    cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We first store the element in a 2D vector.Then we iterate the 2D vector to check the number
of places the 2D vector differ from its 180 degree pattern.
If the count becomes greater than k then we cant make it equal to its 180 degree pattern then
we check if the remaining moves after making the array pattern identical is even or not and well
as the size of array is odd or not. If its neither then we cannot make the pattern identical with
the remaining moves as for even size array we need even moves to make it back identical and for
odd array we can always use remaining moves on the middlemost element as the change wont affect the 
pattern.
Time Complexity: O(n ^ 2)
Space Complexity: O(n ^ 2)

*/