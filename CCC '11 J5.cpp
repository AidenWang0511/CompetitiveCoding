#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, way[7] = {1,1,1,1,1,1,1};
	cin>>N;
	for(int i=1; i<N; i++){
		int y;
		cin>>y;
		way[y] = way[y] * (1 + way[i]);
	}
	cout<<way[N]<<endl;
	return 0;
}
