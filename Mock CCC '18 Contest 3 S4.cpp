#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    long long N,b,sum=0,maxN=0;
    cin>>N;
    for(int i=0; i<N; i++){
    	cin>>b;
    	sum+=b;
    	maxN = max(maxN, b);
	}
	if(sum%2==0 && maxN <= sum-maxN){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
    
    return 0;
}
