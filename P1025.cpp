#include<bits/stdc++.h>
using namespace std;

int n,k, dp[201][7];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n>>k;
    dp[0][0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(i>=j){
                dp[i][j] = dp[i-j][j] + dp[i-1][j-1];
            }
        }
    }
    cout<<dp[n][k]<<endl;

    return 0;
}
