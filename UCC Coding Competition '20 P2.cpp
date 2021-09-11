#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int N, M, x, ans=100000000;
    cin>>N;
    for(int i=0; i<N; i++){
    	int total = 0;
    	cin>>M;
    	for(int j=0; j<M; j++){
    		cin>>x;
    		total+=x;
		}
		ans=min(total, ans);
	}
	cout<<ans<<endl;
    
    
    return 0;
}
