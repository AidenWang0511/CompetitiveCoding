#include<bits/stdc++.h>
using namespace std;

int n,r,in[100001];
vector<int> adj[100001];
int dis[100001];
bool vis[100001];

int main(){
	cin>>n>>r;
	for(int i=1; i<=n; i++){
		int k;
		cin>>k;
		for(int j=1; j<=k; j++){
			int x;	cin>>x;
			in[x]++;
			adj[i].push_back(x); 
			adj[x].push_back(i);
		}
	}
	queue<int> q;
	q.push(r); vis[r] = true; dis[r] = 1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int v:adj[u]){
			if(!vis[u]){
			    q.push(v); vis[v] = true;
			    dis[v] = dis[u] + 1;
			}
			
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i=1; i<=n; i++){
		if(in[i] == 0 && dis[i]%2 == 0)	cnt1++;
		if(in[i] == 0 && dis[i]%2 == 1)	cnt2++;
	}
	cout<<cnt1<<' '<<cnt2<<endl;
	
	
	return 0;
}
