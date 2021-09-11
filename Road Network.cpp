#include<bits/stdc++.h>
using namespace std;
vector<pair<int, pair<int, int>>> coord;
long double dis[1001][1001], N, M, X, Y;
long double dist[1001];
bool vis[1001];


int main(){
	fill(dist, dist+1001, 1e20);
	
	cin>>N>>M;
	for(int i=1; i<=N; i++){
		cin>>X>>Y;
		coord.push_back({i,{X,Y}});
	}
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(j!=i){
				long double x = (long double)coord[i-1].second.first - (long double)coord[j-1].second.first;
				long double y = (long double)coord[i-1].second.second - (long double)coord[j-1].second.second;
				dis[i][j] = sqrt(x*x + y*y);
				dis[j][i] = sqrt(x*x + y*y);
			}
		}
	}	
	
	for(int i=0; i<M; i++){
		int a,b;
		cin>>a>>b;
		dis[a][b] = 0;
		dis[b][a] = 0;
	}
	dist[1] = 0;
	for(int k=1; k<=N; k++){
		long double minv = 1e20; int u=-1;
		for(int i=1; i<=N; i++){
			if(!vis[i] && dist[i]<minv){
				minv = dist[i];
				u=i;
			}
		}
		vis[u] = true;
		for(int v=1; v<=N; v++){
			if(!vis[v] && dist[v] > dis[u][v]){
				dist[v] = dis[u][v];
			}
		}
	}
	long double ans = 0;
	for(int i=1; i<=N; i++){
		ans += dist[i];
	}
	cout<<fixed << setprecision(2)<<ans<<endl;
	
	return 0;
} 
