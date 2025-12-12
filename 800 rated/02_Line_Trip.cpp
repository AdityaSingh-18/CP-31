// Problem Link https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int &i : a)	cin >> i;
	int maxDistance = max(a[0] , 2 * (x - a[n - 1]));
	for (int i = 0; i < n - 1; i++)
	{
		maxDistance = max (maxDistance , a[i + 1] - a[i]);	
	}
	cout << maxDistance << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


/*

We just need to calculate the max distance between two points.For the last gas station the distance will
be double because we have to go from last gas station to point x and come back to last gas station.
Time Complexity: O(n)
Space Complexity: O(n)

*/