#include<bits/stdc++.h>
using namespace std;
char arr[1001][1001];
bool vis[1001][1001];
int dis[1001][1001];
queue<pair<int,int>> q;
pair<int,int> current;
int steps[4][2]={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

void bfs(int x, int y){
	vis[x][y] = true;
	dis[x][y] = 0;
	q.push({x,y});
	while(!q.empty()){
        current = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int newRow = current.first + steps[i][0];
            int newColumn = current.second + steps[i][1];
            if(arr[newRow][newColumn] != '#' && !vis[newRow][newColumn]){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
                dis[newRow][newColumn] = dis[current.first][current.second] + 1;
            }
        }
    }
}

int main(){
	int N,M,x,y,x1,y1,x2,y2;
	cin>>N>>M;
	for(int i=0; i<N; i++){
		string a;
		cin>>a;
		for(int j=0; j<M; j++){
			arr[i][j] = a[j];
			if(arr[i][j] == 'O'){
				x=i; y=j;
			}				
			if(arr[i][j] == 'P'){
				x1=i; y1=j;
			}
			if(arr[i][j] == 'X'){
				x2=i; y2=j;
			}
		}
	}
	bfs(x,y);
	int ans = 0;
	if(vis[x1][y1]){
		ans = dis[x1][y1];
	}else{
		cout<<-1<<endl;
		return 0;
	}
	memset(dis, 0, sizeof(dis));
	memset(vis, false, sizeof(vis));
	bfs(x1,y1);
	if(vis[x2][y2]){
		ans = ans + dis[x2][y2];
	}else{
		cout<<-1<<endl;
		return 0;
	}
	cout<<ans<<endl;
	
}

