#include <bits/stdc++.h>
using namespace std;

const int MN = 51, MT = 1001;
int N, S, e[MN], h[MN], p[MN], dp[MN][MT], t[MN][MT];

int main(){
    cin>>N;
    for(int i=1; i<N+1; i++) {
        cin>>h[i]>>e[i]>>p[i];
    }
    cin>>S;
    for(int i=1; i<N+1; i++) {
        for(int j=0; j<S+1; j++)  {
            dp[i][j] = dp[i-1][j];
            t[i][j] = t[i-1][j];
    	}
        for(int k=1, val=0, cost=p[i]; h[i]>0 && cost <= S; h[i] -= e[i], cost+=p[i], k++) {
        	val += h[i];
            for(int j=cost; j<=S; j++){
            	if(dp[i-1][j-cost] + val > dp[i][j]){
            		dp[i][j] = val + dp[i-1][j-cost];
            		t[i][j] = t[i-1][j-cost] + k;
				}else if(dp[i-1][j-cost] + val == dp[i][j] && t[i-1][j-cost] + k <t[i][j]){
					t[i][j] = t[i-1][j-cost] + k;
				}
			}
        }
    }
	cout<<dp[N][S]<<endl;
	cout<<t[N][S]<<endl;
	

    return 0;
}
