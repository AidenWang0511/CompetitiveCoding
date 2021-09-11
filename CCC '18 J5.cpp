#include <bits/stdc++.h>
#define MAXN 10001
#define pb push_back
using namespace std;

int N, M, minn = 10000000;
int page, dis[MAXN];
bool vis[MAXN];
vector<int> endP;
vector<int> adj[MAXN];
queue<int> q;
bool check = true;

void BFS (int st) {
	q.push(st);
	vis[st] = true;
	memset(dis, 100000, sizeof(dis));
	dis[st] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int nxt: adj[cur]) {
			if (!vis[nxt]) {
				vis[nxt] = true;
				dis[nxt] = dis[cur] + 1;
				q.push(nxt);
			}
		}
	}
}

int main () {
	cin>>N;
	for (int i=1; i<=N; i++) {
		cin>>M;
		if (M == 0) endP.pb(i);
		for (int j=1; j<=M; j++) {
			cin>>page;
			adj[i].pb(page);
		}
	}
	BFS(1);
	for (int i=1; i<=N; i++){
		if(!vis[i]){
			check = false;
		}
	}
	if(check){
		cout<<'Y'<<endl;
	}else{
		cout<<'N'<<endl;
	}
	for (int next:endP){
		minn = min(minn, dis[next]);
	}
	cout<<minn<<endl;
	return 0;
}
