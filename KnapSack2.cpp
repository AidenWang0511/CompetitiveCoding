#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100001;
int N, W, w, v;
long long dp[MAXN];



int main(){
	cin >> N >> W;
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i < N; i++) {
		cin >> w >> v;

		for(int j = MAXN - 1; j >= v; j--){
			dp[j] = min(dp[j], dp[j - v] + w);
		}
	}

	int ans = -1;
	for (int i = 0; i < MAXN; i++){
		if(dp[i] <= W){
			ans = i;
		}
	}
    cout<<ans<<endl;
    return 0;
}