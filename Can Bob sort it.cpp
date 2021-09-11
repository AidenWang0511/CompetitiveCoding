#include<bits/stdc++.h>
using namespace std;

int arr[100001], arr1[100001], N;

int main(){
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>arr[i];
		arr1[i] = arr[i];
	}
	sort(arr, arr+N);
	int ans = 0;
	for(int i=0; i<N; i++){
		if(arr[i] != arr1[i]){
			ans++;
		}
	}
	if(ans > 2){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
}
