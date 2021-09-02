#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1001;

int n, m, d, iv, r, dp[MAXN][MAXN];
string a, b;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	cin>>d>>iv>>r>>a>>b;
	n = a.length();
	m = b.length();

	a = " " + a;
	b = " " + b;

	for(int i = 1; i <= n; i++){
		dp[i][0] = i * d;
	}

	for(int i = 1; i <= m; i++){
		dp[0][i] = i * iv;
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i] == b[j]){
				dp[i][j] = dp[i - 1][j - 1];
			}
			else{
				dp[i][j] = min(dp[i - 1][j - 1] + r, min(dp[i - 1][j] + d, dp[i][j - 1] + iv));
			}
		}
	}

    cout<<dp[n][m]<<endl;

	return 0;
}