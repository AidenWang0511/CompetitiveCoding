#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int,int>> adj[100001];

int bfs(int start, long long dis[]){
	priority_queue<int> q;
	bool vis[100001];
	memset(vis, false, sizeof vis);
	long long max=0; int farnode = 0;
	q.push(start); vis[start] = true; dis[start] = 0;
	while(!q.empty()){
		int cur = q.top();
		q.pop();
		if(dis[cur]>max){
			max = dis[cur];
			farnode = cur;
		}
		for(pair<int,int> e:adj[cur]){
			if(!vis[e.first]){
				vis[e.first] = true;
				q.push(e.first);
				dis[e.first] = dis[cur] + e.second;
			}
		}
	}
	return farnode;
}

int main(){
	cin>>n;
	for(int i=1; i<n; i++){
		int u,v,w;
		cin>>u>>v>>w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	long long dis1[100001], dis2[100001];
	long long pt1 = bfs(1, dis1), pt2 = bfs(pt1, dis1);
	bfs(pt2, dis2);
	long long ans = 0;
	for(int i=1; i<=n; i++){
		if(i!=pt1 && i!=pt2) ans=max(ans, max(dis1[i],dis2[i]));
	}
	cout<<ans<<endl;
}



