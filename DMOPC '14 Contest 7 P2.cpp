#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	long long max=0, min=0, N, on, off,totalOn;
	cin>>N;
	long long arrOn[N], arrOff[N];
	cin>>on>>off;
	maximum = on;
	min = on;
	arrOn[0] = on;
	arrOff[0] = off;
	for(int i=1; i<N-1; i++){
		cin>>on>>off;
		arrOn[i] = on;
		arrOff[i] = off;
		min -= off;
		if(i==1){
			maximum = maximum-off;
		}else if(arrOff[i] > arrOn[i-1]){
			maximum = maximum + (arrOn[i-1] - arrOff[i]);
		}
	}
	if(min<=0){
		cout<<0<<endl;
	}else{
		cout<<min<<endl;
	}
	cout<<max<<endl;
	return 0;
}
