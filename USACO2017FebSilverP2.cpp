#include<bits/stdc++.h>
#include <fstream>
using namespace std;

const int MAXN = 100005;

int N, K, B, prefix[MAXN];

int main(){
	freopen("maxcross.in","r",stdin); 
	freopen("maxcross.out","w",stdout); 
	cin>>N>>K>>B;
	
	while(B--){
		int x;
		cin>>x;
		prefix[x] = 1;
	}
	for(int i=1; i<=N; i++){
		prefix[i] += prefix[i-1];
	}
	int min = INT_MAX;
	for(int i=1; i<N-K+1; i++){
		if(min > prefix[i+K-1] - prefix[i]) min = prefix[i+K-1] - prefix[i];
	}
	cout<<min<<"\n";
	
	return 0;
}
