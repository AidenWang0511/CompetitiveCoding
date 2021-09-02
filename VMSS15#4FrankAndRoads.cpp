#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 2002;
int t, g, n, m, dis[MM], fb[MM]; 
bool vis[MM];  
vector<pi> adj[MM];
int main(){
    cin >> t >> n >> m >> g;
    for(int i=1; i<=g; i++){
        cin>>fb[i];
    }
    for(int i=1, u, v, w; i<=m; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    priority_queue<pi, vector<pi>, greater<pi>> q;
    fill(dis, dis+n+1, INT_MAX);
    memset(vis, false, sizeof(vis));
    dis[0] = 0; q.push({0,0});
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
    int ans=0;
    for(int i=1; i<=g; i++){
        if(vis[fb[i]] && dis[fb[i]] <= t)  ans++;
    } 
    cout<<ans<<endl;
    return 0;
}