#include <bits/stdc++.h>
using namespace std;

bool vis[101][101], check[101][101];
int steps[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
int N,M,ans=1;
vector<pair<int,int>> v[101][101];

void dfs(int x, int y){
    if(!check[x][y]) return;
	if(vis[x][y]) return;
    vis[x][y] = true;
    for(pair<int,int> a: v[x][y]){
        if(!check[a.first][a.second]){
            ans++;
        }
        check[a.first][a.second] = true;
        
    }

    for(int i=0; i<4; i++){
        int nx,ny;
        nx = x + steps[i][0];
        ny = y + steps[i][1];
        if(nx >= 1 && nx <= N && ny >= 1 && ny <= N){
            dfs(nx, ny);
        }
    }

    for(pair<int,int> a: v[x][y]){
        for(int i=0; i<4; i++){
            int nx,ny;
            nx = a.first + steps[i][0];
            ny = a.second + steps[i][1];
            if(nx >= 1 && nx <= N && ny >= 1 && ny <= N && vis[nx][ny]){
                dfs(a.first, a.second);
            }
        }
    }

}

int main(){
	freopen("lightson.in","r",stdin); 
	freopen("lightson.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
	
	cin>>N>>M;
    for(int i=0; i<M; i++){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        v[x][y].push_back({a,b});
    }
    check[1][1] = true;
    dfs(1,1);
    cout<<ans<<endl;
	return 0;
}
