 #include<bits/stdc++.h>
using namespace std;

//0 x; 1 .; 
int size;
int arr[101][101] = {0}; 
bool vis[1001][1001] = {false};
int steps[4][2]={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int newRow,newColumn,n,m;

void bfs(int r, int c){
	queue<pair<int,int>> q;
	pair<int,int> current;
	vis[r][c] = true;
	q.push({r,c});
	while(!q.empty()){
		current = q.front();
        q.pop();
        for(int i=0; i<4; i++){
        	newRow = current.first + steps[i][0];
            newColumn = current.second + steps[i][1];
            if(newRow>=1 && newRow<=n && newColumn>=1 && newColumn<=m && !vis[newRow][newColumn] && arr[newRow][newColumn] == 1){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
            }
		}
	}
}

int main(){
	int ans=0;
	cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++){
    	string a;
    	cin>>a;
    	for(int j=0; j<m; j++){
    		if(a[j] == 'X'){
    			arr[i][j+1] = 0;
			}
			if(a[j] == '.'){
				arr[i][j+1] = 1;
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(arr[i][j] == 1 && !vis[i][j]){
				bfs(i, j);
				ans++;
			}
		}
	}
	
	cout<<ans<<endl;
	return 0;
} 
