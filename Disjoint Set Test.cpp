#include<bits/stdc++.h>
using namespace std;

int p[100001];

int find(int d) {
    if (p[d] != d){
        p[d] = find(p[d]);
    }
    return p[d];
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> ans;
	for(int i=1; i<=n; i++){
		p[i] = i;
	}
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		int fx = find(x), fy = find(y);
		if(fx != fy){
			p[fx] = fy;
			ans.push_back(i);
		}
	}
	if(ans.size() != n-1){
		cout<<"Disconnected Graph"<<endl;
	}else{
		for(int x:ans){
			cout<<x<<endl;
		}
	}
	return 0;
}
