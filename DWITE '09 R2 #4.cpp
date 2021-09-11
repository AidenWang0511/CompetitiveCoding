#include <bits/stdc++.h>
using namespace std;
const int M = 100;
int N, adj[M][M], dis[M]; bool vis[M];
int main(){
    for(int t=1; t<=5; t++){
        cin >> N;
        memset(adj, 0, sizeof(adj));
        memset(vis, 0, sizeof(vis));
        for(int i=1, u, v; i<=N; i++){
            cin >> u >> v;
            adj[u][v] = adj[v][u] = true;
        }
        queue<int> q;
        q.push(1); vis[1]=true; dis[1]=0;
        while(!q.empty()){
            int cur = q.front(); q.pop();
            for(int nxt=1; nxt<M; nxt++){
                if(adj[cur][nxt] && !vis[nxt]){
                    q.push(nxt); vis[nxt]=true;
                    dis[nxt] = dis[cur] + 1;
                }
            }
        }
        int ans = 0;
        for(int i=1; i<M; i++){
            for(int j=i+1; j<M; j++)
                if(adj[i][j] && dis[i] == dis[j])
                    ans++;
        }
        cout << ans << endl;
    }
}
