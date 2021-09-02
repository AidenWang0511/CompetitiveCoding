#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200003;
int N,W,D;
vector<int> adj[MAXN], adj2[MAXN];
int p[MAXN],dis[MAXN];
bool vis[MAXN];

int findS(int a){
    for(int i=1; i<=N; i++){
        if(p[i] == a) return i;
    }
    return -1;
}
int dfs(){
    vis[1] = true; dis[1] = 0;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int x:adj[u]){
            vis[x] = true;
            dis[x] = min(dis[x], dis[u] + 1);
            q.push(x);
        }
        
    }
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    
    cin>>N>>W>>D;
    for(int i=0; i<W; i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    for(int i=1; i<=N; i++){
        cin>>p[i];
    }
    for(int i=0; i<D; i++){
        int a,b;
        cin>>a>>b;
        int temp = p[a];
        p[a] = p[b];
        p[b] = temp;
        
    }
    return 0;
}