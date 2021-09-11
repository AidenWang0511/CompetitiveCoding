#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	long long M;
	long long psa[200001] = {0};
	cin>>N>>M;
	for (int i=1; i<=N; i++){
		cin>>psa[i];
		psa[i]+=psa[i-1];
	}
	int left,right,ans=0;
	for(left = 1, right = 1; right <= N; right++) {
		while( psa[right] - psa[left-1] >= M )  left++;
		ans = max(ans, right - left + 1);
	}
	cout<<ans<<endl;
	return 0;
} 
