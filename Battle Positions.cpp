#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
	int I, N, J, Xi, Xk, K;
	int notSecure = 0;
	int arr[100002] = {0};
	cin>>I;
	cin>>N;
	cin>>J;
	for(int i=0; i<J; i++){
		cin>>Xi>>Xk>>K;
		arr[Xi] +=K;
		arr[Xk+1] -=K;
	}
	for(int i=1; i<=I; i++){
		arr[i] = arr[i]+arr[i-1];
		if(arr[i]<N){
			notSecure++;
		}
	}
	cout<<notSecure;
	return 0;
}
