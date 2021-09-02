#include<bits/stdc++.h>
using namespace std;

const int MAXN = 302;
int n, dp[MAXN][MAXN], a[MAXN];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        dp[i][i] = 1;
    }
    for(int len=1; len<=n; len++){
        for(int l=1; l+len<=n; l++){
            int r = l+len;
            dp[l][r] = 1e9;
            for(int m=l; m<r; m++){
                dp[l][r] = min(dp[l][r], dp[l][m]+dp[m+1][r]);
            }
            if(a[l] == a[r]){
                dp[l][r] = min(dp[l][r], min(dp[l+1][r], dp[l][r-1]));
            }
        }
    }
    cout<<dp[1][n]<<endl;
    return 0;
}