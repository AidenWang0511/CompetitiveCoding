#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 1e6 + 10;
ll c[MAXN];
int n, m, k, a, b;

int lowbit(int x) {
	return x&(-x);
}

void update(int x, int v) {
	// TODO
    for(int i=x; i<=n; i+=lowbit(i)){
        c[i] += v;
    }
}

ll getSum(int x) {
	// TODO
    ll ans=0;
    for(int i=x; i>0; i-=lowbit(i)){
        ans+=c[i];
    }
    return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int v;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>v;
		update(i, v);
	}
	
	for(int i=1; i<=m; i++) {
		cin>>k>>a>>b;
		if(k==1){
            update(a,b);
        }else{
            ll ans = getSum(b) - getSum(a-1);
            cout<<ans<<endl;
        }
	} 
	
	return 0;
}
