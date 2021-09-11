#include <bits/stdc++.h>
using namespace std;

int N, a, b, X, Y;
vector<int> adj[1001];
bool vis[1001];

inline bool DFS (int node, int par) {
	vis[node] = 1;
	if (node == Y) return 1;
	for (int i=0; i<adj[node].size(); i++) {
		int next = adj[node][i];
		if (next == par) continue;
		if (!vis[next]) 
		  if (DFS(next, node)) return 1;
	}
	return 0;
}

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i=0; i<N; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
	}
	cin >> X >> Y;
	cout << (DFS(X, -1) ? "Tangled" : "Not Tangled") << "\n";
	return 0;
}
