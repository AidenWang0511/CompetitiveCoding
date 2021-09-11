#include<bits/stdc++.h>
using namespace std;

const int MAXN = 10005;
int N, T, arr[MAXN];

bool check(int k){
	priority_queue<int, vector<int>, greater<int>> q;
	for(int i=0; i<k; i++){
		q.push(arr[i]);
	}
	for(int i=k; i<N; i++){
		int x = q.top() + arr[i];
		q.pop();
		if(x>T) return false;
		q.push(x);
	}
	return true;
	
}

int main(){
	freopen("cowdance.in","r",stdin);
	freopen("cowdance.out","w",stdout);
	
	cin>>N>>T;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	int l=1, r=N, mid, ans;
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
