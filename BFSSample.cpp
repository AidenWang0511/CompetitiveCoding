#include<bits/stdc++.h>
using namespace std;

struct node {
    int x, y, s;
};

queue<node> q;
int a[51][51];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};  // 方向数组 
bool visited[51][51];
int n, m, sx, sy, ex, ey;

void bfs(int sx,int sy)
{
	 // 星星之火, 可以燎原
    q.push({sx,sy,0});
    visited[sx][sy] = true;
    while(!q.empty()) {
        node t = q.front();
        q.pop();
        for(int i=0; i<4;i++) {
        	//算出新的位置坐标 
            int nx = dir[i][0] + t.x;
            int ny = dir[i][1] + t.y;
            //判断新的位置是否越界 
            if(nx < 1 || ny < 1 || nx > n || ny > m) continue;
            // 如果新的位置是平地 并且 没有走过 
            if(a[nx][ny] == 0 && !visited[nx][ny]){
                q.push({nx,ny,t.s + 1});
                visited[nx][ny] = true;
                // 新的位置是否为终点 
                if(nx == ex && ny == ey){
                    cout<<t.s+1<<endl;
                    return;
                }
            }
        }
    }
}

int main() {

    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }

    cin>>sx>>sy>>ex>>ey;
	
	bfs(sx,sy);
    
    return 0;
}

/*
5 4
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1 1 4 3

输出
7
*/ 
