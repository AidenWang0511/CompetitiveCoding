#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
const int MM = 100002;
int n, m, dis[MM], back[MM]; bool vis[MM];  vector<pi> adj[MM];
int main(){
    cin >> n >> m;
    for(int i=1, u, v, w; i<=m; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); adj[v].push_back({u, w});
    }
    priority_queue<pi, vector<pi>, greater<pi> > q;
    fill(dis, dis+n+1, INT_MAX);
    dis[0] = 0; q.push({0, 0});
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

    //going back
    fill(back, back+n+1, INT_MAX);
    back[n-1] = 0; q.push({0, n-1});
    while(!q.empty()){
        int d = q.top().first, u = q.top().second; q.pop();
        if(d > back[u]) continue;
        vis[u] = true;
        for(pi e: adj[u]){
            int v = e.first, w = e.second;
            if(back[v] > back[u] + w){
                back[v] = back[u] + w;
                q.push({back[v] , v});
            }
        }
    }

    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans = max(ans, dis[i] + back[i]);
    }
    cout<<ans<<endl;
}