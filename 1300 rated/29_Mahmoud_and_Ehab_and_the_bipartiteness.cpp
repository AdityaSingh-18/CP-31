// Problem Link https://codeforces.com/problemset/problem/862/B

#include <bits/stdc++.h>
using namespace std;
#define int long long
int red = 0, white = 0;

void dfs(vector<vector<int>> &adj, vector<int> &visited, int v, int color){
    if(color == 1)    red++;
    else    white++;
    visited[v]++;
    for (int u : adj[v]) {
		if (!visited[u]) {
			dfs(adj, visited, u, !color);
		}
	}
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    vector<int> visited(n);
    int u, v;
    for (int i = 0; i < n - 1; i++){
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }
    dfs(adj, visited, 0, 0);
    cout << red * white - n + 1 << "\n";
}

signed main(){
    solve();
}