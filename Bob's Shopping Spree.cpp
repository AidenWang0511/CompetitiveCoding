#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,M,K,w[1001],v[1001];
ll dp[1001];

int main(){
	cin>>N>>M>>K;
	for(int i=1; i<=N; i++){
		cin>>w[i]>>v[i];
		for(int j=w[i]; j<=K; j++){
			dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
		}
	}
	for(int i=1,q,t,d,a; i<=M; i++){
		cin>>q>>t>>d>>a;
		for(int k=1; k<=a; k=k*2){
			ll cost = (ll)k*d, val = (ll)k*q*v[t];
			for(int j=K; j>=cost; j--){
				dp[j] = max(dp[j], dp[j-cost] + val);
			}
			a-=k;
		}
		if(a>0){
			ll cost = (ll)a*d, val = (ll)a*q*v[t];
			for(int j=K; j>=cost; j--){
				dp[j] = max(dp[j], dp[j-cost] + val);
			}
		}
	}
	cout<<dp[K]<<endl;
	return 0;
} 
