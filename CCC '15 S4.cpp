#include<bits/stdc++.h>
using namespace std;
const int MM = 2002;
struct V{
	int u, t, h;
	V(){};
	V(int u0, int t0, int h0){
		t=t0;
		u=u0;
		h=h0;
	}
	bool operator < (const V& x) const { return t > x.t; }
};
int K,N,M,A,B,dis[MM][202];
vector<V> adj[MM];

int main(){
	cin>>K>>N>>M;
	for(int i=1, u,v,t,h; i<=M; i++){
		cin>>u>>v>>t>>h;
		adj[u].push_back(V{v,t,h});
		adj[v].push_back(V{u,t,h});
	}
	cin>>A>>B;
	memset(dis, 0x3f, sizeof(dis));
	priority_queue<V> q;
	dis[A][0] = 0;
	q.push({A,0,0});
	while(!q.empty()){
		int u = q.top().u;
		int t = q.top().t; 
		int h = q.top().h;
		q.pop();
		if(t>dis[u][h])	continue;
		for(V& e: adj[u]){
			int v = e.u, w=e.t, hull=e.h;
			if(h+hull >= K)	continue;
			if(dis[v][h+hull] > t+w){
				dis[v][h+hull] = t+w;
				q.push({v,dis[v][h+hull],h+hull});
			}
		}
	}
	int ans = 0x3f3f3f3f;
	for(int k=0; k<K; k++){
		ans = min(ans, dis[B][k]);
	}
	if(ans == 0x3f3f3f3f)	cout<<-1<<endl;
	else cout<<ans<<endl;
	return 0;
} 
