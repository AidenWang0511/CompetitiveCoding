#include <bits/stdc++.h>
using namespace std;
int dis[2501];
bool exist[2501];//标记每个点是否在queue中 
struct point
{
	int to;
	int w;
};
vector<point> graph[2501];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int n,m,s,t;
    cin >> n >> m >> s >> t;
    for (int i = 1; i <=m ; i++) {
    	int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }

    memset(dis, 0x3f, sizeof(dis));
    dis[s] = 0;  // 注意起 始点是s！！！
    queue<int> q;
    //todo
    q.push(s);
    exist[s] = true;
	 
   	while(q.size()>0){
   		//todo
        int u = q.front(); q.pop();
        exist[u] = false;
        for(point v:graph[u]){
            if(dis[u] + v.w < dis[v.to]){
                dis[v.to] = dis[u] + v.w;
                if(!exist[v.to]){
                    q.push(v.to);
                    exist[v.to] = true;
                }
            }
        }
	}

    cout << dis[t] << endl;
    return 0;
}
