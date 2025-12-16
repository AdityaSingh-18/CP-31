// Problem Link https://codeforces.com/problemset/problem/1620/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maxDistance(){
    int n;
    ll maxPoint, minPoint;
    cin >> n >> minPoint;
    for (int i = 1; i < n; i++){
        cin >> maxPoint;
    }
    ll maxDistance = maxPoint - minPoint;
    cin >> n >> minPoint;
    for (int i = 1; i < n; i++){
        cin >> maxPoint;
    }
    return max (maxDistance, maxPoint - minPoint);
}
    
void solve(){
    ll w, h;
    cin >> w >> h;
    ll area1 = maxDistance() * h;
    ll area2 = maxDistance() * w;
    ll maxArea = max (area1, area2);
    cout << maxArea << "\n"; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


/*

We calculate the max distance between two points on the same line and calculate the area by multiplying
by height if the points are the width line and by width if both points are on the height line.
Note: We are not dividing the product of these to get the actual area because the problem says to return
the area * 2. So as the area would be actually 1/2*what we calculated so what we calculated is directly
2 times the actual area.
Time Complexity: O(Σk)
Space Complexity: O(1)

*/