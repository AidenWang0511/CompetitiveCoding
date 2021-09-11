 #include<bits/stdc++.h>
using namespace std;

//0 x; 1 .; 
int stX,stY,edX,edY;
int arr[1001][1001] = {0}, dis[1001][1001] = {0};
bool vis[1001][1001] = {false};
int steps[4][2]={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int newRow,newColumn,n,m;

void bfs(int r, int c){
	queue<pair<int,int>> q;
	pair<int,int> current;
	vis[r][c] = true;
	q.push({r,c});
	dis[r][c] = -1;
	while(!q.empty()){
		current = q.front();
        q.pop();
        for(int i=0; i<4; i++){
        	newRow = current.first + steps[i][0];
            newColumn = current.second + steps[i][1];
            if(newRow>=1 && newRow<=n && newColumn>=1 && newColumn<=m && !vis[newRow][newColumn] && (arr[newRow][newColumn] == 1 || (newRow == edX && newColumn == edY))){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
                dis[newRow][newColumn] = dis[current.first][current.second] + 1;
            }
		}
	}
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++){
    	string a;
    	cin>>a;
    	for(int j=0; j<m; j++){
    		if(a[j] == 's'){
    			stX = i; stY = j+1;
			}
			if(a[j] == 'e'){
				edX = i; edY = j+1;
				arr[edX][edY] = 1;
			}
			if(a[j] == '.'){
				arr[i][j+1] = 1;
			}else{
				arr[i][j+1] = 0;
			}
		}
	}
	bfs(stX, stY);
	
	if(vis[edX][edY]){
		cout<<dis[edX][edY]<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
} 
