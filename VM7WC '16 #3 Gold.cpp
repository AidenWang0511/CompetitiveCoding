#include <bits/stdc++.h>
using namespace std;
int N, M, dest, Q, dis[2002]; 
vector<pair<int,int>> adj[2002]; 
bool vis[2002];
int main(){
    cin >> N >> M >> dest >> Q;
    for(int i=1, u, v, w; i<=M; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); 
		adj[v].push_back({u, w});
    }
    fill(dis, dis+2002, 1e9);  
	dis[dest] = 0;
    for(int k=1; k<=N; k++){
        int minVal = 1e9, u = -1;
        for(int i=1; i<=N; i++){
            if(!vis[i] && dis[i] < minVal){ 
				minVal = dis[i]; 
				u = i; 
			}
        }
        if(u == -1) break;
        vis[u] = true;
        for(pair<int,int> e: adj[u]){
            int v=e.first, w=e.second;
            if(dis[v] > dis[u] + w) dis[v] = dis[u] + w;
        }
    }
    for(int i=1, x; i<=Q; i++){
        cin >> x;
        if(!vis[x]) cout << -1 << endl;
        else cout << dis[x] << endl;
    }
    return 0;
}
