#include <bits/stdc++.h>
using namespace std;

bool vis[21];
vector<int> adj[21];
int dis[21];
bool ans = false;
void dfs(int a) {
    vis[a] = true;
    for (int v : adj[a]) {
        if (!vis[v]) {
            dis[v] = dis[a] + 1;
            dfs(v);
        }else {
            if (dis[a] - dis[v] + 1 == 6) {
                ans = true;
                return;
            }
        }
    }
}

int main(void) {
    int N, M;
    cin>>N>>M;
    for (int i = 0; i < M; i++) {
        int u, v; 
		cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    if (ans) {
        cout<<"YES"<<endl;
    }else{
    	cout<<"NO"<<endl;
	}
    return 0;
}
