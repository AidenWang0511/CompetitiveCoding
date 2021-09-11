#include<bits/stdc++.h>
using namespace std;

int n, k, maxV = 0, b[1001];
int main(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>b[i];
		maxV = max(maxV,b[i]);
	}
	int ans = 0;
	for(int m=1; m<= maxV; m++){
		int count = 0, rem[1001];
		for(int i=0; i<n; i++){
			count += b[i]/m;
			rem[i] = b[i]%m;
		}
		if(count<=k/2) break;
		if(count>=k){
			ans = max(ans, k*m/2);
		}else{
			sort(rem, rem+n);
			int rest = 0,num=k-count;
			for(int i=n-1,j=0; j<num&&i>=0; j++, i--){
				rest += rem[i];
			}
			ans = max(ans, (count-k/2)*m + rest);
		}
	}
	cout<<ans<<endl;
	return 0;
} 
