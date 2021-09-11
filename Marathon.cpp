#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int psa[10000000] = {0};
    psa[0] = 0;
    int N,Q,k,a,b,sum;
    cin>>N>>Q;
    for(int i=1; i<=N; i++){
    	cin>>k;
    	psa[i] = k+psa[i-1];
	}
	for(int i=0; i<Q; i++){
		cin>>a>>b;
		sum = psa[N]-psa[b]+psa[a-1];
		cout<<sum<<"\n";
	}
	return 0;
} 
