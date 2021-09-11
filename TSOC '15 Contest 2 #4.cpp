#include <bits/stdc++.h>
#define MAXN 20010
#define INF 0x3f3f3f3f
#define MOD 1000000007
using namespace std;

int N, M, a, b, dist[MAXN];
long long num, cnt[MAXN];
vector<int> adj[MAXN];
bool vis[MAXN], ent[MAXN], dest[MAXN];
queue<int> q;

void BFS () {
	while (!q.empty()) {
		int curr = q.front();
		q.pop();
		for (int i=0; i<adj[curr].size(); i++) {
			int next = adj[curr][i];
			int nextcost = dist[curr] + 1;
			if (nextcost < dist[next]) {
				dist[next] = nextcost;
				q.push(next);
			}
			cnt[next] = (cnt[next] + cnt[curr]);
		}
	}
}

int main () {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	memset(dist, INF, sizeof(dist));
	for (int i=0; i<M; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		dest[a] = 1;
		ent[b] = 1;
	}
	for (int i=0; i<N; i++) {
		if (!ent[i]) {
			q.push(i);
			dist[i] = 0;
			cnt[i] = 1;
		}
	}
	BFS();
	for (int i=0; i<N; i++) if (!dest[i]) num = (num + cnt[i]);
	cout << (num) << "\n";
	for (int i=0; i<N; i++) if (!dest[i]) cout << (dist[i] + 1) << " ";
	cout << "\n";
	return 0;
}
