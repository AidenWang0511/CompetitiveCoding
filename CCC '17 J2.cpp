#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,k,sum=0;
	cin>>N;
	cin>>k;
	for(int i=0; i<=k; i++){
		sum+=pow(10, i) * N;
	}
	cout<<sum<<endl;
	return 0;
}
