#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    for(int t=0; t<5; t++){
    	int N,sum=0,ans=0;
    	int arr[51] = {0};
    	cin>>N;
    	for(int i=0; i<N; i++){
    		cin>>arr[i];
    		sum+=arr[i];
		}
		sum = sum/N;
		for(int i=0; i<N; i++){
			if(arr[i]<sum) ans += sum-arr[i];
		}
		cout<<ans<<endl;
	}
    return 0;
}
