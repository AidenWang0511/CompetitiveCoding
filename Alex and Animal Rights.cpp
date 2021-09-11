#include<bits/stdc++.h>
using namespace std;
char arr[60][60];
int R,C, numM = 0;
bool vis[60][60];

void dfs(int r, int c){
	arr[r][c] = '#';
	if(arr[r][c+1] != '#'){
		dfs(r, c+1);
	}
	if(arr[r][c-1] != '#'){
		dfs(r, c-1);
	}
	if(arr[r+1][c] != '#'){
		dfs(r+1, c);
	}
	if(arr[r-1][c] != '#'){
		dfs(r-1, c);
	}	
	
}

int main(){
	int ans=0;
	cin>>R>>C;
	for(int i=1; i<=R; i++){
		string x;
		cin>>x;
		for(int j=1; j<=x.size(); j++){
			arr[i][j] = x[j-1];
		}
	}
	for(int i=1; i<=R; i++){
		for(int j= 1; j<=C; j++){
			if(arr[i][j] == 'M'){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout<<ans<<endl;
}
