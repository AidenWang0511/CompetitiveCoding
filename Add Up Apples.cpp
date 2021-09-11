#include <bits/stdc++.h>
using namespace std;

int n = 0;
int counter = 0;
void f(int prev, int sum, string ans){
	if(sum == n){
		counter++;
		cout<<ans<<endl;
		return;
	}
	for(int cur=prev; cur+sum<=n; cur++){
		f(cur,sum+cur, ans + "+" + to_string(cur));
	}
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1; i<=n/2; i++){
		f(i,i, to_string(n) + "=" + to_string(i));
	}
	cout<<"total="<<counter<<endl;
	
	return 0;
}
