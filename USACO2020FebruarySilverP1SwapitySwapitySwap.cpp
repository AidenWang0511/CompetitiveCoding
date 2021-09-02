#include<bits/stdc++.h>
using namespace std;
#define MAXN 100001
 
int N,M,K,p[MAXN],nxt[MAXN],ans[MAXN];
bool vis[MAXN];
 
int main(){
	cin>>N>>M>>K;
	for(int i=1; i<=N; i++){
		p[i] = i;
	}
	for(int i=1; i<=M; i++){
		int x, y;
		cin>>x>>y;
		for(int l=x, r=y; l<r; l++, r--){
			int temp = p[l];
			p[l] = p[r];
			p[r] = temp;
		}
	}

	for(int i=1; i<=N; i++){
		nxt[p[i]] = i;
	}
	for(int i=1; i<=N; i++){
		if(vis[i])	continue;
		vector<int> cycle;
		cycle.push_back(i); vis[i] = true;
		for(int u=nxt[i]; u!=i; u=nxt[u]){
			cycle.push_back(u); vis[u] = true;
		}
		int remainder = K%cycle.size();
		for(int j=0; j<cycle.size(); j++){
			int pos = (j+remainder)%cycle.size();
			ans[cycle[pos]] = cycle[j];
		}
	}
	for(int i=1; i<=N; i++){
		cout<<ans[i]<<endl;
	}
}