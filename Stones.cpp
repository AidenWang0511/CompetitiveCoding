#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;
int n, k, arr[101], dp[MAXN];

int solve(int x){
	if(x == 0) return 0;
	if(dp[x] != -1) return dp[x];

	int check = 0;
	for(int i = 0; i < n; i++){
        if(x >= arr[i]){
            check = max(check, (int)!solve(x - arr[i]));
        }
    }
    dp[x] = check;
	return dp[x];
}

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);

	cin>>n>>k;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
    }
	memset(dp, -1, sizeof(dp));
    cout<<(solve(k) ? "First" : "Second")<<endl;
    return 0;
}