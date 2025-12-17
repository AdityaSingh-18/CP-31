// Problem Link https://codeforces.com/problemset/problem/1869/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll> x(n), y(n);
    for (int i = 0; i < n ; i++){
        cin >> x[i] >> y[i];
    }
    ll minCost = llabs(x[a - 1] - x[b - 1]) + llabs(y[a - 1] - y[b - 1]);
    ll minA = 2e18, minB = 2e18;
    for(int i = 0; i < k; i++){
        minA = min(minA, llabs(x[a - 1] - x[i]) + llabs(y[a - 1] - y[i]));
        minB = min(minB, llabs(x[b - 1] - x[i]) + llabs(y[b - 1] - y[i]));
    }
    minCost = min (minCost, minA + minB);
    cout << minCost << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

As we can travel from start to end cities directly We firt calculate the distance between the start 
and cities as assume it the min distance.
Then we iterate all the major cities and find the min distances of the start and end cities from the
major cities. 
If both the cities are among the major cities then the distance wil be 0 and if one of them is 
among the major cities then the min distance for the major city will get 0.
If both the start and end cities not among the major cities then they both will have some distance.
Then atlast we calculate the min distance between direct travel or through major cities.  
Time Complexity: O(n)
Space Complexity: O(n)

*/


// Solution 2
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll distance(ll x1, ll y1, ll x2, ll y2){
    return llabs(x1 - x2) + llabs(y1 - y2);
}
 
ll getMinDistance(vector<pair<ll, ll>> cord, ll a, ll b, int k){
    ll minDistance = 2e18;
    for (int i = 0; i < k; i++){
        ll d = distance(cord[a - 1].first, cord[a - 1].second, cord[i].first ,cord[i].second);
        minDistance = min (minDistance, d); 
    }
    return minDistance;
}
 
void solve(){
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> cord(n);
    for (int i = 0; i < n ; i++){
        cin >> cord[i].first >> cord[i].second;
    }
    ll minCost = distance(cord[a - 1].first, cord[a - 1].second, cord[b - 1].first, cord[b - 1].second);
    ll minA = getMinDistance(cord, a, b, k);
    ll minB = getMinDistance(cord, b, a, k);
    minCost = min (minCost, minA + minB);
    cout << minCost << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
 

/*

As the cost of travel between major cities are 0 so if the start and end cities are among
the major cities the cost is 0.
Tf one of the cities are among the major cities we find the closest distance of the major 
cities to the other city which is not a major city.
If both the start and end cities not among the major cities then we either travel directly
or through the major cities whichever is the closest.
Time Complexity: O(n)
Space Complexity: O(n)

*/