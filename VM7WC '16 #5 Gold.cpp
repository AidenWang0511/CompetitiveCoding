#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10001];
bool vis[10001];
int dis[10001] = {0},N,a,b,len=0,s;

void DFS(int v){
	vis[v] = true;
	for(auto i:adj[v]){
		if(!vis[i]){
			dis[i] = dis[v] + 1;
			if(dis[i]>len){
				s = i;
				len = dis[i];
			}
			DFS(i);
		}
	}
}

int main(){
	cin>>N;
	for(int i=1; i<N; i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	DFS(1);
	memset(vis, false, sizeof vis);
	memset(dis, 0, sizeof dis);
	DFS(s);
	cout<<len<<endl;
}
