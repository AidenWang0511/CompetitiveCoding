#include<bits/stdc++.h>
using namespace std;


int arr[101][101] = {0};
bool vis[101][101] = {false};
int steps[4][2]={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int newRow,newColumn,N,M,K;

int bfs(int r, int c){
	int size = 1;
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
            if(newRow>=1 && newRow<=N && newColumn>=1 && newColumn<=M && !vis[newRow][newColumn] && arr[newRow][newColumn] == 1){
                q.push({newRow,newColumn});
                vis[newRow][newColumn] = true;
                size++;
            }
		}
	}
	return size;
	
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>K;
    int ans = 0;
    for(int i=0; i<K; i++){
    	int x,y;
    	cin>>x>>y;
    	arr[x][y] = 1;
	}
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			if(arr[i][j] == 1){
				ans = max(ans, bfs(i, j));
			}
		}
	}
	cout<<ans<<endl;
	return 0;
} 
