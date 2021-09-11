#include<bits/stdc++.h>
using namespace std;
int N,a,b,c,e=0,dis[100001],ans=0;
vector<pair<int,int>> adj[100001];
bool vis[100001];

void dfs(int v){
	vis[v] = true;
	for(auto nxt:adj[v]){
		if(!vis[nxt.first]){
			dis[nxt.first] = dis[v] + nxt.second;
			ans = max(ans, dis[nxt.first]);
			dfs(nxt.first);
		}
	}
}

int main(){
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>a>>b>>c;
		adj[a].push_back({b,c});
		adj[b].push_back({a,c});
		e+=c;
	}
	dfs(0);
	cout<<2*e-ans<<endl;
}
