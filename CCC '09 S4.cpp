#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  int N,M,u,v,w,x,tar;
  
  cin >> N >> M;
  int adj[N + 5][N + 5];
  bool vis[N+5];
  int dist[N+5];
  memset(dist,0x3f3f3f3f,sizeof dist);
  memset(adj,0x3f3f3f3f,sizeof adj);
  for(int i = 0; i < M; i++){
    cin>>u>>v>>w;
    adj[u][v] = adj[v][u] = w;
  }

  cin >> x;
  int cost[x],store[x];

  for(int i = 0; i < x; i++){
    cin >> store[i] >> cost[i];
    dist[store[i]] = cost[i];
  }
  
  cin >> tar;
  // dist[tar]=0;
  
  for (int j=0; j<N; j++) {
    int node=-1, minn=0x3f3f3f3f;
    for(int i=1;i<=N;++i){
      if(!vis[i] && dist[i]<dist[node])node=i;
    }
    if(node==-1) break;
    vis[node]=1;
    for (int i=1; i<=N; i++) {
        if (dist[node] + adj[node][i] < dist[i]) {
            dist[i] = dist[node] + adj[node][i];
        }
    }
  }
  cout << dist[tar] << "\n";

  return 0;
}
