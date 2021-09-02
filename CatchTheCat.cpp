#include<bits/stdc++.h>
using namespace std;
#define MAXN 200002

bool vis[MAXN];
int dis[MAXN];
queue<int> q;
int X,Y;

int BFS(int start, int end){
    if(start>=end){
        return start-end;
    }
    q.push(start);   
    dis[start] = 0;
    int cur;
    while(! q.empty() ) {
        cur = q.front(); q.pop(); 
        if(!vis[cur+1] && cur+1 >=0 && cur+1 <= end*1.6){  
            q.push(cur+1); 
            dis[cur+1] = dis[cur]+1;  
            vis[cur+1]=true; 
        }
        if(!vis[cur-1] && cur-1 >=0 && cur-1 <= end*1.6){  
            q.push(cur-1); 
            dis[cur-1] = dis[cur]+1;  
            vis[cur-1]=true; 
        }
        if(!vis[2*cur] && 2*cur >=0 && cur*2 <= end*1.6){  
            q.push(2*cur); 
            dis[2*cur] = dis[cur]+1;  
            vis[2*cur]=true; 
        }
        if(vis[end]) return dis[end];
    }
    return dis[end];
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>X>>Y;
	int ans = BFS(X,Y);
	cout<<ans<<endl;
	return 0;
}