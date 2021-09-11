#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool vis[1001];
int N,M,T,Q,a,b;

int bfs(int v, int ed){
	queue<int> q;
	q.push(v); vis[v] = true;
	int dis[1001] = {0};
	while(!q.empty()){
		int cur = q.front();	q.pop();
		for(int next:adj[cur]){
			if(!vis[next]){
				if(next == ed){
					return dis[cur]+T;
				}
				q.push(next);
				vis[next] = true;
				dis[next] = dis[cur]+T;
			}
		}
	}
	return dis[ed];
	
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
	cin>>N>>M>>T;
	for(int i=0; i<M; i++){
		cin>>a>>b;
		adj[a].push_back(b);
	}
	cin>>Q;
	for(int i=0; i<Q; i++){
		memset(vis, false, sizeof vis);
		cin>>a>>b;
		int ans = bfs(a,b);
		if(ans == 0)	cout<<"Not enough hallways!"<<"\n";
		else cout<<ans<<"\n";
	}
}
