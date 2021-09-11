#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1000001];

bool bfs(int st, int ed){
	queue<int> q;
	bool vis[1000001];
	memset(vis, false, sizeof(vis));
	q.push(st);	vis[st] = true;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int nxt: adj[cur]){
			if(!vis[nxt]){
				q.push(nxt);
				vis[nxt] = true;
			}
		}
		if(vis[ed])	return true;
	}
	return false;
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	int p,q;
	cin>>p>>q;
	if(bfs(p,q)) cout<<"yes"<<endl;
	else if(bfs(q,p)) cout<<"no"<<endl;
	else cout<<"unknown"<<endl;
	return 0;
}

