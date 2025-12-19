// Problem Link https://codeforces.com/problemset/problem/1679/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    ll sum = 0;
    vector<pair<ll,int>> firstQuery(n);
    ll x;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        firstQuery[i] = {x, 0};
    }
    int secondQueryIndex = -1;
    ll secondQueryValue = -1;
    int k = 1;
    while(k <= q){
        int t;
        ll x;
        cin >> t;
        if(t == 1){
            int i;
            cin >> i >> x;
            if(firstQuery[i - 1].second > secondQueryIndex)    sum = sum - firstQuery[i - 1].first + x;
            else    sum = sum - secondQueryValue + x;
            firstQuery[i - 1] = {x, k};
        }
        else{
            cin >> x;
            sum = n * x;
            secondQueryIndex = k;
            secondQueryValue = x;   
        }
        cout << sum << "\n";
        k++;
    }
}

int main(){
    solve();
}


/*

We find the sum of the initial array and store the values in a array numbers in a 
vector pair with initial query as 0. Then for each query if its type 1 we compare
the query of the element at index i with last secondQuery index and whichever is higher
will be the current value of the element at index i so we update the sum accordingly.
If its type 2 we simply do sum equal n * x and store the secondQuery index and value.
Time Complexity: O(n + q)
Space Complexity: O(n) 

*/