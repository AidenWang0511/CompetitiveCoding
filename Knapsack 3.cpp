#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 5001;
int N,M;
ll dp[MM];

int main(){
	cin>>N>>M;
	for(int i=1,n,v,p; i<=N; i++){
		cin>>n>>v>>p;
		for(int k=1; k<=n; k=k*2){
			ll cost = (ll)k*v, val = (ll)k*p;
			for(int j=MM-1; j>=cost; j--){
				dp[j] = max(dp[j], dp[j-cost] + val);
			}
			n -= k;
		}
		if(n != 0){
			ll cost = (ll)n*v, val = (ll)n*p;
			for(int j=MM-1; j>=cost; j--){
				dp[j] = max(dp[j], dp[j-cost] + val);
			}
		}
	}
	ll ans = -1e18;
	for(int i=1,c,f; i<=M; i++){
		cin>> c>>f;
		ans = max(ans,dp[c] - f);
	}
	cout<<ans<<endl;
}
