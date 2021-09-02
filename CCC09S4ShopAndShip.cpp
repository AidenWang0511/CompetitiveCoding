#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;

int n, m, dis[5001];
bool vis[5001];
vector<pi> adj[5001];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    memset(vis, false, sizeof(vis));
    fill(dis, dis+n+1, INT_MAX);
    //memset(dis, INT_MAX, sizeof(dis));
    

    int K, z[5001], p[5001],D;
    cin>>K;
    for(int i=1; i<=K; i++){
        cin>>z[i]>>p[i];
    }
    cin>>D;
    dis[D] = 0;
    for(int k=1; k<=n; k++){
        int min = INT_MAX, u=-1;
        for(int i=1; i<=n; i++){
            if(!vis[i] && dis[i]<min){
                min = dis[i]; 
                u=i;
            }
        }
        if(u==-1)   break;
        vis[u] = true;
        for(auto e: adj[u]){
            int v = e.first, w=e.second;
            if(dis[v] > dis[u]+w)   dis[v] = dis[u] + w;
        }
    }
    int ans = INT_MAX;
    for(int i=1; i<=K; i++){
        if(vis[z[i]]){
            ans = min(ans, dis[z[i]] + p[i]);
        }
    }
    cout<<ans<<endl;

    return 0;
}