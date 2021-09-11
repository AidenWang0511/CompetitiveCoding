#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
    cin.tie(0);
    int N, M, x1 = 1001, x2 = 0, y1 = 1001, y2 = 0;
	char arr[1001][1001];
	cin>>N>>M;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>arr[i][j];
			if(arr[i][j] == '*'){
				x1 = min(i, x1);
				x2 = max(i, x2);
				y1 = min(j, y1);
				y2 = max(j, y2);
			}
		}
	}
	for(int i=x1; i<=x2; i++){
		for(int j=y1; j<=y2; j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}

