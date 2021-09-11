#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int x;
	for(int i=0; i<5; i++){
		cin>>x;
		int ans=0;
		for(x; x>0; x/= 10){
			ans = max(x%10, ans);
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
