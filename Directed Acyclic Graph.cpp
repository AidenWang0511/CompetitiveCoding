#include <bits/stdc++.h>
using namespace std;

int N, adj[1001][1001], vis[1001], cycle;
void dfs(int u){
	if(cycle!=0) return;
	vis[u] = 1;
	for(int v=1; v<=1000; v++){
		if(adj[u][v]){
			if(vis[v] == 1){
				cycle = 1;
				return;
			}else if(vis[v] == 0){
				dfs(v);
			}
		}
	}
}

int main(){
	cin>>N;
	for(int i=1; i<=N;i++){
		for(int j=1; j<=N; j++){
			cin>>adj[i][j];
		}
	}
	dfs(1);
	if(cycle){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
}
