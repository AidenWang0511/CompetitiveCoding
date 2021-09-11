#include<bits/stdc++.h>
using namespace std;
 
vector<int> v[1000001];
int start,last;
queue<int> q;
bool vis[1000001];
 
void bfs(int a){
	vis[a] = true;
	q.push(a);
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int nxt:v[cur]){
			if(!vis[nxt]){
				q.push(nxt);
				vis[nxt] = true;
			}
		}
	}
}
 
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			int x;
			cin>>x;
			if(i==1 && j==1) start = x;
			if(i==m && j==n) last = x;
			v[i*j].push_back(x);
		}
	}
	bfs(start);
	if(vis[m*n]){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	return 0;
}
