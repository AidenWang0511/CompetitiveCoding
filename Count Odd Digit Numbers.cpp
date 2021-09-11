#include<bits/stdc++.h>
using namespace std;
unsigned long long N, arr[20];
int main(){
	cin>>N;
	arr[1] = 9;
	for(int i=3; i<=19; i+=2){
		arr[i] = arr[i-2]*100;
	}
	string a = to_string(N);
	int numD = a.size();
	unsigned long long ans=0, count = 1;
	if(numD % 2 == 0){
		for(int i=1; i<numD; i++){
			ans+=arr[i];
		}
	}else{
		for(int i=1; i<numD; i++){
			ans+=arr[i];
		}
		for(int i=1; i<numD; i++){
			count *= 10;
		}
		ans = ans + N - count + 1;
	}
	cout<<ans<<endl;
	
}
