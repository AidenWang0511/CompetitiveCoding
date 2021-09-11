#include <bits/stdc++.h>
using namespace std;
int N, arr[100000], num, ans;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	cin>>N;
	for (int i=0; i<N; i++) cin>>arr[i];
	sort(arr, arr + N);
	for (int i=0; i<N; i++){
		if (num <= arr[i]){
			ans++;
			num += arr[i];
		}
	}
	cout<<ans<<endl;
	
	return 0;
}

