#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 1002;
int n, m, dis[MM]; bool vis[MM];  vector<pi> adj[MM];
int main(){
    cin >> n >> m;
    for(int i=1, u, v, w; i<=m; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); adj[v].push_back({u, w});
    }
    priority_queue<pi, vector<pi>, greater<pi> > q;
    memset(dis, 0x3f, sizeof(dis));
    dis[1] = 0; q.push({0, 1});
    while(!q.empty()){
        int d = q.top().first, u = q.top().second; q.pop();
        if(d > dis[u]) continue;
        vis[u] = true;
        for(pi e: adj[u]){
            int v = e.first, w = e.second;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                q.push({dis[v] , v});
            }
        }
    }
    for(int i=1; i<=n; i++)
        cout << (vis[i]? dis[i]: -1) << "\n";
}