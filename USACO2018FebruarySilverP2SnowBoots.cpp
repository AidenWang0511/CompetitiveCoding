#include <bits/stdc++.h>
using namespace std;

int n,m,p,q,minn=INT_MAX;
int a[51][51];
bool book[51][51];
// ???? 
int dir[4][2]={ {0,1} ,   
                 {1,0},    
				{0,-1},    
				{-1,0}  } ; 
				
void dfs(int x,int y,int step){
	// ??????? 
	//todo 
	if(x == p && y == q){
		if(step < minn) minn = step;
		return;
	}
	// ?? 
	//todo 
	if(step >= minn) return;
	// ??????? 
	for(int i=0; i<=3; i++){
		//????????? 
		//todo 
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
        // ?????? 
		//todo 
		if(nx < 0 || ny < 0 || nx > n || ny > m || a[nx][ny] || book[nx][ny]) continue;
		//todo 
		book[nx][ny] = true;
		dfs(nx, ny, step+1);
		book[nx][ny] = false;
	}

}

int main(){
	
	int i ,j,startx,starty;
	cin>>n>>m; 
	//????
	for(i=1;i<=n;i++)
	    for(j=1;j<=m;j++)
	        cin>>a[i][j];
	
	cin>>startx>>starty>>p>>q;

	book[startx][starty]=true;
	dfs(startx,starty,0);
	
	cout<<minn<<endl;
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

??
7
*/

