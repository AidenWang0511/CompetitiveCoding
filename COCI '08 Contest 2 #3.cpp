#include <bits/stdc++.h>
using namespace std;

int n, s[10], b[10], ans = 1000000000;

void perket(int i, int prod, int sum){
	if( i == n ){
		if( sum > 0 && abs(prod-sum) < ans ) ans = abs(prod-sum);
	}else{
		perket( i+1, prod, sum);
		perket( i+1, prod*s[i], sum+b[i]);
	}
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i = 0; i < n; i++) cin>>s[i]>>b[i];
	perket(0, 1, 0);
	cout<<ans<<endl;
	return 0;
}
