#include <bits/stdc++.h>
using namespace std;
int n, t, old = 1, dp[2][10001], p[2001][3], cost[2001][3];

int main(){
	cin >> n >> t;
	for(int i = 1; i <= n; i++){
		cin >> cost[i][0] >> p[i][0] >> cost[i][1] >> p[i][1] >> cost[i][2] >> p[i][2];
	}
	for(int i = 1; i <= n; i++){
		int newr = !old;
		for(int j = 1; j <= t; j++){
			int best = max(dp[old][j - 1], dp[old][j]);
			for (int k = 0; k < 3; ++k) {
				if(cost[i][k] <= j){
					best = max(best, dp[old][j - cost[i][k]] + p[i][k]);
				}
			}
			dp[newr][j] = best;
		}
		old = newr;
	}
	cout<<dp[old][t]<<endl;
	return 0;
}
