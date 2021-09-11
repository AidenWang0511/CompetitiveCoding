#include<bits/stdc++.h>
using namespace std;

int n, a[200001], vis[200001], dis[200001], ans = 10000000;

void dfs(int u, int d){
	vis[u] = 1; dis[u] = d; int v = a[u];
	if(vis[v] == 1){//cycle detected
		ans = min(ans, dis[u] - dis[v] + 1);
	}else if(vis[v] == 0){
		dfs(v,d+1);
	}
	vis[u] = 2;
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		if(vis[i] == 0) dfs(i,0);
	}
	cout<<ans<<endl;
	return 0;
}
