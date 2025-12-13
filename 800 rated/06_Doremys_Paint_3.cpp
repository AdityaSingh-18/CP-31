// Problem Link https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)    cin >> i;
    int y = -1, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == a[0])    count1++;
        else{ 
            if (y == -1)     y = a[i];
            if (y == a[i])     count2++;
            else{
                cout << "No\n";
                return;
            }
        }
    }
    if (count2 == 0 || abs(count1 - count2) < 2)     cout << "Yes\n";
    else    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}

/*

We calculate the count of elements in the array and also check if there is a third element in the array.
If there is 3 unique elements in the array then its impossible to have equal sum between adjacent elements.
We also check if the differnce of count between two elements is not more than 1 and print the result accordingly.
Time Complexity: O(n)
Space Complexity: O(n)

*/