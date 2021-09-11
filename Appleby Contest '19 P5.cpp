#include<bits/stdc++.h>
using namespace std;
int dp[10001][10001], arr[10001][10001];

int solve(int r, int c){
	if(dp[r][c] != 0) return dp[r][c];
	dp[r][c] = 1;
	if(arr[r][c+1] > arr[r][c]) dp[r][c] = max(dp[r][c], solve(r, c+1) + 1);
	if(arr[r][c-1] > arr[r][c]) dp[r][c] = max(dp[r][c], solve(r, c-1) + 1);
	if(arr[r+1][c] > arr[r][c]) dp[r][c] = max(dp[r][c], solve(r+1, c) + 1);
	if(arr[r-1][c] > arr[r][c]) dp[r][c] = max(dp[r][c], solve(r-1, c) + 1);
	
	return dp[r][c];
}

int main(){
	int x,N;
	cin>>N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			solve(i,j);
		}
	}
	int ans = 0;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			ans = max(ans, dp[i][j]-1);
		}
	}
	cout<<ans<<endl;
}
