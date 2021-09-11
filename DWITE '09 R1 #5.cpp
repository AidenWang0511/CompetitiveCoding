#include <bits/stdc++.h>
using namespace std;

int N, adj[101][101], vis[101], dis[101], cycle;
void dfs(int u){
	if(cycle!=0) return;
	vis[u] = 1;
	for(int v=1; v<=100; v++){
		if(adj[u][v]){
			if(vis[v] == 1){
				cycle = dis[u]-dis[v]+1;
				return;
			}else if(vis[v] == 0){
				dis[v] = dis[u] + 1;
				dfs(v);
			}
		}
	}
	vis[u] = 2;
}

int main(){
	for(int t=1; t<=5; t++){
		cin>>N; 
		cycle = 0;
		memset(adj,0, sizeof(adj));
		memset(vis,0, sizeof(vis));
		memset(dis,0, sizeof(dis));
		for(int i=1,u,v; i<=N; i++){
			cin>>u>>v;
			adj[u][v]=1;
		}
		dfs(1);
		cout<<cycle<<endl;
	}
}
