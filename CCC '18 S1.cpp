#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    long int arr[101] = {0};
    cin>>N;
    for(int i=0; i<N; i++){
    	cin>>arr[i];
	}
	sort(arr, arr+N);
	double final = (arr[2] - arr[0])/2;
	for(int i=1 ;i<N-1; i++){
		if(final>(arr[i+1] - arr[i-1])/2){
			final = (arr[i+1] - arr[i-1])/2.0;
		}
	}
	cout<<fixed;
	cout<<setprecision(1)<<final;
    
    return 0;
}
