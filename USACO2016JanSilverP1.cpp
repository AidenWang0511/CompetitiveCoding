#include<bits/stdc++.h>
using namespace std;

const int MAXN = 50005;
int N, K, arr[MAXN];

bool check(int r){
	int numC = K, start = arr[0], cur;
	queue<int> q;
	for(int i=0; i<N; i++){
		q.push(arr[i]);
	}
	while(numC--){
		cur = start + 2 * r;
		if(cur>=arr[N-1]) return true;
		while(q.front() <= cur){
			q.pop();
		}
		start = q.front();
	}
	return false;
}

int main(){
	freopen("angry.in","r",stdin);
	freopen("angry.out","w",stdout);
	
	cin>>N>>K;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	sort(arr, arr+N);
	int l = 1, r = (arr[N-1]-arr[0])/K + 1, mid;
	while(l<=r){
		mid = (l+r)/2;
		if(check(mid)){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	cout<<l<<"\n";
	
	return 0;
}
