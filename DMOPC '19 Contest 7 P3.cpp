#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MM = 1e6+2;
int N;
vector<int> adj[MM], ans;
ll K,sum, w[MM];
bool vis[MM];

int main(){
	cin>>N>>K;
	for(int i=1; i<=N; i++){
		cin>>w[i];
	}
	for(int i=1, u, v; i<N; i++){
		cin>>u>>v;
		adj[u].push_back(v); 
		adj[v].push_back(u);
	}
	for(int i=1; i<=N; i++){
		if(vis[i])	continue;
		sum = 0; ans.clear(); queue<int> q;
		q.push(i); vis[i] = true; sum = w[i]; ans.push_back(i);
		while(!q.empty()){
			int u = q.front(); q.pop();
			for(int v: adj[u]){
				if(!vis[v] && sum + w[v] <=2*K){
					q.push(v); vis[v] = true; sum+=w[v]; ans.push_back(v);
				}
			}
		}
		if(sum>=K && sum<=2*K){
			cout<<ans.size()<<"\n";
			for(int x: ans)	cout<<x<<' ';
			cout<<"\n";
			return 0;
		}
	}
	cout<<"-1"<<endl;
	
} 
