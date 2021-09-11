#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int sum(int x){
	int ans = 0;
	for(int i=0; i<=x; i++){
		ans += arr[i];
	}
	return ans;
}

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	int n,k,ans=0;
	cin>>n>>k;
	
	for(int i=0; i<n; i++) cin>>arr[i];
	sort(arr, arr+n, greater<int>());
	for(int i=0; i<k; i++){
		ans = max(ans,sum(i));
	}
	cout<<ans<<endl;
	
	return 0;
}
