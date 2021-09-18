#include <bits/stdc++.h>
using namespace std;

int N,B,f[251],s[251],d[251];
bool vis[251][251];

int ans = INT_MAX;

void dfs(int cur, int b){
	if(vis[cur][b]){
		return;
	}
	vis[cur][b] = true;
	if(cur==N-1){
		ans = min(ans,b);
		return;
	}
	for(int i=cur+1; i<N && i-cur <= d[b]; i++){
		if(f[i]<=s[b]){
			dfs(i,b);
		}
		
	}

	for(int i=b+1; i<B; i++){
		if(f[cur]<=s[i]){
			dfs(cur,i);
		}
	}

}

int main(){
	freopen("snowboots.in","r",stdin); 
	freopen("snowboots.out","w",stdout);

    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
	
	cin>>N>>B;
	for(int i=0; i<N; i++){
		cin>>f[i];
	}
	for(int i=0; i<B; i++){
		cin>>s[i]>>d[i];
	}
	dfs(0,0);
	cout<<ans<<endl;
	
	return 0;
}
