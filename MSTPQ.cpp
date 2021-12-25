#include <bits/stdc++.h>
using namespace std;

struct edge {
    int to, w;
} a[10001];

int f[101],dis[101];
int ans, cnt;
vector<edge> graph[101];
bool visit[101];
struct cmp  //仿函数
{
    bool operator()(const edge &a, const edge &b) { 
		return a.w > b.w;
	}
};
priority_queue<edge, vector<edge>, cmp> pq;
int main() {
    int n,m,k;
    cin>>n>>m;
   
     for (int j = 1; j <= m; j++) {
       	int a,b,c;
       	cin>>a>>b>>c;
       	graph[a].push_back({b,c});
       	graph[b].push_back({a,c});
    }
	for (int i = 1; i <= n; i++) {	
		dis[i]=INT_MAX/2;
	}
	// for(edge i:graph[1])
	// {
	// 	dis[i.to]=i.w;
	// }

    pq.push({1, 0});

    while (!pq.empty()) {
        int u = pq.top().to;
        int d = pq.top().w;
        pq.pop();
        if(visit[u]) continue;
        visit[u] = true;
        ans += d;
        for(edge i:graph[u]){
            if(visit[i.to]) continue;
            int v = i.to;
            int w = i.w;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                pq.push({v, dis[v]});
            }
        }
    }
    cout << ans << endl;
    return 0;
}

/*
6 9
2 4 11
3 5 13
4 6 3
5 6 4
2 3 6
4 5 7
1 2 1
3 4 9
1 3 2
*/
