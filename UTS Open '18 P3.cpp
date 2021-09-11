#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int N,T,K,V,arr[1000001],a,sum=0,ans=0;
    stack<int> s;
    cin>>N>>T>>K>>V;
    for(int i=0; i<V; i++){
    	cin>>a;
    	arr[a] = 1;
	}
	for(int i=1; i<T; i++){
		sum+=arr[i];
		if(arr[i] == 0)	s.push(i);
	}
	for(int i=T; i<N; i++){
		sum = sum+arr[i]-arr[i-T];
		if(arr[i] == 0)	s.push(i);
		while(sum<K){
			int t= s.top();
			s.pop();
			arr[t] = 1;
			sum++;
			ans++;
		}
	}
	cout<<ans<<endl;
    return 0;
}
