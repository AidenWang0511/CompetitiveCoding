#include <bits/stdc++.h>
using namespace std;

vector<int> adj[2451];
pair<int,int> flight[2451];
bool vis[2451],flag[2451];
int N,M;

void dfs(int v){
	vis[v] = true; 
	for(int t:adj[v]){
		if(!vis[flight[t].second] && !flag[t]){
			dfs(flight[t].second);
		}
	}
}

int main(){
	
	cin>>N>>M;
	for(int i=0; i<M; i++){
		cin>>flight[i].first>>flight[i].second;
		adj[flight[i].first].push_back(i);
	}
	for(int i=0; i<M; i++){
		memset(vis, false, sizeof vis);
		memset(flag, false, sizeof flag);
		flag[i] = true;
		dfs(1);
		if(vis[N]){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}
