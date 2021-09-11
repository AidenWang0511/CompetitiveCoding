#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int arr[5] = {0};
    for(int i=1 ; i<5; i++){
    	int num;
    	cin>>num;
    	arr[i] = arr[i-1] + num;
	}
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<abs(arr[j]-arr[i])<<' ';
		}
		cout<<"\n";
	}
	
    
    return 0;
}
