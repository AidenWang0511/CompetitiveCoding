#include <bits/stdc++.h>
#define MAXN 2001
using namespace std;

int N, M, A, B, X, Y;
vector<int> adj[MAXN];
queue<int> Q;
bool vis[MAXN];

void BFS (int st){
    Q.push(st);
    vis[st] = true;
    while(!Q.empty()){
    	int cur = Q.front();
    	Q.pop();
    	for(int nxt: adj[cur]){
    		if(!vis[nxt]){
    			Q.push(nxt);
    			vis[nxt] = true;
			}
		}
	}
}

int main (){
	cin>>N>>M>>A>>B;
	for(int i=0; i<M; i++){
		cin>>X>>Y;
		adj[X].push_back(Y);
		adj[Y].push_back(X);
	}
	BFS(A);
	if(vis[B]){
		cout<<"GO SHAHIR!"<<endl;
	}else{
		cout<<"NO SHAHIR!"<<endl;
	}
	return 0;
}
