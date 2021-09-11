#include<bits/stdc++.h>
using namespace std;
int arr[200001], smax[200001], smin[200001],N,Q,L,E;

int main(){
	
	cin>>N>>Q;
	for(int i=1; i<=N; i++){
		cin>>arr[i];
	}
	
	smax[N] = smin[N] = arr[N];
	
	for(int i=N-1; i>=1; i--){
		smax[i] = max(arr[i], smax[i+1]);
		smin[i] = min(arr[i], smin[i+1]);
	}
	for(int i=1; i<=Q; i++){
		cin>>L>>E;
		int lo = 1, hi = N, ans = N+1;
		while(lo<=hi){
			int mid = (lo+hi)/2;
			if(abs(smax[mid]- L) <= E && abs(smin[mid]- L) <= E){
				ans = mid;
				hi = mid-1;
			}else{
				lo = mid+1;
			}
		}
		cout<<N-ans+1<<endl;
	}
	return 0;
} 
